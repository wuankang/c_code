#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//1.Febolacci���У�����һ��N��������Ҫ���ٲ���ΪFebolacci����
//�� 0 1 1 2 3 5 8 13 21...... ����15��21��13���м䣬15��13��Ҫ����2��15��21��Ҫ����6����2����̾���
//��ΪFebolacci����
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	while (1)
//	{
//		if (n == f2)
//		{
//			printf("%d\n", 0);
//			break;
//		}
//		else if (n < f2)
//		{
//			if (abs(n - f1)>abs(n - f2))
//			{
//				printf("%d\n", n - f2);
//			}
//			else
//			{
//				printf("%d\n", n - f1);
//			}
//			break;
//		}
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	
//	return 0;
//}
//2.�����ַ���we are happy,���we%20are%20happy
//�ո�Ϊ%d���
//���ҵ�һ�仰���м����ո���һ���ո��ǻ��������ַ�
//void my_replace(char* ptr, int length)
//{
//	int i = 0;
//	int spa_count = 0;
//	for (i = 0; i < length; i++)
//	{
//		if (ptr[i] == ' ')
//		{
//			spa_count++;
//		}
//	}
//	int new_len = length + 2 * spa_count;
//	int pos = new_len - 1;
//	for (i = length -1; i > 0; i--)
//	{
//		if (ptr[i] == ' ')
//		{
//			ptr[pos--] = '0';
//			ptr[pos--] = '2';
//			ptr[pos--] = '%';
//		}
//		else
//		{
//			ptr[pos--] = ptr[i];
//		}
//	}
//}
//int main()
//{
//	char str[1024] = "we are happy";
//	int len = strlen(str);
//	my_replace(str,len);
//	printf("%s\n", str);
//}
//3.��С������--����һ
//int main()
//{
//	int elem1 = 0;
//	int elem2 = 0;
//	scanf("%d%d", &elem1, &elem2);
//	int lcm = elem1 > elem2 ? elem1 : elem2;
//	while (!(lcm%elem1 == 0 && lcm%elem2 == 0))
//	{
//		lcm++;
//	}
//	printf("%d\n", lcm);
//	return 0;
//}
//������
//int main()
//{
//	unsigned int a = 0;
//	unsigned int b = 0;
//	scanf("%u %u", &a, &b);
//	int i = 1;
//	while (a*i%b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//}
//��������շת����������Լ�� ������a*b/���Լ��=��С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	int d = a;
//	int f = b;
//	while ((c = a%b)!=0)
//	{
//		a = b;
//		b = c;
//	}
//	printf("glc is %d\n", b);
//	printf("lcm is %d\n",(d*f)/b);
//	return 0;
//
//�����ַ���void reverse(char*left, char*right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[80];
//	gets(str);
//	int len = strlen(str);
//	//��ת�����ַ���
//	reverse(str,str+len-1);
//	//��ת����
//	char*start = str;
//	char*end = str;
//	while (*start)
//	{
//		end = start;
//		while (*end != ' ' && *end!='\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			start = end + 1;
//		else
//			start = end;
//	}
//	//���
//	printf("%s\n", str);
//	return 0;
//}
//ģ��ʵ��strncat
//void my_strncat(char*e1, char*e2,int n)
//{
//	int count = 0;
//	while (*e1++ != '\0')
//	{
//		;
//	}
//	char* start = e1 - 1;
//	while (*e2 != '\0')
//	{
//		count++;
//		if (count > n)
//		{
//			break;
//		}
//		*start = *e2;
//		start++;
//		e2++;
//	}
//	*start = '\0';
//}
//int main()
//{
//	int n = 0;
//	char e1[80];
//	char e2[80];
//	gets(e1);
//	gets(e2);
//	scanf("%d", &n);
//	my_strncat(e1, e2,n);
//	//���e1
//	printf("%s\n", e1);
//	return 0;
//}
//ģ��ʵ��strncpy
//void my_strncpy(char* e1, char* e2, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		e1[i] = e2[i];
//	}
//}
//int main()
//{
//	char e1[80];
//	char e2[80];
//	gets(e1);
//	gets(e2);
//	int n = 0;
//	scanf("%d", &n);
//	my_strncpy(e1, e2, n);
//	//��ӡ
//	printf("%s\n", e1);
//	return 0;
//}
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ���дһ�������ҳ�������ֻ����һ�ε����֡�
void discern(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int pos = 0;
	int arr1[10];
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}
		}
		if (j == len - 1)
		{
			arr[pos] = i;
			pos++;
		}
	}
	for (i = 0; i < pos;i++)
		printf("%d ", arr1[i]);
}

int main()
{
	int arr[10] = { 1, 1, 2, 2, 3, 4, 5, 4, 6, 5 };
	int len = 10;
	printf("%d\n", len);
	discern(arr,len);
	return 0;
}