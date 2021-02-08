#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test1(){
//	printf("hehe\n");
//}
//
//void test2(void (*p)()){
//	p();
//}
//
//int main(){
//	test2(test1);
//	return 0;
//}
//void menu(){
//	printf("************************\n");
//	printf("*******1.Add 0.exit*****\n");
//	printf("************************\n");
//
//}
//int Add(int a, int b){
//	return a + b;
//}
//
//void cal(int(*p)(int, int)){
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入两个运算数:>");
//	scanf("%d%d", &a,&b);
//	ret=p(a, b);
//	printf("%d\n", ret);
//}
//
//int main(){
//	int input=0;
//	do{
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input){
//		case 1:cal(Add);//回调
//			break;
//		case 0:printf("退出！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//冒泡排序
//针对整形
//void sort(int arr[],int sz){
//	int i=0;
//	int j=0;
//	for (i = 0; i < sz-1; i++){
//		for (j = 0; j < sz - i - 1; j++){
//			if (arr[j]>arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
//
//int main(){
//	int arr[5] = { 2,3,1,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (i = 0; i < sz;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
void print(struct Stu arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%s,%d\n",arr[i].name,arr[i].age);
	}
}

int cmp(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void test2()
{
	struct Stu arr[] = { { "zhangsan", 17 }, { "lisi", 19 }, { "wangwu", 15 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp);
	print(arr, sz);
}
//void test1()
//{
//	int arr[10] = { 0, 4, 5, 6, 3, 7, 1, 2, 9, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	print(arr,sz);
//}
int main()
{
	//test1();
	test2();
	return 0;
}