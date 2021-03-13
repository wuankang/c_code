#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact*pc)
{
	pc->sz = 0;
	//memset�����ڴ�
	memset(pc->data, 0, sizeof(pc->data));//ÿ���ֽڳ�ʼ��Ϊ0
}
//����һ���˵���Ϣ
void AddContact(struct Contact*pc)
{
	//�ж�ͨѶ¼������
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:->");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������:->");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:->");
		scanf("%s", pc->data[pc->sz].sex);
		printf("���������:->");
		scanf("%s", pc->data[pc->sz].tel);
		printf("�������ַ:->");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("��ӳɹ�\n");
	}
}
static int FindByName(const struct Contact*pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void ShowContact(const struct Contact*pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
		printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	{
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tel,
				pc->data[i].addr);
		}
	}
	
}
void DelContact(struct Contact*pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û��ɾ��\n");
	}
	else
	{
		//1.�ҵ�Ҫɾ������
		printf("������ɾ����������->");
		scanf("%s", name);
		int pos=FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			//2.ɾ��
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
	
}
void SearchContact(const struct Contact*pc)
{
	char name[NAME_MAX];
	printf("������Ҫ���ҵ����֣�->");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-15s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tel,
			pc->data[pos].addr);
	}
}
void ModifyContact(const struct Contact*pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ����֣�->");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:->");
		scanf("%s", pc->data[pos].name);
		printf("����������:->");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:->");
		scanf("%s", pc->data[pos].sex);
		printf("���������:->");
		scanf("%s", pc->data[pos].tel);
		printf("�������ַ:->");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
