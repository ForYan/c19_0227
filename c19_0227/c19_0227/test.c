#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//5.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
void Init(int* str){
	int str1[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; ++i){
		str[i] = str1[i];
	}
	for (int i=0; i <5; ++i){
		printf("%d  ", str[i]);
	}
	printf("\n");
}
void Reverse(int* str){
	for (int i = 4; i >= 0; --i){
		printf("%d  ", str[i]);
	}
	printf("\n");
}
void Empty(int* str){
	for (int i = 0; i < 5; ++i){
		str[i] = 0;
	}
	for (int i = 0; i < 5; ++i){
		printf("%d  ", str[i]);
	}
	printf("\n");
}

int main(){
	int str[5] = { 0 };
	Init(str);	
	Reverse(str);
	Empty(str);
	system("pause");
	return 0;
}

//4.实现一个函数，判断一个数是不是素数。
//int IsSu(int num){
//	int count = 0;
//	int i = 2;
//	for (i=2; i < num; ++i){
//		if (num%i == 0){//记录不是素数
//			++count;
//		}
//	}
//	if (count>0){//如果count>0,则不是素数，返回0
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//int main(){
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int i = IsSu(num);
//	if (i == 1){
//		printf("是素数！");
//	}
//	else{
//		printf("不是素数！");
//	}
//	system("pause");
//	return 0;
//}

//3.实现一个函数判断year是不是闰年。
//void IsLeapYear(int year){
//	if (year % 4 == 0){
//		if (year % 100 == 0){
//			printf("是世纪年！\n");
//		}
//		else{
//			printf("是普通年！\n");
//		}
//	}
//	else{
//		printf("不是闰年！\n");
//	}
//}
//int main(){
//	int year;
//	printf("请输入要判断的年份：");
//	scanf("%d", &year);
//	IsLeapYear(year);
//	system("pause");
//	return 0;
//}

//2.使用函数实现两个数的交换。
//void Swap(int* num1, int* num2){
//	int tem = 0;
//	tem = *num1;
//	*num1 = *num2;
//	*num2 = tem;
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	Swap(&num1, &num2);
//	printf("num1=%d,num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void PrintMul(int num){
//	for (int i = 1; i <= num; ++i){
//		for (int j = 1; j <= i; ++j){
//			printf("%d*%d=%d   ", i, j, i*j);//打印完一行
//		}
//		printf("\n");//换行
//	}
//}
//int main(){
//	int num = 0;
//	printf("请输入num=");
//	scanf("%d", &num);
//	PrintMul(num);
//	system("pause");
//	return 0;
//}