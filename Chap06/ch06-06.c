//202511828 최주영
//2025.5.23
//인자로 전달된 정수의 약수를 구해서 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>


int divisor(int n);

void asgmt0618(void);

int main(void)
{
	asgmt0618();

	return 0;
}

void asgmt0618(void)
{
	int i = 0;
	int num = 0;

	for (i = 0; i < 3; i++)
	{
		num = rand() % 1000;

		divisor(num);
	}
}

int divisor(int n)
{
	int i = 0, count = 0;
	int result = 0;

	printf("%d의 약수 : ", n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			result = i;
			printf("%d ", result);
			count++;
		}
	}
	printf(" => 총 %d개\n", count);

	return 0;
}