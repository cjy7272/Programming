//202511828 최주영 
//2025.4.5
//실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt07(void);

int main()
{
	asgmt07();

	return 0;
}

void asgmt07(void)
{
	float area = 0;

	printf("실수?");
	scanf("%f", &area);

	float square = area * area;
	float cubic = area * area * area;

	printf("제곱: %.6e\n", square);
	printf("세제곱: %.6e\n", cubic);

	return;
}