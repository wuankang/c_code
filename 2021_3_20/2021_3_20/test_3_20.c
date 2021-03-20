#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//
//int main()
//{
//	char* p = "-123abc";
//	printf("%d\n", atoi(p));
//	return 0;
//}
int my_atoi(char* str)
{
	int flag = 1;
	long long ret = 0;
	//跳过空格
	while (isspace(*str))
	{
		str++;
	}
	//正常结束
	if (*str == '\0')
	{
		return 0;
	}  
	//跳过正负号
	if (*str == '+')
	{
		str++;
	}
	if (*str == '-')
	{
		flag = -1;
		str++;
	}

	//数字
	while (isdigit(*str))
	{
		ret = ret * 10 + flag*(*str - '0');
		if (ret > INT_MAX || ret < INT_MIN)
		{
			return 0;
		}
		 str++;
	}
	return (int)ret;
}
int main()
{
	char* p = " -1314520wak123";
	printf("%d\n",my_atoi(p));
	return 0;
}
//int main()
//{
//	char a[80]= "wak1314520";
//	char b[] = "zl";
//	char*c=strncat(a, b, strlen(a));
//	printf("%s\n", c);
//	return 0;
//}
//改造strncat
//char* my_strncat(char* dest, char* source,int count)
//{
//	char* ptr = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	int i = 0;
//	for (i = 0; source[i] && i < count; i++)
//	{
//		dest[i] = source[i];
//	}
//	dest[i] = 0;
//	return ptr;
//}
//int main()
//{
//	char* dest = "abc";
//	char* source = "def";
//	int count = 3;
//	char* temp=my_strncat(dest, source,count) ;
//	printf("%s\n",temp);
//	return 0;
//}
