//202511828 최주영
//2025.5.28
//크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

void asgmt0706();

int main()
{
	asgmt0706();

	return 0;
}

void asgmt0706()
{
	double arr[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.1f ", arr[i]);
	}

	for (int i = 0; i < SIZE / 2; i++) {
		double change = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = change;
	}

	printf("\n역순: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
}
