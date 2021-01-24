#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(){
//	int a = 0, b = 0, c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int d = a + b;
//	printf("%d", d);
//	return 0;
//}
#include<stdio.h>
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0){
//		printf("even=%d,odd=%d", n / 2, n / 2);
//	}
//	else{
//		printf("even=%d,odd=%d", n / 2 + 1, n / 2); 
//	}
//	return 0;
//}
//int main(){
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b){
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c){
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c){
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//辗转相除法
//int main(){
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	while (c = a%b){
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//
//}
//int main(){
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int i = a > b ? b : a;
//	for (; i >= 1; i--){
//		if (a%i == 0 && b%i == 0){
//			printf("%d\n", i);
//			break;
//		}
//	}
//	//最小公倍数 a*b/gcd(a,b);
//	return 0;
//}
//求1~100中9的个数
//int main(){
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		if (i % 10 == 9){
//			count++;
//		}
//		if(i % 10 == i / 10){
	//		count++;
	//	}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//求10个数中的最大值
int main(){
	int a[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	int max = 0;
	int temp = 0;
	for (i=0; i < 10; i++){
		if (max < a[i]){
			temp = max;
			max = a[i];
			a[i] = max;
		}
	}
	printf("%d",max);
	return 0;
}






