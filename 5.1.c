#define S ' '
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++) putchar(S);
		for(j=1;j<=2*(n-i);j++) putchar(S);
		for(j=1;j<=2*i-1;j++) putchar('*');
		printf("\n");	
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=10;j++) putchar(S);
		for(j=1;j<=2*(n-i)-1;j++)  putchar('*');
		printf("\n");
 	}
 	return 0;
 } 
