#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define n 2
void print(int C[n][n])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
		
	}
}
void MatrixMultiply(int A[n][n], int B[n][n], int C[n][n])
{
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			C[i][j] = 0;
			for (k = 0; k < n; k++){
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
}
struct  timeval{
	long  tv_sec;/*秒*/
	long  tv_usec;/*微妙*/
};
//struct  timezone{
//	int tz_minuteswest;/*和greenwich时间差*/
//	int tz_dsttime;
//};
int recursion(int input)
{
	if (1 == input || 0 == input)
	{
		return 1;
	}
	else
	{
		return input*recursion(input - 1);
	}
}
int iteration(int input)
{
	int i = 0;
	int sum = 1;
	for (i = 2; i <=input; i++)
	{
		sum *= i ;
	}
	return sum;

}
int main()
{
	//用迭代的方法算数n的阶层
	int input = 0;
	printf("please input a number:");
	scanf("%d", &input);
	int sum = iteration(input);
	printf("%d\n", sum);
	//用递归的方法算出n的阶层
	/*int input;
	printf("please input a number:");
	scanf("%d", &input);
	int sum=recursion(input);
	printf("%d\n", sum);*/
//打印的是两阶层相乘以及计算运行时间
	/*struct timeval start, end;
	gettimeofday(&start, NULL);
	int A[n][n] = { 1,2 };
	int B[n][n] = { 3,4 };
	int C[n][n] = { 0 };
	MatrixMultiply(A, B, C);
	print(C);
	gettimeofday(&end, NULL);
	long start_ms = start.tv_sec * 1000 + start.tv_usec / 1000;
	long end_ms = end.tv_sec * 1000 + end.tv_usec / 1000;
	printf("运行时间：%ldms", end_ms - start_ms);*/
	
	return 0;

}