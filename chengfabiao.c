/*¾Å¾Å³Ë·¨±í 
1*1
2*1 2*2
3*1 3*2 3*3
¡£¡£¡£¡£¡£¡£¡£¡£¡£ 
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++)
		 printf("%d*%d=%d\t",i,j,i*j);
		 printf("\n");
	}
		
	return 0;
} 
