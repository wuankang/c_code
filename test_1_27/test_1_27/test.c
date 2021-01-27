#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int main(){
//	int a = 0x64;
//	printf("%d", a);
//}
//int main(){
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++){
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//写一个函数，可以逆序一个字符串的内容。
//#include<stdio.h>
//void reverse(char* pa){
//	int len = strlen(pa);
//	char* p = pa + len - 1;
//	for (; pa <= p; pa++)
//	{
//		*pa = (*pa)^(*p);
//		*p = (*pa) ^ (*p);
//		*pa=(*pa) ^ (*p);
//		 p--;
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s",arr);
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//求和
//int sum(int num){
//	int sum = 0;
//	int n = num;
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		num = num * 10 + n;
//		sum += num;
//	}
//	return sum+n;
//}
//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	int ret=sum(number);
//	printf("%d", ret);
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和
//确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
/*
思路：
此题的关键在于只要知道判断一个数据是否为水仙花数的方式，问题就迎刃而解。假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行立方求和
3. 对data中每个位上的数据立方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
具体实现参考以下代码。
*/
#include<stdio.h>
#include<math.h>
int main(){
	int i = 0;
	for (i = 0; i <= 100000; i++){
		//计算位数
		int temp = i;
		int count = 0;
		while (temp){
			temp = temp / 10;
			count++;
		}
		//各个位数加起来
		temp = i;
		int sum = 0;
		while (temp){
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (sum == i){
			printf("%d ", i);
		}
	}
	return 0;
}
//打印菱形
/*
思路：
仔细观察图形，可以发现，此图形中是由空格和*按照不同个数的输出组成的。
上三角：先输出空格，后输出*，每行中
空格：从上往下，一行减少一个
*：2*i+1的方式递增

下三角：先输出空格，后输出*，每行中
空格：从上往下，每行多一个空格
*： 从上往下，按照2*(line-1-i)-1的方式减少，其中：line表示总共有多少行
按照上述方式，将上三角和下三角中的空格和*分别输出即可。
*/
//#include<stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
////上半部分
//	for (i = 0; i < 7; i++){
//		for (j = 0; j < 6-i; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++){
//			printf("*");
//		}
//		for (j = 0; j <6-i; j++){
//			printf(" ");
//		}
//		printf("\n");
//	}
//	//打印下面的六行
//	for (i = 0; i < 6; i++){
//		for (j = 0; j < i+1; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 11 - 2 * i; j++){
//			printf("*");
//		}
//		for (j = 0; j < i + 1; j++){
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main(){
//	printf("做买卖：一瓶汽水1元，2个空瓶换一瓶\n");
//	printf("小盆友，买多少钱的汽水:>");
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;
//	int empty = money;
//	while (empty>1){
//		sum += empty/2;	
//		empty = empty / 2 + empty % 2;
//	}
//	printf("小盆友，你算算你能喝多少瓶？\n");
//	printf("%d\n", sum);
//	printf("good！\n");
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}
