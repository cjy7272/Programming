//202511828 최주영
//2025.5.28
//3 * 3 행렬의 합을 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void asgmt0710();

int main()
{
	asgmt0710();

	return 0;
}

void asgmt0710()
{
	int x[3][3] =
	{
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90},
	};
	
	int y[3][3] =
	{
		{9, 8, 7,},
		{6, 5, 4,},
		{3, 2, 1,},
	};

	int sum[3][3];

	printf("x 행렬:\n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}

	printf("y 행렬:\n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%4d", y[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sum[i][j] = x[i][j] + y[i][j];
		}
	}

	printf("x + y 행렬:\n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%4d", sum[i][j]);
		}
		printf("\n");
	}
}

