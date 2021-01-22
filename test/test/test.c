#define _CRT_SECURE_NO_WARNINGS 1
//int main(){
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("请输入你想要的数字：");
//	int k;
//	scanf("%d",&k);//输入你想要的数字
//	int left = 0;
//	int right = 9;
//	while (left <= right){//比较左右大小来得到想要数字的底数
//		int mid = left + (right - left) / 2;
//		if (a[mid] < k){
//			left = mid + 1;
//		}
//		else if (a[mid]>k){
//			right = mid - 1;
//		}
//		else{
//			printf("它的底数是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("找不到奥!\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<limits.h>
//int main(){
//	int a = 2147483646;
//	int b = 2147483646;
//	//printf("%d", a + (b - a) /2);
//	printf("%d\n", (a + b));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main(){
//	char a1[] = "I am so sorry to ZL";
//	char a2[] = "###################";
//	char left = 0;
//	char right= strlen(a1)-1;
//	while (left <= right){
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n", a2);
//		Sleep(1000);//单位是毫秒
//		system("cls");//system是执行系统命令的“clear screen”
//		left++;
//		right--;
//	}
//	printf("%s\n", a2);
//	
//	return 0;
//}
//模拟三次登陆
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int i;
//	char passwd[100];
//	for (i = 0; i < 3; i++){
//		printf("请输入密码->");
//		scanf("%s", passwd);
//		if (strcmp(passwd, "123456") == 0){
//			printf("登陆成功！\n");
//			break;
//		}
//		else{
//			printf("输入错误，请重新输入\n");
//		}
//	}
//	if (i == 3){
//		printf("登陆错误3次，退出程序！\n");
//	}
//	return 0;
//}






