#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//1.Febolacci数列，给出一个N，至少需要多少步称为Febolacci数列
//如 0 1 1 2 3 5 8 13 21...... 给出15在21和13的中间，15到13需要步数2，15到21需要步数6，即2是最短距离
//成为Febolacci数列
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
//2.输入字符串we are happy,输出we%20are%20happy
//空格换为%d输出
//先找到一句话中有几个空格，再一个空格是换成三个字符
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
//3.最小公倍数--方法一
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
//方法二
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
//方法三：辗转相除法求最大公约数 再利用a*b/最大公约数=最小公倍数
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
//逆序字符串void reverse(char*left, char*right)
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
//	//反转整个字符串
//	reverse(str,str+len-1);
//	//反转单词
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
//	//输出
//	printf("%s\n", str);
//	return 0;
//}
//模拟实现strncat
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
//	//输出e1
//	printf("%s\n", e1);
//	return 0;
//}
//模拟实现strncpy
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
//	//打印
//	printf("%s\n", e1);
//	return 0;
//}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。编写一个函数找出这两个只出现一次的数字。
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