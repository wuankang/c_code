#define _CRT_SECURE_NO_WARNINGS 1

//atoi�����Ĵ���
//�ո�
//�������
//���ַ�
//��ָ��
//������
//#include<stdio.h>
//#include<limits.h>
//enum State
//{
//	Valid,//0
//	Invalid//1
//};
//enum State state = Invalid;
//int my_atoi(const char* p)
//{
//	long long num = 0;
//	//���ַ�'\0'����
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	//��ָ�봦��
//	if (*p == NULL)
//	{
//		return 0;
//	}
//	//�ո���
//	while(isspace(*p))
//	{
//		p++;
//	}
//	//�����Ŵ���
//	int flag = 0;
//	if (*p == '+')
//	{
//		flag = 1;
//		p++;
//	}
//	if (*p == '-')
//	{
//		flag = -1;
//		p++;
//	}
//	//������
//	while (*p != '\0')
//	{
//		if (isdigit(*p))
//		{
//			num = num * 10 + flag*(*p - '0');
//			if (num > INT_MAX || num < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			break;
//		}
//		p++;
//	}
//	if (*p == '\0')
//	{
//		state = Valid;
//		return num;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int ret=my_atoi("-11111111");
//	if (state==Invalid)
//	{
//		printf("���Ϸ�:%d\n", ret);
//	}
//	else
//	{
//		printf("�Ϸ�:%d\n", ret);
//	}
//	return 0;
//}

//void sort(int* arr,int sz)
//{
//	int a = arr[0];
//	int arr1[80];
//	int pos = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i]>a)
//		{
//			arr1[pos] = arr[i];
//			pos++;
//		}
//	}
//	arr1[pos] = a;
//	pos++;
//	for (int j = 0; j < sz; j++)
//	{
//		if (arr[j] < a)
//		{
//			arr1[pos] = arr[j];
//			pos++;
//		}
//	}
//	printf("\n�����Ϊ:>\n");
//	for (int k = 0; k < pos; k++)
//	{
//		printf("%d ", arr1[k]);
//	}
//}
//int main()
//{
//	int A[] = { 2, 3, 1, 5, 4 };
//	int sz = sizeof(A) / sizeof(int);
//	printf("����ǰΪ:>\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	sort(A,sz);
//	return 0;
//}