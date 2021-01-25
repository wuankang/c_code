#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	int a = 0;
//	int b = 0;
//	printf("请输入a的值：");
//	scanf("%d", &a);
//	printf("请输入b的值：");
//	scanf("%d", &b);
//	printf("a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后为：\n");
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
//十个数最大数
int main(){
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	//注意max的大小
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








