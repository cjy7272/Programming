#define _CRT_SECURE_NO_WARNINGS
#define STR_SIZE 128

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test_Strlen();
int test_Strcpy();
int str_swap();

int main()
{
	//printf("hello world");

	//test_Strlen();

	test_Strcpy();

}

int test_Strcpy()
{
	char str1[STR_SIZE] = "";
	char str2[STR_SIZE] = "";

	printf("�� ���ڿ� �Է�: ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s �� �ԷµǾ����ϴ�\n", str1, str2);

	char temp[STR_SIZE] = "";

	str_swap(str1, str2, STR_SIZE);
	printf("%s �� %s �� ��ȯ�Ǿ�����?", str1, str2);

	return 0;
}
//��ȯ��: ��ȯ�� �� ���ڿ��� ������ ��
int str_swap(char* str1, char* str2, int size)
{
	int result = 0;

	char* temp = NULL;
	// void * malloc(int size);
	temp = (char*)malloc(sizeof(char) * size);
	// char temp[size];

	if (temp == NULL);
	{

		return 0;
	}

	strncpy(temp, str1, size);
	strncpy(str1, str2, size);
	strncpy(str2, temp, size);

	result = strlen(str1) + strlen(str2);

	free(temp);

	return result;
}


int test_Strlen()
{
	char str1[] = "hello";
	char name[] = "���ֿ�";

	size_t len = strlen(str1);

	//printf("%s �� ����: %d\n", str1, strlen(str1));
	printf("%s �� ����: %d\n", str1, len);

	len = strlen("�ȳ��ϼ���");

	printf("%s �� ����: %d\n", name, strlen(name));

	len = strlen("");
	printf("%s �� ����: %d\n", strlen);


}

