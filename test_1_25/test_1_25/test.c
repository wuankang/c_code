#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	int a = 0;
//	int b = 0;
//	printf("������a��ֵ��");
//	scanf("%d", &a);
//	printf("������b��ֵ��");
//	scanf("%d", &b);
//	printf("a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������Ϊ��\n");
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		//19%10=9
//		if (i % 10 == 9){
//			count++;
//		}
//		//90/10=9
//		if (i / 10 == 9){
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main(){
//	int i = 0;
//	double sum = 0.0;
//	int cow = 1;
//	for (i = 1; i <= 100; i++){
//		sum +=(1.0/i)*cow;
//		cow = -cow;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//ʮ���������
int main(){
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	//ע��max�Ĵ�С
	int max = arr[0];
	for (i = 1; i < 10; i++){
		if (arr[0] < arr[i]){
			arr[0] = arr[i] ^ arr[0];
			arr[i] = arr[i] ^ arr[0];
			arr[0] = arr[i] ^ arr[0];
		}
	}
	printf("max=%d\n", arr[0]);
	return 0;
}








