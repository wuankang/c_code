#include "contact.h"
//初始化
Init_Con(struct contact* per)
{
	per->capacity = MAX;
	per->data=(struct contact*)malloc(sizeof(struct contact)*(per->capacity));
}

//添加
void Insert_Con(struct contact* per)
{
	//判断内存是否充足
	printf("-15%s-15%s-15%s","姓名","电话","地址");
	
}