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
//	//��void(*)(int)����һ������p_fun,����ʽ�ӣ��������׿��Ķ�
//	p_fun signal(int, p_fun);
//	return 0;
//}
//������--�ӡ������ˡ���
//#include<stdio.h>
//void menu(){
//	printf("***********************\n");
//	printf("***    1.��  2.��   ***\n");
//	printf("***    3.��  4.��   ***\n");
//	printf("***       0.�˳�    ***\n");
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
//	//����ָ������-----ת�Ʊ�
//	int (*p[])(int,int) = { 0, Add, Sub, Mul, Dvi };
//	do{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (0 == input){
//			printf("�˳���\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4){
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			ret = p[input](a, b);
//		printf("%d\n", ret);
//	}
//		//switch (input){
//		//case 0:printf("�˳���\n");
//		//	break;
//		//case 1:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &a, &b);
//		//	ret=Add(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 2:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Sub(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 3:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Mul(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//case 4:
//		//	printf("����������������:>");
//		//	scanf("%d%d", &a, &b); 
//		//	ret=Dvi(a, b);
//		//	printf("%d\n", ret);
//		//	break;
//		//default:printf("�����������������\n");
//		//	break;
//		//}
//		else{
//			printf("�����������������\n");
//		}
//	} while(input);
//	return 0;
//}
#include<stdio.h>
int main(){
	//ָ��ӷ������ĺ���ָ��
	int(*p)(int, int);
	//����ָ������
	int(*parr[4])(int, int);
	//ָ����ָ��������ָ��
	int(*(*pparr)[4])(int, int)=&parr;
	return 0;
}