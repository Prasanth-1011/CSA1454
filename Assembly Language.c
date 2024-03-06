#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[50][50];
	printf("Number of Intermediate Code :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("Enter Three Address Code :%d:",i+1);
	{
		printf("%d:",i+1);
		for(j=0;j<6;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	printf("Assembly Language Code :");
	for(i=0;i<n;i++)
	{
		printf("\n MOV %c,R%d",a[i][3],i);
		if(a[i][4]=='-')
		{
			printf("\n SUB %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='+')
		{
			printf("\n ADD %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='*')
		{
			printf("\n MUL %c,R%d",a[i][5],i);
		}
		if(a[i][4]=='/')
		{
			printf("\n DIV %c,R%d",a[i][5],i);
		}
		printf("\n MOV R%d,%c",i,a[i][1]);
		printf("\n");
	}
	return 0;
}