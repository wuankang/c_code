#include<stdio.h>
#pragma warning(disable:4996)
//�������������--���ֲ���/�۰����--��ʽ��log��2Ϊ�׵�n���Σ���nΪ������
int main(){
	char ch[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0,k = 7;
	int sz = sizeof(ch) / sizeof(ch[0]);
	int left = 0, right = sz - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (ch[mid] > k){
			right = mid - 1;
		}
		else if (ch[mid] < k){
			left = mid + 1;
		}
		else{
			printf("�ҵ��ˣ���\n");
			printf("����%d\n", mid);
			break;
		}
	}
	if (left>right){
		printf("�Ҳ�����\n");
	}
	return 0;
}