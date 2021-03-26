#include "contact.h"
//��ʼ��ͨѶ¼
void InitContact(Con* pContact)
{
	pContact->count = 0;
	pContact->capacity = MAX;
	pContact->data =(struct Data*)malloc(sizeof(struct Data)*MAX);//����ռ��С
	if (pContact->data == NULL)//�ж��Ƿ����ɹ�
	{
		printf("%d\n", strerror(errno));//��ӡ������Ϣ
		return;
	}
}
//���
void Add(Con* pContact)
{
	//�жϿռ��Ƿ�����
	if (pContact->count == pContact->capacity)
	{
		struct DATA* p = realloc(pContact->data, sizeof(struct Data)*(pContact->capacity+ 2));
		if (p != NULL)
		{
			pContact->data = p;
			printf("���ݳɹ�\n");
		}
		pContact->capacity +=2;
	}
	//��ʼ���
	printf("����������:>");
	scanf("%s", pContact->data[pContact->count].name);
	printf("������绰:>");
	scanf("%s", pContact->data[pContact->count].tel);
	printf("�������ַ:>");
	scanf("%s", pContact->data[pContact->count].addr);
	pContact->count++;//ͨѶ¼��������1
	printf("��ӳɹ�\n");
}
//չ��
void Show(Con* pContact)
{
	//�ж��Ƿ�Ϊ��
	if (pContact->count == 0)
	{
		printf("�տ���Ҳ!\n");
		return;
	}
	printf("%-15s%-15s%-15s\n", "����", "�绰", "��ַ");
	for (int i = 0; i < pContact->count; i++)
	{
		printf("%-15s%-15s%-15s\n", pContact->data[i].name,
									pContact->data[i].tel,
									pContact->data[i].addr);
	}	
}
//ɾ��
void Del(Con* pContact)
{
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pContact->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	else
	{
		printf("ɾ���˵�����:>");
		char del_name[30];
		scanf("%s", del_name);
		int i = 0;
		for (i = 0; i < pContact->count; i++)//����һ��
		{
			if (strcmp(pContact->data[i].name, del_name) == 0)
			{
				for (int j = i; j < pContact->count; j++)
				{
					pContact->data[j] = pContact->data[j + 1];
				}
			}
		}
		pContact->count--;//ͨѶ¼������һ
		printf("ɾ���ɹ�\n");
	}
}
//�޸�
void Modify(Con* pContact)
{
	int input = 0;
	int i = 0;
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pContact->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	else
	{
		printf("�޸��˵�����:>");
		char mod_name[80];
		scanf("%s", mod_name);
		for (i = 0; i < pContact->count; i++)
		{
			if (strcmp(pContact->data[i].name, mod_name)==0)
			{
				break;//�ҵ�λ��i������ѭ��
			}
			else
			{
				printf("û�д��ˣ�\n");
				return;
			}
		}
		do
		{
			printf("��ѡ���޸ĵ�����:>1.name 2.tel 3.addr 0.save\n");//ѡ���޸ĵ�����
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("����������:>");
				scanf("%s", pContact->data[i].name);
				break;
			case 2:
				printf("������绰:>");
				scanf("%s", pContact->data[i].tel);
				break;
			case  3:
				printf("�������ַ:>");
				scanf("%s", pContact->data[i].addr);
				break;
			case 0:
				printf("����ɹ�!\n");
			default:
				break;
			}
		} while (input);
	}
}

//����
void Find(Con* pContact)
{
	int input = 0;
	int i = 0;
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (pContact->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	else
	{
		printf("����������˵�����:>");
		char find_name[80];
		scanf("%s", find_name);
		for (int i = 0; i < pContact->count; i++)
		{
			if (strcmp(pContact->data[i].name, find_name) == 0)
			{
				printf("%-15s%-15s%-15s\n", pContact->data[i].name,
					pContact->data[i].tel,
					pContact->data[i].addr);
				return;
			}
		}
		printf("�޴���\n");
	}
	
}