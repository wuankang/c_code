#include "contact.h"
//��ʼ��
Init_Con(struct contact* per)
{
	per->capacity = MAX;
	per->data=(struct contact*)malloc(sizeof(struct contact)*(per->capacity));
}

//���
void Insert_Con(struct contact* per)
{
	//�ж��ڴ��Ƿ����
	printf("-15%s-15%s-15%s","����","�绰","��ַ");
	
}