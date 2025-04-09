//202511828 최주영 
//2025.4.5
//원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0310(void);

int main()
{
	asgmt0310();

	return 0;
}

void asgmt0310(void)
{
	float dollar = 0;
	float exchange_rate = 0;

	printf("USD?");
	scanf("%f", &dollar);

	printf("원/달러 환율?");
	scanf("%f", &exchange_rate);

	float won = exchange_rate * dollar;

	printf("USD %.2f = KRW %.2f\n", dollar, won);

	return;
}