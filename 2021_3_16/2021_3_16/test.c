#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//fopen�����������д����ʽ��
//	//����ļ������ڣ��ᴴ���ļ�
//	//����ļ����ڣ�������ļ�������
//	//fopen�Զ��ķ�ʽ��
//	//�ļ������ڴ�ʧ��
//	FILE*pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	    //д�ļ�
//	int i = 0;
//	for (i = 'a'; i <='z'; i++)
//	{
//		fputc(i, pf);
//	}
//		/*fputc('a', pf);
//		fputc('b', pf);*/
//		//���ļ�
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
//	//���ļ��ɹ������ļ���
//	//int ch=fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)//������󷵻�EOF
//	{
//		printf("%c ", ch);
//	}
//		//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);//fgetc������������ ���������ļ���
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
//	//дһ������
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//	//�ر��ļ�
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
//	//��һ������
//	//fgets(arr, 4, pf);//��n-1�� ����\0
//	//printf("%s\n", arr);
//	//�ر��ļ�
//	//while (fgets(arr, 100, pf) != NULL)
//	//{
//	//	printf("%s", arr);
//	//}
//	//fgets�ӱ�׼�������ж�ȡ
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
//	//��ʽ����д��
//	/*fprintf(pf,"%s %d %f",s.name,s.age,s.score);*/
//	//printf("%s %d %f", s.name, s.age, s.score);
//	//��ʽ���Ķ�ȡ
//	fscanf(stdin,"%s %d %f", s.name, &(s.age), &(s.score));
//	//	/*scanf("%s %d %f", s.name, &(s.age), &(s.score));*/
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	////�ر��ļ�
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
//	//sprint���԰ѽṹ��������ת����һ���ַ���
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);
//	struct Stu tmp = { 0 };
//	//sscanf���԰�һ���ַ���ת��Ϊһ���ṹ��������
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("���ո�ʽ������ʽ��%s %d %f\n", tmp.name, tmp.age, tmp.score);
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
//	//д�ļ�
//	fwrite(&s,sizeof(s),1,pf);//������д��
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
//	//���ļ�
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