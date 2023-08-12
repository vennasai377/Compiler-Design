%{
%}
%%
if|else|while|switch|int|char|main|return { printf("%s is a keyword\n", yytext);}
[a-zA-Z0-9]+ { printf("%s is a identifier\n",yytext);}
[=|+|-|*|/|^|:]+ { printf("%s is a operator\n", yytext);}
%%
int yywrap() { }
int main()
{
printf("enter code:");
yylex();
}

output:
C:\Users\sse\Desktop\18>set path=C:\Program Files\GnuWin32\bin

C:\Users\sse\Desktop\18>flex token.l.txt

C:\Users\sse\Desktop\18>set path=C:\MinGW\bin

C:\Users\sse\Desktop\18>gcc lex.yy.c

C:\Users\sse\Desktop\18>a
enter code:

sum=a+b
sum is a identifier
= is a operator
a is a identifier
+ is a operator
b is a identifier
