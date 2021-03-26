#include "contact.h"
//初始化通讯录
void InitContact(Con* pContact)
{
	pContact->count = 0;
	pContact->capacity = MAX;
	pContact->data =(struct Data*)malloc(sizeof(struct Data)*MAX);//分配空间大小
	if (pContact->data == NULL)//判断是否分配成功
	{
		printf("%d\n", strerror(errno));//打印错误信息
		return;
	}
}
//添加
void Add(Con* pContact)
{
	//判断空间是否满了
	if (pContact->count == pContact->capacity)
	{
		struct DATA* p = realloc(pContact->data, sizeof(struct Data)*(pContact->capacity+ 2));
		if (p != NULL)
		{
			pContact->data = p;
			printf("扩容成功\n");
		}
		pContact->capacity +=2;
	}
	//开始添加
	printf("请输入名字:>");
	scanf("%s", pContact->data[pContact->count].name);
	printf("请输入电话:>");
	scanf("%s", pContact->data[pContact->count].tel);
	printf("请输入地址:>");
	scanf("%s", pContact->data[pContact->count].addr);
	pContact->count++;//通讯录个数增加1
	printf("添加成功\n");
}
//展现
void Show(Con* pContact)
{
	//判断是否为空
	if (pContact->count == 0)
	{
		printf("空空如也!\n");
		return;
	}
	printf("%-15s%-15s%-15s\n", "姓名", "电话", "地址");
	for (int i = 0; i < pContact->count; i++)
	{
		printf("%-15s%-15s%-15s\n", pContact->data[i].name,
									pContact->data[i].tel,
									pContact->data[i].addr);
	}	
}
//删除
void Del(Con* pContact)
{
	//判断通讯录是否为空
	if (pContact->count == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	else
	{
		printf("删除人的姓名:>");
		char del_name[30];
		scanf("%s", del_name);
		int i = 0;
		for (i = 0; i < pContact->count; i++)//遍历一遍
		{
			if (strcmp(pContact->data[i].name, del_name) == 0)
			{
				for (int j = i; j < pContact->count; j++)
				{
					pContact->data[j] = pContact->data[j + 1];
				}
			}
		}
		pContact->count--;//通讯录个数减一
		printf("删除成功\n");
	}
}
//修改
void Modify(Con* pContact)
{
	int input = 0;
	int i = 0;
	//判断通讯录是否为空
	if (pContact->count == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	else
	{
		printf("修改人的名字:>");
		char mod_name[80];
		scanf("%s", mod_name);
		for (i = 0; i < pContact->count; i++)
		{
			if (strcmp(pContact->data[i].name, mod_name)==0)
			{
				break;//找到位置i，跳出循环
			}
			else
			{
				printf("没有此人！\n");
				return;
			}
		}
		do
		{
			printf("请选择修改的内容:>1.name 2.tel 3.addr 0.save\n");//选择修改的内容
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("请输入姓名:>");
				scanf("%s", pContact->data[i].name);
				break;
			case 2:
				printf("请输入电话:>");
				scanf("%s", pContact->data[i].tel);
				break;
			case  3:
				printf("请输入地址:>");
				scanf("%s", pContact->data[i].addr);
				break;
			case 0:
				printf("保存成功!\n");
			default:
				break;
			}
		} while (input);
	}
}

//查找
void Find(Con* pContact)
{
	int input = 0;
	int i = 0;
	//判断通讯录是否为空
	if (pContact->count == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	else
	{
		printf("请输入查找人的姓名:>");
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
		printf("无此人\n");
	}
	
}