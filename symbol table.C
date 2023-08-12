#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
 int x=0, n, i=0,j=0;
 void *mypointer,*T4Tutorials_address[5];
 char ch,T4Tutorials_Search,T4Tutorials_Array2[15],T4Tutorials_Array3[15],c;
 printf("Input the expression ending with $ sign:");
 while((c=getchar())!='$')
 {
  T4Tutorials_Array2[i]=c;
  i++;
 }
 n=i-1;
 printf("Given Expression:");
 i=0;
 while(i<=n)
 {
  printf("%c",T4Tutorials_Array2[i]);
  i++;
 }
 printf("\n Symbol Table display\n");
 printf("Symbol \t addr \t type");
 while(j<=n)
 {
  c=T4Tutorials_Array2[j];
  if(isalpha(toascii(c)))
  {
   mypointer=malloc(c);
   T4Tutorials_address[x]=mypointer;
   T4Tutorials_Array3[x]=c;
   printf("\n%c \t %d \t identifier\n",c,mypointer);
   x++;
   j++;
  }
  else
  {
   ch=c;
   if(ch=='+'||ch=='-'||ch=='*'||ch=='=')
   {
    mypointer=malloc(ch);
    T4Tutorials_address[x]=mypointer;
    T4Tutorials_Array3[x]=ch;
    printf("\n %c \t %d \t operator\n",ch,mypointer);
    x++;
    j++;
   }}}}
   output:
   Input the expression ending with $ sign:a+b$
Given Expression:a+b
 Symbol Table display
Symbol   addr    type
a        1510736         identifier

 +       1510848         operator

b        1510904         identifier

--------------------------------
Process exited after 18.4 seconds with return value 0
Press any key to continue . . .
