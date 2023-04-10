#define _CRT_SECURE_NO_WARNINGS 1
//将数组a中的元素和数组b中的元素进行交换，数组一样大
#include <stdio.h>
void jiaohuan(char arr1[], char arr2[], int sz)
{
	int i = 0;
	char a = 0;
	for (i = 0; i < sz; i++)
	{
		a = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = a;
	}
}

int main()
{
	char arr1[] = { "**********" };
	char arr2[] = { "##########" };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	jiaohuan(arr1, arr2, sz);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}