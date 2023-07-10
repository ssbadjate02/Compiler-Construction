%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdarg.h>
    // #include "header.h"
    #include "symboltable.c"
    #define here printf("\n\nHEHEHEHEHRRHERE\n\n");
    
    
    void yyerror();
    int yylex();
    int yywrap();
    int ex (nodeType *p, int flag);
    nodeType *opr(int oper, int nops, ...);
    nodeType *id(char *identifier);
    nodeType *con(char *value);
    int scope = 0;
    int if_assign = 1;
    char functionName[40];
    int isInFunction =0;
    
%}
%union
{
    int ival;
    nodeType *nPtr;
    char string[128];
}
%token IDENTIFIER CONSTANT STRING_LITERAL
%token INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP 
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 
%token CHAR INT FLOAT CONST VOID MAIN
%token <string> PRINTF
%token IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
    
%start translation_unit
    
%type <string> IDENTIFIER INT FLOAT STRING_LITERAL CONSTANT CHAR 
    
%type <nPtr> assignment var expr_or_assignment
    
%type <nPtr> statement arglist2 compound_statement expression_statement func_call function_definition print
    
%type <nPtr> expr declarator declarator_list arglist function_declarator specifier_declator_list statement_com_list
    
%type <nPtr> iteration_statement translation_unit statement_list declaration_list declaration_statment_list
    
%type <nPtr> external_declaration declaration
%type <nPtr> specifier
%type <nPtr> selection_statement jump_statement 
%type <nPtr> unary_expr1 unary_expr2 binary_expr
%left OR_OP
%left AND_OP
%left EQ_OP NE_OP

%left '<' '>' LE_OP GE_OP
%left '+' '-'
%left '*' '/' '%'
%right '!' '~'
%left INC_OP DEC_OP
%left LEFT_OP RIGHT_OP
%right '=' MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%left '?'
%left ':'
%left '(' ')'

%left '{' '}'
%left ';'
%left ','
%right '[' ']'
%left IDENTIFIER CONSTANT STRING_LITERAL
%%
declaration_list: declaration_list declaration {$$ = opr('\n',2,$1,$2);}
    | declaration {$$ = $1;}
    ;
declaration: specifier declarator_list ';'      {
    check_multiple_declaration($1->id.name,$2,scope,isInFunction,functionName);
    $$ = opr(';',1,$2);
}
    ;

specifier : INT {$$ = id($1);}
    | CHAR      {$$ = id($1);}
    | FLOAT     {$$ = id($1);}
    ;
    
declarator_list: declarator                     {$$ = $1;}
    | declarator_list ',' declarator            {$$ = opr(',',2,$1,$3);} 
    ;
    
declarator: var '=' expr                        {$$ = opr('=',2,$1,$3);}
    | var                                       {$$ = $1;}
    | var '=' '{' arglist '}'                     {$$ = opr('y',2,($1),($4));}
    | var '=' '{'arglist2 '}'                     {$$ = opr('u',2,$1,$4);}
    | var '=' STRING_LITERAL                     {$$ = opr('s',2,$1,con($3));}
    ;
arglist2 : '{'arglist'}'                          {$$ = $2;}
    | arglist2 ',' '{'arglist'}'                {$$ = opr('x',2,$1,$4);}
    ;
var: IDENTIFIER                                 {$$ = id($1);}
    | var '[' expr ']''[' expr ']'              {$$ = opr('2',3,$1,$3,$6);}
    | var '[' expr ']'                          {$$ = opr('a',2,$1,$3);}
    ;
    
func_call :	 IDENTIFIER'('')'                          {$$ = opr('f',1,id($1));}
    | IDENTIFIER'('arglist')'                   {$$ = opr('f',2,id($1),$3);}
    ;
    
arglist
    : var                               {$$ = $1;}
    | arglist ',' var                   {$$ = opr(',',2,$1,$3);}
    | expr                              {$$ = $1;}
    | arglist ',' expr                  {$$ = opr(',',2,$1,$3);}
    
expr : unary_expr1                              {$$ = $1; check_undeclared_variables($$,scope,isInFunction,functionName);}
    | unary_expr2                               {$$ = $1; check_undeclared_variables($$,scope,isInFunction,functionName);}
    | binary_expr                               {$$ = $1; check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '?' expr ':' expr                    {'?',2,$1,opr(':',2,$3,$5); check_undeclared_variables($1,scope,isInFunction,functionName); check_undeclared_variables($3,scope,isInFunction,functionName); check_undeclared_variables($5,scope,isInFunction,functionName);}
    | '(' expr ')'                              {$$ = $2; check_undeclared_variables($2,scope,isInFunction,functionName);}
    | var                                       {
        $$ = $1; check_undeclared_variables($$,scope,isInFunction,functionName);
            
    }    
    | CONSTANT                                  {$$ = con($1); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | func_call                                 {$$ = $1; check_valid_function_call($1,scope,isInFunction,functionName);}
    | STRING_LITERAL                            {$$ = con($1); }
    ;
    
/* constant:
    INT
    FLOAT
    stringliteral */
constant_expr :
    CONST assignment
    ;
    
assignment : var '=' expr       {$$ = opr('=',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName); }
    | var AND_ASSIGN expr       {$$ = opr('=',2,$1,opr('&',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var OR_ASSIGN expr        {$$ = opr('=',2,$1,opr('|',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var LEFT_ASSIGN expr      {$$ = opr('=',2,$1,opr('l',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var RIGHT_ASSIGN expr     {$$ = opr('=',2,$1,opr('r',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var MUL_ASSIGN expr       {$$ = opr('=',2,$1,opr('*',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var DIV_ASSIGN expr       {$$ = opr('=',2,$1,opr('/',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var MOD_ASSIGN expr       {$$ = opr('=',2,$1,opr('%',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var ADD_ASSIGN expr       {$$ = opr('=',2,$1,opr('+',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var SUB_ASSIGN expr       {$$ = opr('=',2,$1,opr('-',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var XOR_ASSIGN expr       {$$ = opr('=',2,$1,opr('^',2,$1,$3)); check_undeclared_variables($$,scope,isInFunction,functionName);}
    ;
binary_expr: expr '+' expr  {$$ = opr('+',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '-' expr         {$$ = opr('-',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '*' expr         {$$ = opr('*',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '/' expr         {$$ = opr('/',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '<' expr         {$$ = opr('<',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr '>' expr         {$$ = opr('>',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr AND_OP expr      {$$ = opr('&',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr OR_OP expr       {$$ = opr('|',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr LEFT_OP expr     {$$ = opr('l',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr RIGHT_OP expr    {$$ = opr('r',2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr LE_OP expr       {$$ = opr(LE_OP,2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr GE_OP expr       {$$ = opr(GE_OP,2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr EQ_OP expr       {$$ = opr(EQ_OP,2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | expr NE_OP expr       {$$ = opr(NE_OP,2,$1,$3); check_undeclared_variables($$,scope,isInFunction,functionName);}
    ;
unary_expr1 : INC_OP var    {$$ = opr('=', 2, $2, opr('+', 2, $2, con("1") ) );check_undeclared_variables($$,scope,isInFunction,functionName);}
    | DEC_OP var            {$$ = opr('=', 2, $2, opr('+', 2, $2, con("1") ) );check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var INC_OP            {$$ = opr('=', 2, $1, opr('+', 2, $1, con("1") ) );check_undeclared_variables($$,scope,isInFunction,functionName);}
    | var DEC_OP            {$$ = opr('=', 2, $1, opr('-', 2, $1, con("1") ) );check_undeclared_variables($$,scope,isInFunction,functionName);}
    ;
    
unary_expr2 :'!' expr       {$$ = opr('!',1,$2); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | '~' expr              {$$ = opr('~',1,$2); check_undeclared_variables($$,scope,isInFunction,functionName);}
    | '+' expr				{$$ = opr('+',1,$2);check_undeclared_variables($$,scope,isInFunction,functionName);}
	| '-' expr				{$$ = opr('-',1,$2);check_undeclared_variables($$,scope,isInFunction,functionName);}
    ;
statement
    : declaration
    | compound_statement {$$ = $1;}
    | expression_statement {$$ = $1;}
    | selection_statement {$$ = $1;}
    | iteration_statement {$$ = $1;}
    | jump_statement {$$ = $1;}
    | assignment ';'
    | print ';' {$$ = $1;}
    ;
print : PRINTF '(' STRING_LITERAL  ')' {
    $$ = id($3);
    char str[100];
    strcpy(str,$3);
    char types[10][10];
    int j = 0;
    for(int i=0;i<99;i++){
        if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
            if(str[i+1] == 'd'){
                strcpy(types[j],"int");
            }
            else if(str[i+1] == 'f'){
                strcpy(types[j],"float");
            }
            else if(str[i+1] == 'c'){
                strcpy(types[j],"char");
            }
            else if(str[i+1] == 's'){
                strcpy(types[j],"string");
            }
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%s\n",types[i]);
    }
    printf("No Args");

}
| PRINTF '(' STRING_LITERAL  ',' arglist')' {
    $$ = id($3);
    char str[100];
    strcpy(str,$3);
    char types[10][10];
    int j = 0;
    for(int i=0;i<99;i++){
        if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
            if(str[i+1] == 'd'){
                strcpy(types[j],"int");
            }
            else if(str[i+1] == 'f'){
                strcpy(types[j],"float");
            }
            else if(str[i+1] == 'c'){
                strcpy(types[j],"char");
            }
            else if(str[i+1] == 's'){
                strcpy(types[j],"string");
            }
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%s\n",types[i]);
    }
    type_cnt = 0;
    memset(typess,0,sizeof(typess));
    arg_parse($5,scope,isInFunction,functionName);
    for(int i=0;i<type_cnt;i++){
        printf("%s\n",typess[i]);
    }
    if(j!=type_cnt){
        printf("\nError: Number of arguments do not match in printf\n");
        yyerror();
    }
    for(int i=0;i<j;i++){
        if(strcmp(types[i],typess[i])!=0){
            printf("\nError: Type of arguments do not match in printf\n");
            yyerror();
        }
    }
}
    ;

expression_statement
    : expr ';' {$$ = $1;}
    | ';'
    ;
    
    
statement_list
    : statement {$$ = $1;}
    | statement_list statement {$$ = opr('\n',2,$1,$2);}
    ;
    
compound_statement
    : '{' {scope++;}declaration_statment_list{scope--;} '}' {$$ = $3;}
    | '{' {scope++;}statement_list {scope--;} '}'{$$ = $3;}
    | '{' '}'{$$ = id("empty");}
    ;

declaration_statment_list: declaration_list statement_com_list {$$ = opr('\n',2,$1,$2);}
    ;

statement_com_list: {$$ = id("");}
    | statement_list {$$ = $1;}
    ;    
selection_statement
	: IF '(' expr ')' statement		{$$ = opr(IF,2,$3,$5);}
	| IF '(' expr ')' statement ELSE statement{$$ = opr(IF+ELSE,3,$3,$5,$7);}
	| SWITCH '(' expr ')' statement
	;

iteration_statement
	: WHILE '(' expr ')' statement 									{$$ = opr(WHILE,2,$3,$5);}
	| DO statement WHILE '(' expr ')' ';'							{$$ = opr(DO+WHILE,2,$2,$5);}
	| FOR {scope++;}'(' declaration expression_statement expr_or_assignment {scope--;}')' statement	{$$ = opr(FOR,4,$4,$5,$6,$9);}
	/* | FOR {scope++;} '(' declaration expression_statement {scope--;}')' statement		{$$ = opr(FOR,3,$4,$5,$8);} */
	;
expr_or_assignment: expr  {$$ = $1;}
    | assignment {$$ = $1;}
    ;

jump_statement
	: GOTO IDENTIFIER ';' 		{$$ = opr('j',2,id("goto"),id($2));}
	| CONTINUE ';'				{$$ = id("continue");}
	| BREAK ';'					{$$ = opr(BREAK,0);}
	| RETURN expression_statement {$$ = opr('e',2,id("return"),$2);}
	/* | RETURN ';'				{$$ = opr(RETURN ,0);}
	| RETURN expr ';'			{$$ = opr(RETURN,1,$2);} */
	;
function_declarator: IDENTIFIER  '(' specifier_declator_list')' {$$ = opr('f',2,id($1),$3);isInFunction=1;strcpy(functionName,$1);}
| IDENTIFIER '(' ')' {$$ = id($1);isInFunction=1;strcpy(functionName,$1);}
| IDENTIFIER '(' ')' {$$ = id($1);isInFunction=1;strcpy(functionName,$1);}
;
specifier_declator_list: specifier_declator_list ',' specifier var	 {$$ = opr('z',2,$1,opr('k',2,($3),$4));}
| specifier var {$$ = opr('k',2,($1),$2);}
;
function_definition
: specifier function_declarator compound_statement {
    //Storing Function in Symbol Table
    // insert_function($1,$2);
    insert_function($1->id.name,$2,isInFunction,functionName);
    isInFunction =0;
    strcpy(functionName,"+GLOBAL+");
    // char *specifier = $1->id.name;
    // char *name = $2->opr.op[0]->id.name;
    // int hash = fast_function_insert(specifier,name);
    
    // int i = 0;
    // nodeType* root = $2->opr.op[1];
    // //Insert Args as Global Variables while function calling
    // //Now Just Store Args in Symbol Table
    // while(root->opr.op[1]->opr.op[0] != NULL)
    // {

    //     // printf("%s ",root->opr.op[1]->opr.op[0]->id.name);
    //     strcpy(symbol_table_function[hash].argstype[i],root->opr.op[1]->opr.op[0]->id.name);
    //     strcpy(symbol_table_function[hash].args[i],root->opr.op[1]->opr.op[1]->id.name);
    //     i++;
    //     root = root->opr.op[0];
    // }
    // strcpy(symbol_table_function[hash].argstype[i] , root->opr.op[0]->id.name);
    // strcpy(symbol_table_function[hash].args[i] , root->opr.op[1]->id.name);
    // i++;
    // symbol_table_function[hash].args_len = i;
    
    // Compound Statement
    $$ = opr('g',2,$2,$3);
}

| VOID function_declarator compound_statement {
    $$ = opr('g',2,$2,$3);
    
}
;
translation_unit
    : external_declaration
    | translation_unit external_declaration
    ;
external_declaration
        : INT MAIN '(' ')'{isInFunction = 1; strcpy(functionName,"MAIN");} compound_statement   {ex($6, 0);icg_generation($6);}
        | function_definition                   {                        
                                                if(if_assign)
                                                {											
                                                    ex($1, 2); /*freeNode($2);*/
                                                }
                                            }
        | declaration                           {                        
                                                if(if_assign)
                                                {											
                                                    ex($1, 2); /*freeNode($2);*/
                                                }
                                            }	
        ;
    
%%
    
    
int main() {
    yyparse();
    print_symbol_table();
}
    
void yyerror() {
    printf("Invalid Syntax");
}
    
    
    
nodeType *con(char *value)
{
    nodeType *p;
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeCon;
    strcpy(p->con.value, value);
    /* printf("value=%s",value) */
    return p;
}
nodeType *id(char *identifier) {
    nodeType *p;
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeId;
    strcpy(p->id.name,identifier);
    /* printf("The copied identifier %s\n", p->id.name); */
    return p;
}
    
nodeType *opr(int oper, int nops, ...)
{
    va_list ap;
    nodeType *p;
    int i;
    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}
