#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strlen
//#include<stdio.h>
//int my_strlen(char* pa){
//	int count = 0;
//	while ((*pa++) != '\0'){
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	char arr1[] = "hello bit";
//	int ret=my_strlen(arr1);
//	printf("%d\n", ret);
//	return 0;
//}
//ģ��ʵ�ֿ⺯��strcpy
//#include<stdio.h>
//void my_strcpy(char* arr1, const char* arr2){
//	while ((*arr1++)=(*arr2++)){
//		;
//	}
//}
//
//int main(){
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
/*
˼·��
1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
2. ѭ������һ�²���
a. ���left��right��ʾ������[left, right]��Ч������b���������ѭ��
b. left��ǰ�����ң��ҵ�һ��ż����ֹͣ
c. right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
d. ���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��
*/
//#include<stdio.h>
//void my_exchange(int* p,int n){
//	//��������ż��
//	int* pp = p + n - 1;
//	while (p < pp){
//		//�������ż����ͣ
//		while (p < pp && ((*p) %2) == 1){
//			p++;
//		}
//		//�ұ�����������ͣ
//		while (p < pp && ((*pp) % 2)==0)
//		{
//			pp--;
//		}
//		if (p < pp){
//			int temp = *p;
//			*p = *pp;
//			*pp = temp;
//		}
//	}
//}
//int main(){
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	my_exchange(arr,sz);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	
//	return 0;
//}
