#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n,i,f;
	char a[100],b[100];
	printf("enter the no.of productions: ");
	scanf("%d",&n);
	printf("enter the production1: ");
	for(i=0;i<1;i++)
	{
	scanf("%s",a);
    }
	printf("enter the production 2: ");
	{
	for(i=0;i<1;i++)
	scanf("%s",b);
    }
	printf("enter the variable: ");
	scanf("%d",f);
	printf("follow of E is : ");
	if(f=a[0])
	{
		printf("$");
		if(f==b[3])
		{
			printf(" ,%c",b[4]);
		}
	}
	else if(f=b[0])
	{
		printf("follow of %c is %c",b[0],a[0]);
		printf("\n$,%c",b[4]);
	}
	else
	{
		printf("variable not found");
		printf("no follow");
	}
}
