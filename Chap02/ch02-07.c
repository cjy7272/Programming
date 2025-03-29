//202511828 최주영 
//2025.3.29
//정수를 8, 10, 16진수 중 하나로 입력받아서 8, 10, 16진수 각각 얼마에 해당하는지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void number(void);

int main()
{
	number();

	return 0;
}

void number(void)
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n정수?");
	scanf("%i", &num);

	printf("8진수: 0%o\n", num);

	printf("10진수: %d\n", num); 

	printf("16진수: 0x%x\n", num);

	return;
}