#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<stdlib.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//void test1(){
//	int arr[] = { 8, 7, 5, 6, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stuct(const void*e1, const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
print_stuct(struct Stu a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d\n", a[i].name, a[i].age);
	}
}
//void test2(){
//	struct Stu a[] = { { "wuankang",24 }, { "zhaolin", 23 }, { "chang", 18 } };
//	int sz = sizeof(a) / sizeof(a[0]);
//	//qsort(a, sz, sizeof(a[0]), cmp_stuct);
//	//bubble_sort (a, sz, sizeof(a[0]), cmp_stuct);
//	print_stuct(a, sz);
//}
void _swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + width*(j + 1))>0)
			{
				_swap((char*)base + j*width, (char*)base + width*(j + 1),width);
			}
		}
	}
}
void test3(){
	struct Stu a[] = { { "wuankang", 24 }, { "zhaolin", 23 }, { "chang", 18 } };
	int sz = sizeof(a) / sizeof(a[0]);
	//qsort(a, sz, sizeof(a[0]), cmp_stuct);
	bubble_sort (a, sz, sizeof(a[0]), cmp_stuct);
	print_stuct(a, sz);
}
int main()
{
	//test1();
	//test2();
	test3();
	return;
}