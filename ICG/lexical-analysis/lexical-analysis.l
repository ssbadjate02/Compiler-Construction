D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%{
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define BREAK 1
#define CHAR 1
#define CONTINUE 1
#define DEFAULT 1
#define DO 1
#define DOUBLE 1
#define ELSE 1
#define FLOAT 1
#define FOR 1
#define IF 1
#define INT 1
#define RETURN 1
#define SWITCH 1
#define WHILE 1
#define CONSTANT 1
#define STRING_LITERAL 1
#define ADD_ASSIGN 1
#define SUB_ASSIGN 1
#define MUL_ASSIGN 1
#define DIV_ASSIGN 1
#define MOD_ASSIGN 1
#define AND_ASSIGN 1
#define XOR_ASSIGN 1
#define OR_ASSIGN 1
#define INC_OP 1
#define DEC_OP 1
#define PTR_OP 1
#define AND_OP 1
#define OR_OP 1
#define LE_OP 1
#define GE_OP 1
#define EQ_OP 1
#define NE_OP 1
struct variables{
    char name[50];
    char type[10];
    int len;
} symbol_table[1009];
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
bool fast_string_lookup(char *name){
    int hash = fast_string_hash(name);
    if(!symbol_table[hash].len) return 0;
    if(!strcmp(symbol_table[hash].name,name)) return 1;
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!strcmp(symbol_table[newhash].name,name)) return 1;
    }
    return 0;
}   
void fast_string_insert(char *type,char *name){
    if(fast_string_lookup(name)){
        printf("Error ! Variable Name is Repeated");
        return;
    }
    int hash = fast_string_hash(name);
    if(!symbol_table[hash].len){
        strcpy(symbol_table[hash].name,name);
        strcpy(symbol_table[hash].type,type);
        symbol_table[hash].len = strlen(name);
        printf("Inserted Variable %s of type %s at Position %d \n",name,type,hash);
        return;
    }
    for(int newhash=hash+1;newhash!=hash;add(&newhash,1)){
        if(!symbol_table[newhash].len){
            strcpy(symbol_table[newhash].name,name);
            strcpy(symbol_table[newhash].type,type);
            symbol_table[newhash].len = strlen(name);
            printf("Inserted Variable %s of type %s at Position %d \n",name,type,newhash);
            return;
        }
    }
    printf("Error ! Variable Limit Exceeded");
}
%}
%%
"break"			{  return(BREAK); }
"char"			{  return(CHAR); }
"continue"		{  return(CONTINUE); }
"default"		{  return(DEFAULT); }
"do"			{  return(DO); }
"double"		{  return(DOUBLE); }
"else"			{  return(ELSE); }
"float"			{  return(FLOAT); }
"for"			{  return(FOR); }
"if"			{  return(IF); }
"int"			{  return(INT); }
"return"		{  return(RETURN); }
"switch"		{  return(SWITCH); }
"while"			{  return(WHILE); }
{L}({L}|{D})*		{   }

0[xX]{H}+{IS}?		{  return(CONSTANT); }
0{D}+{IS}?		{  return(CONSTANT); }
{D}+{IS}?		{  return(CONSTANT); }
L?'(\\.|[^\\'])+'	{  return(CONSTANT); }

{D}+{E}{FS}?		{  return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{  return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{  return(CONSTANT); }
L?\"(\\.|[^\\"])*\"	{  return(STRING_LITERAL); }


"+="			{  return(ADD_ASSIGN); }
"-="			{  return(SUB_ASSIGN); }
"*="			{  return(MUL_ASSIGN); }
"/="			{  return(DIV_ASSIGN); }
"%="			{  return(MOD_ASSIGN); }
"&="			{  return(AND_ASSIGN); }
"^="			{  return(XOR_ASSIGN); }
"|="			{  return(OR_ASSIGN); }
"++"			{  return(INC_OP); }
"--"			{  return(DEC_OP); }
"->"			{  return(PTR_OP); }
"&&"			{  return(AND_OP); }
"||"			{  return(OR_OP); }
"<="			{  return(LE_OP); }
">="			{  return(GE_OP); }
"=="			{  return(EQ_OP); }
"!="			{  return(NE_OP); }
";"			{  return(';'); }
"{"		{  return('{'); }
"}"		{  return('}'); }
","			{  return(','); }
":"			{  return(':'); }
"="			{  return('='); }
"("			{  return('('); }
")"			{  return(')'); }
"["		{  return('['); }
"]"		{  return(']'); }
"."			{  return('.'); }
"&"			{  return('&'); }
"!"			{  return('!'); }
"~"			{  return('~'); }
"-"			{  return('-'); }
"+"			{  return('+'); }
"*"			{  return('*'); }
"/"			{  return('/'); }
"%"			{  return('%'); }
"<"			{  return('<'); }
">"			{  return('>'); }
"^"			{  return('^'); }
"|"			{  return('|'); }
"?"			{  return('?'); }
[ \t\v\n\f]		{  }
.			{ /* ignore bad characters */ }

%%
int yywrap()
{
	return 1;
}

int main(){
    yylex();
}
