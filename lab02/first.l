%option noyywrap
%{
	#include<stdio.h>
%}
digit [0-9]
letter [A-Za-z]
key "int "| "main"| " return"|" printf"|"while"|"scanf"|"if"

%%
{key} { printf("%s is a keyword and length is  : %d\n",yytext, yyleng);}
{letter} ({letter} | { digit} * { printf(" %s is an indentifier and length is: %d\n ", yytext , yylength);}
{digit}+ "."{digit} + { printf("%s an floting point  number floatimg value is : %f\n",yytext, atof(yytaxt));}

%%
int main()
{

	return 0;
}