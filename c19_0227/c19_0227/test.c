#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//5.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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

//4.ʵ��һ���������ж�һ�����ǲ���������
//int IsSu(int num){
//	int count = 0;
//	int i = 2;
//	for (i=2; i < num; ++i){
//		if (num%i == 0){//��¼��������
//			++count;
//		}
//	}
//	if (count>0){//���count>0,��������������0
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//int main(){
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int i = IsSu(num);
//	if (i == 1){
//		printf("��������");
//	}
//	else{
//		printf("����������");
//	}
//	system("pause");
//	return 0;
//}

//3.ʵ��һ�������ж�year�ǲ������ꡣ
//void IsLeapYear(int year){
//	if (year % 4 == 0){
//		if (year % 100 == 0){
//			printf("�������꣡\n");
//		}
//		else{
//			printf("����ͨ�꣡\n");
//		}
//	}
//	else{
//		printf("�������꣡\n");
//	}
//}
//int main(){
//	int year;
//	printf("������Ҫ�жϵ���ݣ�");
//	scanf("%d", &year);
//	IsLeapYear(year);
//	system("pause");
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ�����
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

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//void PrintMul(int num){
//	for (int i = 1; i <= num; ++i){
//		for (int j = 1; j <= i; ++j){
//			printf("%d*%d=%d   ", i, j, i*j);//��ӡ��һ��
//		}
//		printf("\n");//����
//	}
//}
//int main(){
//	int num = 0;
//	printf("������num=");
//	scanf("%d", &num);
//	PrintMul(num);
//	system("pause");
//	return 0;
//}