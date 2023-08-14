%option noyywrap
%{
	#include<stdio.h>
%}
digit [0-9]
letter [a-zA-Z]
%%
{letter} ({letter}|{digit})* printf(" id is %S\n",yytext);}
. {printf("invalid");}
%%
int main()
{
yylex();
return 0;
}