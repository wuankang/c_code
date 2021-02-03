#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main(){
//	int a[2][4] = {0};
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}
//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//int main(){
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//
//}
//int main(){
//	//void (* signal(int,void(*)(int)))(int)
//	typedef void(*p_fun)(int);
//	//将void(*)(int)起了一个别名p_fun,简化了式子，并且容易看的懂
//	p_fun signal(int, p_fun);
//	return 0;
//}
//计算器--加、减、乘、除
//#include<stdio.h>
//void menu(){
//	printf("***********************\n");
//	printf("***    1.加  2.减   ***\n");
//	printf("***    3.乘  4.除   ***\n");
//	printf("***       0.退出    ***\n");
//	printf("***********************\n");
//}
int Add(int a,int b){
	return a + b;
}
//int Sub(int a, int b){
//	return a - b;
//}
//int Mul(int a, int b){
//	return a * b;
//}
//int Dvi(int a,int b){
//	return a / b;
//}
//int main(){
//	int input = 0;
//	int ret = 0;
//	int a = 0;
//	int b = 0;
//	//函数指针数组-----转移表
//	int (*p[])(int,int) = { 0, Add, Sub, Mul, Dvi };
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (0 == input){
//			printf("退出！\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4){
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			ret = p[input](a, b);
//		printf("%d\n", ret);
//	}
//		//switch (input){
//		//case 0:printf("退出！\n");
//		//	break;
//		//case 1:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &a, &b);
//		//	ret=Add(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 2:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Sub(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 3:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Mul(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 4:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Dvi(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//default:printf("输入错误，请重新输入\n");
//		//	break;
//		//}
//		else{
//			printf("输入错误，请重新输入\n");
//		}
//	} while(input);
//	return 0;
//}
#include<stdio.h>
int main(){
	//指向加法函数的函数指针
	int(*p)(int, int);
	//函数指针数组
	int(*parr[4])(int, int);
	//指向函数指针的数组的指针
	int(*(*pparr)[4])(int, int)=&parr;
	return 0;
}