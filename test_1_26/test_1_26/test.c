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
//���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//������� : 7
//int main(){
//	printf("������������");
//	int a = 0;
//	int b = 0;
//	//0001-a
//	//1000-b
//	scanf("%d%d", &a, &b);
//	int count=0;
//	int c = a^b;//�м���1�����м���λ��ͬ
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
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//��ӡ���������Ƶ�����λ��ż��λ
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	//00000000000000000000000000000111-7
//	//00000000000000000000000000000001
//	printf("%ż��λ����������λ��\n");
//	for (i = 31; i > 0; i -= 2){
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ����������Ϊ��\n");
//	for (i = 30; i >= 0; i -= 2){
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
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
	printf("%d�Ķ�����λ1�ĸ���Ϊ��%d\n", a, count);
	return 0;
}

