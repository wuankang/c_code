#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000
//����һ������Ϣ�Ľṹ��
struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tel[TELE_MAX];
	int age;
};
//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[MAX];//���1000�˵���Ϣ�Ŀռ�
	int sz;//��ʾͨѶ¼�д�ŵ��˵���Ϣ�ĸ���
};
//����������
void InitContact(struct Contact*pc);
//����һ���˵���Ϣ
void AddContact(struct Contact*pc);
//��ʾ��Ϣ
void ShowContact(const struct Contact*pc);
//ɾ����Ϣ
void DelContact(struct Contact*pc);
//������Ϣ
void SearchContact(const struct Contact*pc);
//�޸�ָ����ϵ��
void ModifyContact(const struct Contact*pc);