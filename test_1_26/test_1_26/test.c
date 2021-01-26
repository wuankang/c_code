#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//int main(){
//	char arr[] = "hello zl!!!!!!";
//	memset(arr, '-', 7);
//	printf("%s\n",arr);
//	return 0;
//}
/* memset example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}
//int fun(){
//	static int count = 1;
//	return ++count;
//}
//int main(){
//	int answer = fun() - fun()*fun();
//	printf("%d\n", answer);
//	return 0;
//}
//求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:
//1999 2299
//输出例子 : 7
//int main(){
//	printf("输入两个数：");
//	int a = 0;
//	int b = 0;
//	//0001-a
//	//1000-b
//	scanf("%d%d", &a, &b);
//	int count=0;
//	int c = a^b;//有几个1就是有几个位不同
//	//1001-c
//	//0001-1
//	int i = 0;
//	for (i = 0; i<32; i++){
//		if (((c >> i) & 1) == 1){
//			count++;
//		}
//	}
//		
//	
//	printf("%d\n", count);
//	return 0;
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//打印整数二进制的奇数位和偶数位
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	//00000000000000000000000000000111-7
//	//00000000000000000000000000000001
//	printf("%偶数位二进制序列位：\n");
//	for (i = 31; i > 0; i -= 2){
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位二进制序列为：\n");
//	for (i = 30; i >= 0; i -= 2){
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
int count_binary(int a){
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++){
		if (((a >> i) & 1) == 1){
			count++;
		}
	}
	return count;
	
}
int main(){
	int a;
	scanf("%d", &a);
	int count=count_binary(a);
	printf("%d的二进制位1的个数为：%d\n", a, count);
	return 0;
}

