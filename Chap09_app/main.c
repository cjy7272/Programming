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

	printf("두 문자열 입력: ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s 가 입력되었습니다\n", str1, str2);

	char temp[STR_SIZE] = "";

	str_swap(str1, str2, STR_SIZE);
	printf("%s 와 %s 가 교환되었나요?", str1, str2);

	return 0;
}
//반환값: 교환된 두 문자열의 길이의 합
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
	char name[] = "최주영";

	size_t len = strlen(str1);

	//printf("%s 의 길이: %d\n", str1, strlen(str1));
	printf("%s 의 길이: %d\n", str1, len);

	len = strlen("안녕하세요");

	printf("%s 의 길이: %d\n", name, strlen(name));

	len = strlen("");
	printf("%s 의 길이: %d\n", strlen);


}

