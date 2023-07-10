D			[0-9]
L			[a-zA-Z_]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%{
	#include "header.h"
	#include <stdio.h>
	#include "y.tab.h"
	#include<string.h>
    #include <stdbool.h>



%}
%x C_COMMENT
%%
"//"(.*[ \t]*.*)*[\n]+		 {}
"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT>"*/" { BEGIN(INITIAL); }
<C_COMMENT>\n   { }
<C_COMMENT>.    { }
"break"			{ strcpy(yylval.string,yytext); return(BREAK); }
"char"			{  strcpy(yylval.string,yytext);return(CHAR); }
"continue"		{  strcpy(yylval.string,yytext);return(CONTINUE); }
"do"			{  strcpy(yylval.string,yytext);return(DO); }
"else"			{  strcpy(yylval.string,yytext);return(ELSE); }
"float"			{  strcpy(yylval.string,yytext);return(FLOAT); }
"for"			{  strcpy(yylval.string,yytext);return(FOR); }
"if"			{  strcpy(yylval.string,yytext);return(IF); }
"int"			{  strcpy(yylval.string,yytext);return(INT); }
"void"          {strcpy(yylval.string,yytext);return VOID;}
"return"		{  strcpy(yylval.string,yytext);return(RETURN); }
"switch"		{  strcpy(yylval.string,yytext);return(SWITCH); }
"while"			{  strcpy(yylval.string,yytext);return(WHILE); }
"main"          {strcpy(yylval.string,yytext);return(MAIN);}
"printf"        {strcpy(yylval.string,yytext);return(PRINTF);}
{L}({L}|{D})*		{ strcpy(yylval.string,yytext);return IDENTIFIER;  }

0{D}+{IS}?		{  strcpy(yylval.string,yytext);return(CONSTANT); }
{D}+{IS}?		{  strcpy(yylval.string,yytext);return(CONSTANT); }
L?'(\\.|[^\\'])+'	{  strcpy(yylval.string,yytext);return(CONSTANT); }

{D}+{E}{FS}?		{  strcpy(yylval.string,yytext);return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{  strcpy(yylval.string,yytext);return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{  strcpy(yylval.string,yytext);return(CONSTANT); }
L?\"(\\.|[^\\"])*\"	{  strcpy(yylval.string,yytext);return(STRING_LITERAL); }


"+="			{  strcpy(yylval.string,yytext);return(ADD_ASSIGN); }
"-="			{  strcpy(yylval.string,yytext);return(SUB_ASSIGN); }
"*="			{  strcpy(yylval.string,yytext);return(MUL_ASSIGN); }
"/="			{  strcpy(yylval.string,yytext);return(DIV_ASSIGN); }
"%="			{  strcpy(yylval.string,yytext);return(MOD_ASSIGN); }
"&="			{  strcpy(yylval.string,yytext);return(AND_ASSIGN); }
"^="			{  strcpy(yylval.string,yytext);return(XOR_ASSIGN); }
"|="			{  strcpy(yylval.string,yytext);return(OR_ASSIGN); }
"++"			{  strcpy(yylval.string,yytext);return(INC_OP); }
"--"			{  strcpy(yylval.string,yytext);return(DEC_OP); }
"&&"			{  strcpy(yylval.string,yytext);return(AND_OP); }
"||"			{  strcpy(yylval.string,yytext);return(OR_OP); }
"<="			{  strcpy(yylval.string,yytext);return(LE_OP); }
">="			{  strcpy(yylval.string,yytext);return(GE_OP); }
"=="			{  strcpy(yylval.string,yytext);return(EQ_OP); }
"!="			{  strcpy(yylval.string,yytext);return(NE_OP); }

";"			{  strcpy(yylval.string,yytext);return(';'); }
"{"		{  strcpy(yylval.string,yytext);return('{'); }
"}"		{  strcpy(yylval.string,yytext);return('}'); }
","			{  strcpy(yylval.string,yytext);return(','); }
":"			{  strcpy(yylval.string,yytext);return(':'); }
"="			{  strcpy(yylval.string,yytext);return('='); }
"("			{  strcpy(yylval.string,yytext);return('('); }
")"			{  strcpy(yylval.string,yytext);return(')'); }
"["		{  strcpy(yylval.string,yytext);return('['); }
"]"		{  strcpy(yylval.string,yytext);return(']'); }
"."			{  strcpy(yylval.string,yytext);return('.'); }
"&"			{  strcpy(yylval.string,yytext);return('&'); }
"!"			{  strcpy(yylval.string,yytext);return('!'); }
"~"			{  strcpy(yylval.string,yytext);return('~'); }
"-"			{  strcpy(yylval.string,yytext);return('-'); }
"+"			{  strcpy(yylval.string,yytext);return('+'); }
"*"			{  strcpy(yylval.string,yytext);return('*'); }
"/"			{  strcpy(yylval.string,yytext);return('/'); }
"%"			{  strcpy(yylval.string,yytext);return('%'); }
"<"			{  strcpy(yylval.string,yytext);return('<'); }
">"			{  strcpy(yylval.string,yytext);return('>'); }
"^"			{  strcpy(yylval.string,yytext);return('^'); }
"|"			{  strcpy(yylval.string,yytext);return('|'); }
"?"			{  strcpy(yylval.string,yytext);return('?'); }
[ \t\v\n\f]		{  }
.			{  }

%%
int yywrap()
{
	return 1;
}
