 #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include <stdarg.h>
    #include <stdbool.h>
    #include "graph.c"
    extern void yyerror();
    #define GLOBAL -1
struct variables{
    char name[50];
    char type[10];
    char functionName[50];
    int len;
    int scope;
    bool array;
    int array_size;
    int array_size_2;
    void *value;
} symbol_table[1009];
struct functions{
    char name[50];
    char type[10];
    int len;
    char args[10][50];
    char argstype[10][10];
    int args_len;
} symbol_table_function[1009];
char typess[10][10];
int type_cnt = 0;
int argument_count;
const int m = 1009,p = 97;
void add(int *a,int b){
    *a += b;
    *a %= m;
}
int fast_string_hash(char *name){
    int hash = 0,exp = 1;
    for (int i=0;i<strlen(name);i++) {
        char c = name[i];
        add(&hash,(c - 'a' + 1) * exp);
        exp = (exp * p) % m;
    }
    return hash;
}


bool fast_string_lookup(char *name, int scope,int isInFunction,char *functionName)
{
    // printf("Scope_lookop = %d",scope);
    char scopeName[40],funcScopeName[40];
    sprintf(scopeName, "%d+%s", scope, name);
    if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    else strcpy(funcScopeName,scopeName);
    int hash = fast_string_hash(funcScopeName);
    // printf("look up = %d name = %s\n",hash,name);
    if (!symbol_table[hash].len)
        return 0;
    if (!strcmp(symbol_table[hash].name, name) && (!strcmp(symbol_table[hash].functionName,functionName)))
        return 1;
    int i = 0;
    for (int newhash = hash + 1; newhash != hash && i < 100; add(&newhash, 1))
    {
        if (!strcmp(symbol_table[newhash].name, name) && !strcmp(symbol_table[newhash].functionName,functionName))
            return 1;
        i++;
    }
    return 0;
}
bool fast_function_lookup(char *name){
    int hash = fast_string_hash(name);
    if(!symbol_table_function[hash].len) return 0;
    if(!strcmp(symbol_table_function[hash].name,name)) return 1;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table_function[newhash].name,name)) return 1;
    }
    return 0;
} 
bool fast_lookup(char *name, int scope,int isInFunction,char *functionName)
{
    return fast_string_lookup(name, scope,isInFunction,functionName) || fast_function_lookup(name);
}
int fast_string_insert_(char *type, char *name, int scope,int isInFunction,char *functionName)
{
 
    if (fast_lookup(name, scope,isInFunction,functionName))
    {
        printf("Error ! Name is Repeated");
        return -1;
    }
    char scopeName[40],funcScopeName[40];
    sprintf(scopeName, "%d+%s", scope, name);
    if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    else strcpy(funcScopeName,scopeName);
    int hash = fast_string_hash(funcScopeName);
    if (!symbol_table[hash].len)
    {
        strcpy(symbol_table[hash].name, name);
        strcpy(symbol_table[hash].type, type);
        strcpy(symbol_table[hash].functionName, functionName);
        symbol_table[hash].len = strlen(name);
        printf("Inserted Variable %s of type %s at Position %d \n", name, type, hash);
        symbol_table[hash].scope = scope;
        return hash;
    }
    for (int newhash = hash + 1; newhash != hash; add(&newhash, 1))
    {
        if (!symbol_table[newhash].len)
        {
            strcpy(symbol_table[newhash].name, name);
            strcpy(symbol_table[newhash].type, type);
            symbol_table[newhash].len = strlen(name);
            strcpy(symbol_table[newhash].functionName, functionName);
 
            symbol_table[newhash].scope = scope;
            printf("Inserted Variable %s of type %s at Position %d \n", name, type, newhash);
            return hash;
        }
    }
    return -1;
    printf("Error ! Variable Limit Exceeded");
}
 
int fast_string_insert(char *type, char *name, int scope,int isInFunction,char* functionName)
{
    fast_string_insert_(type, name, scope,isInFunction,functionName);
}
void allocateSpaceToArray(int hash){
    char *type = symbol_table[hash].type;
    int array_size = symbol_table[hash].array_size;
    if(!strcmp(type,"int")){
        symbol_table[hash].value = malloc(sizeof(int)*array_size);
    }
    else if(!strcmp(type,"float")){
        symbol_table[hash].value = malloc(sizeof(float)*array_size);
    }
    else if(!strcmp(type,"char")){
        symbol_table[hash].value = malloc(sizeof(char)*array_size);
    }
    else if(!strcmp(type,"string")){
        symbol_table[hash].value = malloc(sizeof(char)*array_size);
    }
}
void allocateSpaceToArray2D(int hash){
    char *type = symbol_table[hash].type;
    int array_size = symbol_table[hash].array_size;
    int array_size_2 = symbol_table[hash].array_size_2;
    
    if(!strcmp(type,"int")){
        int **val = malloc(sizeof(int *)*array_size);
        for(int i=0;i<array_size;i++){
           val[i] = (int *)malloc(sizeof(int)*array_size_2);
        }
        symbol_table[hash].value = (void*) val;        
    }
    else if(!strcmp(type,"float")){
        symbol_table[hash].value = malloc(sizeof(float)*array_size);
    }
    else if(!strcmp(type,"char")){
        symbol_table[hash].value = malloc(sizeof(char)*array_size);
    }
    else if(!strcmp(type,"string")){
        symbol_table[hash].value = malloc(sizeof(char)*array_size);
    }
}
int fast_array_insert(char *type,char *name,int scope,int array_size,int isInFunction,char *functionName){
    if(fast_lookup(name,scope,isInFunction,functionName)){
        printf("Error ! Name is Repeated");
        return -1;
    }
    char scopeName[40],funcScopeName[40];
    sprintf(scopeName, "%d+%s", scope, name);
    if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    else strcpy(funcScopeName,scopeName);
    int hash = fast_string_hash(funcScopeName);
    if(!symbol_table[hash].len){
        strcpy(symbol_table[hash].name,name);
        strcpy(symbol_table[hash].type,type);
        symbol_table[hash].len = strlen(name);
        symbol_table[hash].scope = scope;
        symbol_table[hash].array = 1;
        symbol_table[hash].array_size = array_size;
        printf("Inserted Array %s of type %s at Position %d \n",name,type,hash);
        allocateSpaceToArray(hash);
        printf("Allocated Space\n");
        
        return hash;
    }
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!symbol_table[newhash].len){
            strcpy(symbol_table[newhash].name,name);
            strcpy(symbol_table[newhash].type,type);
            symbol_table[newhash].len = strlen(name);
            symbol_table[newhash].scope = scope;
            symbol_table[newhash].array = 1;
            symbol_table[newhash].array_size = array_size;
            printf("Inserted Array %s of type %s at Position %d \n",name,type,newhash);
            allocateSpaceToArray(hash);
            printf("Allocated Space\n");
            return hash;
        }
    }
    printf("Error ! Variable Limit Exceeded");
    return -1;
}
int fast_array_insert2D(char *type,char *name,int scope,int array_size,int array_size_2,int isInFunction,char *functionName){
    if(fast_lookup(name,scope,isInFunction,functionName)){
        printf("Error ! Name is Repeated");
        return -1;
    }
    char scopeName[40],funcScopeName[40];
    sprintf(scopeName, "%d+%s", scope, name);
    if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    else strcpy(funcScopeName,scopeName);
    int hash = fast_string_hash(funcScopeName);
    if(!symbol_table[hash].len){
        strcpy(symbol_table[hash].name,name);
        strcpy(symbol_table[hash].type,type);
        symbol_table[hash].len = strlen(name);
        symbol_table[hash].scope = scope;
        symbol_table[hash].array = 1;
        symbol_table[hash].array_size = array_size;
        symbol_table[hash].array_size_2 = array_size_2;
        printf("Inserted 2D %s of type %s at Position %d \n",name,type,hash);
        allocateSpaceToArray2D(hash);
        printf("Allocated Space 2D\n");
        
        return hash;
    }
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!symbol_table[newhash].len){
            strcpy(symbol_table[newhash].name,name);
            strcpy(symbol_table[newhash].type,type);
            symbol_table[newhash].len = strlen(name);
            symbol_table[newhash].scope = scope;
            symbol_table[newhash].array = 1;
            symbol_table[newhash].array_size = array_size;
            symbol_table[newhash].array_size_2 = array_size_2;
            printf("Inserted 2D Array %s of type %s at Position %d \n",name,type,newhash);
            allocateSpaceToArray2D(hash);
            printf("Allocated Space 2D\n");
            return hash;
        }
    }
    printf("Error ! Variable Limit Exceeded");
    return -1;

    
}
int fast_function_insert(char *type,char *name){
    if(fast_lookup(name, 0,0,"")){
        printf("Error ! Name is Repeated");
        return -1;
    }
    int hash = fast_string_hash(name);
    if(!symbol_table_function[hash].len){
        strcpy(symbol_table_function[hash].name,name);
        strcpy(symbol_table_function[hash].type,type);
        symbol_table_function[hash].len = strlen(name);
        printf("Inserted Function %s of type %s at Position %d \n",name,type,hash);
        return hash;
    }
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!symbol_table_function[newhash].len){
            strcpy(symbol_table_function[newhash].name,name);
            strcpy(symbol_table_function[newhash].type,type);
            symbol_table_function[newhash].len = strlen(name);
            printf("Inserted Variable %s of type %s at Position %d \n",name,type,newhash);
            return hash;
        }
    }
    return -1;
    printf("Error ! Variable Limit Exceeded");
}
bool fast_type_check(int hash,char *type){
    if(!symbol_table[hash].len) return 0;
    if(!strcmp(symbol_table[hash].type,type)) return 1;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table[newhash].type,type)) return 1;
    }
    return 0;
}
bool fast_type_check_function(int hash,char *type){
    if(!symbol_table_function[hash].len) return 0;
    if(!strcmp(symbol_table_function[hash].type,type)) return 1;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table_function[newhash].type,type)) return 1;
    }
    return 0;
}
char* fast_type_lookup(char *name){
    int hash = fast_string_hash(name);
    if(!symbol_table[hash].len) return NULL;
    if(!strcmp(symbol_table[hash].name,name)) return symbol_table[hash].type;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table[newhash].name,name)) return symbol_table[newhash].type;
    }
    return NULL;
}
char* fast_type_lookup_function(char *name){
    int hash = fast_string_hash(name);
    if(!symbol_table_function[hash].len) return NULL;
    if(!strcmp(symbol_table_function[hash].name,name)) return symbol_table_function[hash].type;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table_function[newhash].name,name)) return symbol_table_function[newhash].type;
    }
    return NULL;
}
void assignment(int hash,nodeType *node){
    char *type = symbol_table[hash].type;
    if(!strcmp(type,"int")){
        int y = atoi(node->con.value);
        printf("%d",node->opr.oper);
        printf("y = %d",y);
        int *x = &y;
        symbol_table[hash].value = (void*)x;
        printf("Value of Variable %s is %d\n",symbol_table[hash].name,*(int *)symbol_table[hash].value);
    }
    else if(!strcmp(type,"float")){
        float y = atoi(node->con.value);
        printf("y = %d",y);
        float *x = &y;
        symbol_table[hash].value = (void*)x;
        printf("Value of Variable %s is %d\n",symbol_table[hash].name,*(float *)symbol_table[hash].value);
    }
     else if(!strcmp(type,"float")){
        char y = atoi(node->con.value);
        printf("y = %d",y);
        char *x = &y;
        symbol_table[hash].value = (void*)x;
        printf("Value of Variable %s is %d\n",symbol_table[hash].name,*(char *)symbol_table[hash].value);
    }
}
void array_assignment(int hash,nodeType *node){
    char *type = symbol_table[hash].type;
    if(!strcmp(type,"int")){
        int *x = symbol_table[hash].value;
        int j = symbol_table[hash].array_size - 1;
        printf("j = %d\n",j);
        while(node->opr.op[0]->type == typeOpr){
           x[j--] = atoi(node->opr.op[1]->con.value);
           printf("x[%d] = %d\n",j+1,x[j+1]);
           node = node->opr.op[0];
        }
        x[j--] = atoi(node->opr.op[1]->con.value);
        x[j] = atoi(node->opr.op[0]->con.value);
        printf("x[%d] = %d\n",j+1,x[j+1]);
        printf("x[%d] = %d\n",j,x[j]);
    }
    if(!strcmp(type,"float")){
        float *x = symbol_table[hash].value;
        int j = symbol_table[hash].array_size - 1;
        printf("j = %d\n",j);
        while(node->opr.op[0]->type == typeOpr){
           x[j--] = atof(node->opr.op[1]->con.value);
           printf("x[%d] = %f\n",j+1,x[j+1]);
           node = node->opr.op[0];
        }
        x[j--] = atof(node->opr.op[1]->con.value);
        x[j] = atof(node->opr.op[0]->con.value);
        printf("x[%d] = %f\n",j+1,x[j+1]);
        printf("x[%d] = %f\n",j,x[j]);
    }
    if(!strcmp(type,"char")){
        char *x = symbol_table[hash].value;
        int j = symbol_table[hash].array_size - 1;
        printf("j = %d\n",j);
        while(node->opr.op[0]->type == typeOpr){
           x[j--] = (node->opr.op[1]->con.value)[1];
           printf("x[%d] = %c\n",j+1,x[j+1]);
           node = node->opr.op[0];
        }
        x[j--] = (node->opr.op[1]->con.value)[1];
        x[j] = (node->opr.op[0]->con.value)[1];
        printf("x[%d] = %c\n",j+1,x[j+1]);
        printf("x[%d] = %c\n",j,x[j]);
    }
}
void array_assignment2D(){
    
}

void check_multiple_declaration(char* specifier, nodeType* node,int scope,int isInFunction,char* functionName){
    	
        if(node->type == typeId)
    	{
            // printf("scope mul = %d\n",scope);
    		if(fast_string_lookup(node->id.name,scope,isInFunction,functionName)){
                yyerror();
                // printf("gerre\n\n");
                return;
            }
    		fast_string_insert(specifier, node->id.name,scope,isInFunction,functionName);
            // printf("gerre\n\n");
    	}
    	if(node->type == typeOpr)
    	{
            
    		if(node->opr.oper == '=')
            {
    			check_multiple_declaration(specifier, node->opr.op[0],scope,isInFunction,functionName);
                char scopeName[40],funcScopeName[40];
                sprintf(scopeName, "%d+%s", scope, node->opr.op[0]->id.name);
                if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
                else strcpy(funcScopeName,scopeName);
                int hash = fast_string_hash(funcScopeName);
                assignment(hash,node->opr.op[1]);
            }
            else if(node->opr.oper == 'a'){
                // fast_string_insert()
                fast_array_insert(specifier,node->opr.op[0]->id.name,scope,atoi(node->opr.op[1]->con.value),isInFunction,functionName);
                printf("Array Declaration\n of size %d\n",atoi(node->opr.op[1]->con.value));
            }
            else if(node->opr.oper == '2'){
                fast_array_insert2D(specifier,node->opr.op[0]->id.name,scope,atoi(node->opr.op[1]->con.value),atoi(node->opr.op[2]->con.value),isInFunction,functionName);
                printf("2D Array Declaration\n of size %d %d\n",atoi(node->opr.op[1]->con.value),atoi(node->opr.op[2]->con.value));
            }
            else if(node->opr.oper == 'y'){
                nodeType* nd = node->opr.op[0];
                int hash = fast_array_insert(specifier,nd->opr.op[0]->id.name,scope,atoi(nd->opr.op[1]->con.value),isInFunction,functionName);
                // printf("Array Declaration\n of size %d\n",atoi(node->opr.op[1]->con.value));
                array_assignment(hash,node->opr.op[1]);
            }
    		else if(node->opr.oper == ',')
    		{
                // printf("Multiple Variable Declaration\n");
    			check_multiple_declaration(specifier, node->opr.op[0],scope,isInFunction,functionName);
    			check_multiple_declaration(specifier, node->opr.op[1],scope,isInFunction,functionName);
    		}
    	} 
}

void check_valid_function_call(nodeType *node, int scope,int isInFunction,char *functionName)
{
    if (!fast_function_lookup(node->opr.op[0]->id.name))
    {
        printf("Invalid Function Name : %s", node->opr.op[0]->id.name);
        yyerror("Invalid Function Name");
        return;
    }
    argument_count = 0;
    // check_function_args(node->opr.op[1], scope,isInFunction,functionName);
    int hash = fast_string_hash(node->opr.op[0]->id.name);
    // if (argument_count != symbol_table_function[hash].args_len)
    //     printf("%s Arguments count don't match\n", symbol_table_function[hash].args[0]);
}
void insert_function(char *specifier, nodeType *node,int isInFunction,char *functionName)
{
    // char *specifier = $1->id.name;
    char *name;
    // printf("\n\nsisfunc%d\n\n",isInFucntion);
    if(node->type == typeOpr )name = node->opr.op[0]->id.name;
    else name = node->id.name;
    int hash = fast_function_insert(specifier, name);
 
    int i = 0;
    // strcpy(symbol_table_function[hash].name,node->)
    if(node->type==typeId) return;
    nodeType *root = node->opr.op[1];
    // Insert Args as Global Variables while function calling
    // Now Just Store Args in Symbol Table
    
    while (root->opr.op[1]->opr.op[0] != NULL)
    {
 
        // printf("%s ",root->opr.op[1]->opr.op[0]->id.name);
        // strcpy(symbol_table_function[hash].argstype[i], root->opr.op[1]->opr.op[0]->id.name);
        // strcpy(symbol_table_function[hash].args[i], root->opr.op[1]->opr.op[1]->id.name);
        // fast_string_insert(specifier, root->opr.op[1]->opr.op[0]->id.name,1,isInFunction,functionName);
        fast_string_insert(root->opr.op[1]->opr.op[0]->id.name, root->opr.op[1]->opr.op[1]->id.name,1,isInFunction,functionName);
        i++;
        root = root->opr.op[0];
    }
    // fast_string_insert(specifier, root->opr.op[1]->opr.op[0]->id.name,1,isInFunction,functionName);
    fast_string_insert(root->opr.op[0]->id.name, root->opr.op[1]->id.name,1,isInFunction,functionName);
    i++;
    symbol_table_function[hash].args_len = i;
 
    // Compound Statement
}
void dfs(nodeType* node)
{
	if(node == NULL) return;
	printf("%d ", node->type);
	if(node->type == typeId)
    	printf("%s\n",node->id.name);
    if(node->type == typeCon)
    	printf("%s\n",node->con.value);
    if(node->type == typeOpr)
    {
    	printf("%c\n", node->opr.oper);
    	for(int i = 0;i<node->opr.nops;i++){
    		dfs(node->opr.op[i]);
    	}
    }
}
bool check_undeclared_variables(nodeType *node, int scope, int isInFunction, char *functionName)
{

    if (node->type == typeId)
    {
        // printf("scope undec %s = %d\n",node->id.name,scope);
        int isDeclared = 0;

        for (int i = 0; i <= scope; i++)
        {
            if (fast_string_lookup(node->id.name, i,isInFunction,functionName))
            {
                char scopeName[40];
                sprintf(scopeName,"%d%s",scope,node->id.name);
                int hash = fast_string_hash(scopeName);
                // printf("Hash : %d", hash);
                isDeclared = 1;
            }
        }
        if (!isDeclared)
            printf("Undeclared variable : %s", node->id.name);
        return isDeclared;
    }
    if (node->type == typeOpr)
    {
        for (int i = 0; i < node->opr.nops; i++)
            check_undeclared_variables(node->opr.op[i], scope,isInFunction,functionName);
    }
}
void check_function_args(nodeType *node, int scope,int isInFunction,char *functonName)
{
    if (node->type == typeId)
    {
        int isDeclared = 0;
        for (int i = 0; i <= scope; i++)
        {
            if (fast_string_lookup(node->id.name, i,isInFunction,functonName))
            {
                // printf("Undeclared variable : %s", node->id.name);
                isDeclared = 1;
            }
        }
        if (!isDeclared)
        {
            printf("Undeclared variable : %s", node->id.name);
            return;
        }
    argument_count++;
    }
    if (node->type == typeCon)
    {
        argument_count++;
    }
if (node->type == typeOpr)
{
    for (int i = 0; i < node->opr.nops; i++)
        check_function_args(node->opr.op[i], scope,isInFunction,functonName);
}
}
void arg_parse(nodeType *node, int scope,int isInFunction,char *functonName)
{
    char* types[10];

    if (node->type == typeId)
    {
        int isDeclared = 0;
        for (int i = 0; i <= scope; i++)
        {
            if (fast_string_lookup(node->id.name, i,isInFunction,functonName))
            {
                 char scopeName[40],funcScopeName[40];
                sprintf(scopeName, "%d+%s", scope, node->id.name);
                if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functonName,scopeName);
                else strcpy(funcScopeName,scopeName);
                int hash = fast_string_hash(scopeName);
                strcpy(typess[type_cnt],symbol_table[hash].type);
                type_cnt++;
                isDeclared = 1;
            }
        }
        if (!isDeclared)
        {
            printf("Undeclared variable : %s", node->id.name);
            return;
        }
    argument_count++;
    
}
if (node->type == typeOpr)
{
    for (int i = 0; i < node->opr.nops; i++)
        arg_parse(node->opr.op[i], scope,isInFunction,functonName);
}
}
    /*ICG*/
    int temp = 0;
    int ptr = 0;
    struct ICG
    {
    	char op1[128];
    	char op2[128];
    	char op[128];
    	char res[128]
    } icg[1000];
    
    struct ICG2
    {
    	char code[100];
    } icg2[1000];
     
   float t[1000];
     
    void insert_in_icg(char* op, char* op1, char* op2, char* result, int idx)
    {
    	strcpy(icg[idx].op1, op1);
    	strcpy(icg[idx].op2, op2);
    	strcpy(icg[idx].op, op);
    	strcpy(icg[idx].res, result);
    }
     
    char rel_op[] = {LE_OP, GE_OP,EQ_OP, NE_OP, '<', '>'};
    char arithmetic_op[] = {'+', '-', '*', '/','&','|'};
    bool is_relational_operator(char op)
    {
    	for(int i = 0;i<6;i++)
    	{
    		if(op == rel_op[i])
    			return true;
    	}
    	return false;
    }
     
    bool is_arithmetic_operator(char op)
    {
    	for(int i = 0;i<6;i++)
    	{
    		if(op == arithmetic_op[i])
    			return true;
    	}
    	return false;
    }
     
    char* get_symbol(int num)
    {
    		switch(num)
    		{
    			case '<': return "<"; break;
    			case '>': return ">"; break;
    			case ':': return ":"; break;
    			case '?': return "?"; break;
    			case '%': return "%"; break;
    			case GE_OP: return ">="; 
    			case LE_OP: return "<="; 
    			case NE_OP: return "!="; 
    			case EQ_OP: return "=="; 
    		}
    		return "";
    }
    
     
    char* new_temp()
    {
    	char* temp_str;
    	temp_str = (char*)malloc(5 * sizeof(char));
    	temp_str[0] = 't';
    	temp_str[1] = (temp++) + '0';
    	temp_str[2] = '\0';
    	return temp_str;
    }
     
        char* icg_generation(nodeType* node)
    {
    	//printf("%d\n", node->type);
    	if (node->type == typeId)
            return  node->id.name;
        if (node->type == typeCon)
            return node->con.value;
        if (node->type == typeOpr)
        {
        	if(node->opr.oper == ';') return "-1";
            char* left = icg_generation(node->opr.op[0]);
            if(node->opr.oper == '-' && node->opr.nops  == 1)
            {	
            	char* temp = new_temp();
    			sprintf(icg2[ptr].code,"%s = -%s", temp, left);
    			insert_in_icg("-",left,"",temp,ptr); //insert_in_icg(op1, op2, op, res, idx);
    			ptr++;
    			return temp;
            }
            if(node->opr.nops > 1)
           	{
            	char* right;
            	if(node->opr.oper == IF)
            	{
            		int curr_ptr = ptr;
            		ptr++;
            		right = icg_generation(node->opr.op[1]);
            		sprintf(icg2[curr_ptr].code,"if %s != 1 goto %d",left,  ptr);
            		char* op1;
            		op1 = (char*)malloc(128 * sizeof(char));
            		sprintf(op1,"if %s != 1",left);
            		char* res;
            		res = (char*)malloc(128 * sizeof(char));
            		sprintf(op1,"%d",ptr);
            		insert_in_icg("goto",op1,"",res,curr_ptr); //insert_in_icg(op1, op2, op, res, idx);
            		return left;
            	}
            	if(node->opr.oper == (IF+ELSE))
            	{
            		int curr_ptr = ptr;
            		ptr++;
            		right = icg_generation(node->opr.op[1]);
            		sprintf(icg2[curr_ptr].code,"if %s != 1 goto %d",left,  ptr+1);
            		char* op1;
            		op1 = (char*)malloc(128 * sizeof(char));
            		sprintf(op1,"if %s != 1",left);
            		char* res;
            		res = (char*)malloc(128 * sizeof(char));
            		sprintf(op1,"%d",ptr);
            		insert_in_icg("goto",op1,"",res,curr_ptr); //insert_in_icg(op1, op2, op, res, idx);
            		
            		curr_ptr = ptr;
            		ptr++;
            		char* else_right = icg_generation(node->opr.op[2]);
            		if(node->opr.op[2]->opr.oper != (IF+ELSE)){
            			sprintf(icg2[curr_ptr].code,"if %s == 1 goto %d",left,  ptr);
            			char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"if %s != 1",left);
            			char* res;
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(res,"%d",ptr);
            			insert_in_icg("goto",op1,"",res,curr_ptr);
            		}
            		sprintf(icg2[curr_ptr].code,"goto %d",	ptr);
            		res = (char*)malloc(128 * sizeof(char));
            		insert_in_icg("goto","","",res,curr_ptr);
            		return left;
            	}
            	if(node->opr.oper == WHILE)
            	{
            		int curr_ptr = ptr;
            		ptr++;
            		right = icg_generation(node->opr.op[1]);
            		sprintf(icg2[ptr].code,"goto %d",curr_ptr);
            		char* res;
            		res = (char*)malloc(128 * sizeof(char));
            		sprintf(res,"%d",curr_ptr);
            		insert_in_icg("goto","","",res,ptr);
            		
            		sprintf(icg2[curr_ptr].code,"if %s != 1 goto %d",left,  ptr+1);
            		char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"if %s != 1",left);
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(res,"%d",ptr+1);
            			insert_in_icg("goto",op1,"",res,curr_ptr);
            		ptr++;
            		return left;
            	}
            	if(node->opr.oper == FOR)
            	{
            		int curr_ptr = ptr;
            		left = icg_generation(node->opr.op[1]);
            		int curr_ptr_temp = ptr;
            		ptr++;
            		right = icg_generation(node->opr.op[3]);
            		right = icg_generation(node->opr.op[2]);
            		sprintf(icg2[ptr].code,"goto %d",curr_ptr);
            		char* res;
            		res = (char*)malloc(128 * sizeof(char));
            		sprintf(res,"%d",curr_ptr);
            		insert_in_icg("goto","","",res,ptr);
            		
            		sprintf(icg2[curr_ptr_temp].code,"if %s != 1 goto %d",left,  ptr+1);
            		char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"if %s != 1",left);
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(res,"%d",ptr+1);
            			insert_in_icg("goto",op1,"",res,curr_ptr);
            		ptr++;
            		return left;
            	}
            	//improve
            	if(is_relational_operator(node->opr.oper))
            	{
            		right = icg_generation(node->opr.op[1]);
            		char* temp = new_temp();
            		
            		char* res;
            		res = (char*)malloc(128 * sizeof(char));
            		char* op1;
            		op1 = (char*)malloc(128 * sizeof(char));
            		char* op2;
            		op2 = (char*)malloc(128 * sizeof(char));
            		char* op;
            		op = (char*)malloc(128 * sizeof(char));
            		
            		sprintf(icg2[ptr].code,"if %s %s %s goto %d",left, get_symbol(node->opr.oper),right, ptr+3);
            		sprintf(op1,"if %s %s %s",left,get_symbol(node->opr.oper),right);
            		sprintf(res,"%d",ptr+3);
            		insert_in_icg("goto",op1,"",res,ptr);
            		sprintf(icg2[ptr+1].code,"%s = 0", temp);
            		sprintf(res,"%s",temp);
            		insert_in_icg("=","0","",res,ptr+1);
            		sprintf(icg2[ptr+2].code,"goto %d",ptr+4);
            		sprintf(res,"%d",ptr+4);
            		insert_in_icg("goto","1","",res,ptr+2);
            		sprintf(icg2[ptr+3].code,"%s = 1", temp);
            		sprintf(res,"%s",temp);
            		insert_in_icg("=","1","",res,ptr+3);
            		ptr += 4;
            		return temp;
            	}
            	//improve
    		    if(is_arithmetic_operator(node->opr.oper)) 
    		    {
    		    	right = icg_generation(node->opr.op[1]);
    		    	char* temp_str = new_temp();
    		    	sprintf(icg2[ptr].code,"%s = %s %c %s", temp_str, left, node->opr.oper,right);
    		    	char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"%s",left);
            		char* op2;
            			op2 = (char*)malloc(128 * sizeof(char));
            			sprintf(op2,"%s",right);
            		char* op;
            			op = (char*)malloc(128 * sizeof(char));
            			sprintf(op,"%c",node->opr.oper);
            			char* res;
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(res,"%s",temp_str);
            			insert_in_icg(op,op1,op2,res,ptr);
    		    	//printf("%s = %s %c %s", temp_str, left, node->opr.oper,right);
    		    	//insert_in_icg(left, right, node->opr.oper)
    		    	ptr++;
    		    	return temp_str;
    		    }
    		    //array
    		    if(node->opr.oper == 'a')
    		    {
    		    	right = icg_generation(node->opr.op[1]);
    		    	char* temp_str = new_temp();
    		    	sprintf(icg2[ptr].code,"%s = %s[%s]", temp_str, left,right);
    		    	char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"%s[%s]",left,right);
            			char* res;
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"%s",temp_str);
            			insert_in_icg("=",op1,"",res,ptr);
    		    	ptr++;
    		    	return temp_str;
    		    }
    		    if(node->opr.oper == '=')
    		    {
    		    	
            		right = icg_generation(node->opr.op[1]);
    		    	sprintf(icg2[ptr].code,"%s = %s", left, right);
    		    	char* op1;
            			op1 = (char*)malloc(128 * sizeof(char));
            			sprintf(op1,"%s",right);
            			char* res;
            			res = (char*)malloc(128 * sizeof(char));
            			sprintf(res,"%s",left);
            			insert_in_icg("=",op1,"",res,ptr);
    		    	ptr++;
    		    	return left;
    		    }
    		    for(int i = 1;i<node->opr.nops;i++)
    		    	right = icg_generation(node->opr.op[i]);
    		}
            return left;
        }
        return "-1";
        //if (node->type == typeCon)
        //    return itoa(node->con.value);
    }
     
    void print_symbol_table()
    {
    	for(int i = 0;i<ptr;i++)
    		printf("%d : %s\n",i, icg2[i].code);
        printf("---------SYMBOL TABLE---------\n");
        for (int i = 0; i < 1000; i++)
        {
            if (symbol_table[i].len)
                printf("name = %s  type = %s scope = %d\n", symbol_table[i].name, symbol_table[i].type, symbol_table[i].scope);
        }
        print_icg_table();
    }
    /*
    void evaluation()
    {
    	for(int i = 0;i<ptr;i++)
    	{
    		if(!strcmp(icg[i].op, "="))
    		{
    			if(icg[i].res[0] == 't'){
    				if(fast_string_lookup(icg[i].op1,1,1,"main")){
    					int hash = fast_string_hash(icg[i].op1);
    					t[icg[1].res[0]-'0'] = *((int*)(symbol_table[hash].value));
    				}
    				else if(icg[i].op1[0] = 't')
    					t[icg[i].res[0]-'0'] = t[icg[i].op1[1]-'0'];
    				else
    					t[icg[1].res[0]-'0'] = atof(icg[i].op1);
    			}
    			else
    			{
    				int hash = fast_string_hash(icg[i].res);
    				if(fast_string_lookup(icg[i].op1,1,1,"main")){
    					int hash1 = fast_string_hash(icg[i].op1);
    					*((int*)(symbol_table[hash].value) = *((int*)(symbol_table[hash1].value));
    				}
    				else if(icg[i].op1[0] = 't')
    					*((int*)(symbol_table[hash].value) = t[icg[i].op1[1]-'0'];
    				else
    					*((int*)(symbol_table[hash].value) = atof(icg[i].op1);
    				printf("%d",*((int*)(symbol_table[hash].value));
    			}
    			
    		}
    		if(!strcmp(icg[i].op, "+"))
    		{
    			if(icg[i].res[0] == 't'){
    				printf("%d\n", atoi(icg[i].op2));
    				t[icg[i].res[1]-'0'] = atof(icg[i].op1)+atof(icg[i].op2);
    			}
    		}
    		break;
    	}
    	printf("%f",t[0]);
    }*/
    
    void print_icg_table()
    {
        printf("\n\n-------ICG-----table\n\n");
        for(int i=0;i<ptr;i++)
        {
            printf("op = %s   arg1 = %s   arg2 = %s  result = %s\n",icg[i].op,icg[i].op1,icg[i].op2,icg[i].res)   ;
        }
    }
    /*ICG*/
