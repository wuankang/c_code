#define _CRT_SECURE_NO_WARNINGS 1
//int main(){
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("����������Ҫ�����֣�");
//	int k;
//	scanf("%d",&k);//��������Ҫ������
//	int left = 0;
//	int right = 9;
//	while (left <= right){//�Ƚ����Ҵ�С���õ���Ҫ���ֵĵ���
//		int mid = left + (right - left) / 2;
//		if (a[mid] < k){
//			left = mid + 1;
//		}
//		else if (a[mid]>k){
//			right = mid - 1;
//		}
//		else{
//			printf("���ĵ����ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("�Ҳ�����!\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<limits.h>
//int main(){
//	int a = 2147483646;
//	int b = 2147483646;
//	//printf("%d", a + (b - a) /2);
//	printf("%d\n", (a + b));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main(){
//	char a1[] = "I am so sorry to ZL";
//	char a2[] = "###################";
//	char left = 0;
//	char right= strlen(a1)-1;
//	while (left <= right){
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n", a2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//system��ִ��ϵͳ����ġ�clear screen��
//		left++;
//		right--;
//	}
//	printf("%s\n", a2);
//	
//	return 0;
//}
//ģ�����ε�½
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int i;
//	char passwd[100];
//	for (i = 0; i < 3; i++){
//		printf("����������->");
//		scanf("%s", passwd);
//		if (strcmp(passwd, "123456") == 0){
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3){
//		printf("��½����3�Σ��˳�����\n");
//	}
//	return 0;
//}






