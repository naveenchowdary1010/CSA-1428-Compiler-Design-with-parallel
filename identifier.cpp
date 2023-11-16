#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char a[10];
	int flag,i=1;
	printf("enter an identifier: ");
	gets(a);
	if(isalpha(a[0]))
		flag=1;
	else
		flag=0;
	if(flag==1)
		printf("\n valid identifier");
	else
	    printf("\n not an identifier");
}
