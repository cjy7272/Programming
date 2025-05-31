//202511828 최주영
//2025.5.28
//첫 번쨰 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

void asgmt0701();

int main()
{
	asgmt0701();

	return 0;
}

void asgmt0701()
{
	int term = 0;
	int d = 0;

	printf("첫 번째 항? ");
	scanf("%d", &term);
	printf("공치? ");
	scanf("%d", &d);

	int AP[SIZE];
	int sum = term;

	for (int i = 0; i < SIZE; i++)
	{
		AP[i] = sum;
		sum += d;
	}

	printf("등차수열: ");

	for (int i = 0; i < SIZE; i++)
	{

		printf("%d ", AP[i]);
	}
}
