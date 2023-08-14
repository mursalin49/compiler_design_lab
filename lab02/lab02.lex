%option noyywrap
%{
	#include<stdio.h>
%}

Digit[0-9]
letter[A-Za-Z]
key "int"|"main"|"for"|"return"|"printf"|"while"|"scanf"|"if"
%%
{key} {printf("%s is a keyword and length is: %d\n",yyleng);}
{digit}+{printf("%s is an int number and int value is %d\n",yytext,atoi(yytext));}
{digit}+"."{digit}+{printf("%s is a floating point number and floating value is %f\n",yytext,atof(yytext));}
. {}
%%
int main()
{
	yylex()

	return 0;
}