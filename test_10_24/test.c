#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main() {
	//30;
	//"asd";
	//const int a = 29;
	// int arr[a] = { 0 }; //����
	//printf("%d\n", a);
	
	//char s1 = 's';
	////char s2 = "sdda"; ���������洢�ַ�������Ҫ�洢��һ���ַ�������
	//char s2[20] = "1qazwsxerf";
	
	//char arr1[] = { 'a', 'c', 'd', 'd', '\0', 's'};
	//char arr2[] = "sdssepfe";
	//int len1 = strlen("adc");
	//int len2 = strlen(arr1);
	//printf("%d\n", len1);
	//printf("%d\n", len2);

	//函数的编写
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d %d", &num1, &num2);
	//sum = add(num1, num2);
	//printf("%d\n", sum);

	//数组
	int a[] = { 0, 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", a[i]);

	}

	return 0;
}

int add(int n1, int n2) {
	return n1 + n2;
}