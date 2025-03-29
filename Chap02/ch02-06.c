//202511828 최주영 
//2025.3.29
//16진수 정수를 입력받아 10진수로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void hexadecimal(void);

int main()
{
	hexadecimal();

	return 0;
}

void hexadecimal(void)
{
	int num;

	printf("16진수 정수?");
	scanf("%x", &num);

	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return;
}