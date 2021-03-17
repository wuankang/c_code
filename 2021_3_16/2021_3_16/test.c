#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//fopen函数如果是以写的形式打开
//	//如果文件不存在，会创建文件
//	//如果文件错在，会清空文件的内容
//	//fopen以读的方式打开
//	//文件不存在打开失败
//	FILE*pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//失败返回
//	}
//	    //写文件
//	int i = 0;
//	for (i = 'a'; i <='z'; i++)
//	{
//		fputc(i, pf);
//	}
//		/*fputc('a', pf);
//		fputc('b', pf);*/
//		//关文件
//		fclose(pf);
//		pf = NULL;
//	
//	return 0;
//}
//int main()
//{
//	fputc('a', stdout);
//	fputc('b', stdout);
//	fputc('c', stdout);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件成功，读文件。
//	//int ch=fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)//读到最后返回EOF
//	{
//		printf("%c ", ch);
//	}
//		//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);//fgetc读的是输入流 不仅仅是文件流
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写一行数据
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读一行数据
//	//fgets(arr, 4, pf);//读n-1个 包含\0
//	//printf("%s\n", arr);
//	//关闭文件
//	//while (fgets(arr, 100, pf) != NULL)
//	//{
//	//	printf("%s", arr);
//	//}
//	//fgets从标准输入流中读取
//	fgets(arr, 100, stdin);
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//格式化的写入
//	/*fprintf(pf,"%s %d %f",s.name,s.age,s.score);*/
//	//printf("%s %d %f", s.name, s.age, s.score);
//	//格式化的读取
//	fscanf(stdin,"%s %d %f", s.name, &(s.age), &(s.score));
//	//	/*scanf("%s %d %f", s.name, &(s.age), &(s.score));*/
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	////关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//sscanf
//sprintf
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan", 20, 66.5f };
//	char buf[200] = { 0 };
//	//sprint可以把结构化的数据转换成一个字符串
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);
//	struct Stu tmp = { 0 };
//	//sscanf可以把一个字符串转换为一个结构化的数据
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("按照格式化的形式：%s %d %f\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "zhangsan", 20, 99.5 };
//	FILE* pf = fopen("data.txt", "wb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	fwrite(&s,sizeof(s),1,pf);//二进制写入
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "rb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	fread(&s,sizeof(struct Stu),1,pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf=fopen("bin.dat", "wb");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}