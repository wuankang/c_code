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
//дһ����������������һ���ַ��������ݡ�
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
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//���
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
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��
//ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
/*
˼·��
����Ĺؼ�����ֻҪ֪���ж�һ�������Ƿ�Ϊˮ�ɻ����ķ�ʽ�������ӭ�ж��⡣�ٶ�����һ������data�������ⷽʽ���£�
1. ��ȡdata�Ǽ�λ��
2. ��ȡdata��ÿ��λ���ϵ����ݣ�����������������
3. ��data��ÿ��λ�ϵ��������������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
��ȣ���Ϊˮ�ɻ���
���򣺲���
����ʵ�ֲο����´��롣
*/
#include<stdio.h>
#include<math.h>
int main(){
	int i = 0;
	for (i = 0; i <= 100000; i++){
		//����λ��
		int temp = i;
		int count = 0;
		while (temp){
			temp = temp / 10;
			count++;
		}
		//����λ��������
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
//��ӡ����
/*
˼·��
��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
�����ǣ�������ո񣬺����*��ÿ����
�ո񣺴������£�һ�м���һ��
*��2*i+1�ķ�ʽ����

�����ǣ�������ո񣬺����*��ÿ����
�ո񣺴������£�ÿ�ж�һ���ո�
*�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣����У�line��ʾ�ܹ��ж�����
����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�
*/
//#include<stdio.h>
//int main(){
//	int i = 0;
//	int j = 0;
////�ϰ벿��
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
//	//��ӡ���������
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

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main(){
//	printf("��������һƿ��ˮ1Ԫ��2����ƿ��һƿ\n");
//	printf("С���ѣ������Ǯ����ˮ:>");
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;
//	int empty = money;
//	while (empty>1){
//		sum += empty/2;	
//		empty = empty / 2 + empty % 2;
//	}
//	printf("С���ѣ����������ܺȶ���ƿ��\n");
//	printf("%d\n", sum);
//	printf("good��\n");
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
//	//����1
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
