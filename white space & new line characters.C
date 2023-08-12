#include<stdio.h>
int main()
{
	char str[100];
	int words=0,newline=0,characters=0;
	scanf("%[^~]",&str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			words++;
		}
		else if(str[i]=='\n')
		{
			newline++;
			words++;
		}
		else if(str[i]!=' '&&str[i]!='\n')
		characters++;
	}
if(characters>0)
{
	words++;
	newline++;
}
printf("total number ofwords:%d\n",words);
printf("total number of lines:%d\n",newline);
printf("total number of characters:%d\n",characters);
return 0;
}
output:
void main()
{
int a;
int b;
a=b+c;
c=d*e;
}
^Z
total number ofwords:11
total number of lines:8
total number of characters:34

--------------------------------
Process exited after 63.66 seconds with return value 0
Press any key to continue . . .
