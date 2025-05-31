//202511828 최주영
//2025.5.23
//수치 데이터와 스케일을 인자로 받아 그래프로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

int graph(int, int);

void asgmt0619(void);

int main(void)
{
	

	asgmt0619();

	return 0;
}

void asgmt0619(void)
{
	int x = 0;
	int y = 0;
	int i = 0;

	x = rand() % 10000; 
	y = 100; 

	for (i = 0; i < 3; i++)
	{
		graph(x, y);

		x = rand() % 10000;
	}
}

int graph(int data, int scale)
{
	int i = 0;
	int result = 0;

	printf("%d : ", data);

	for (i = 0; i < data / scale; i++)
	{
		printf("*");
	}

	printf("\n");

	return 0;
}