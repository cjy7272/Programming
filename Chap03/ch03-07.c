//202511828 ���ֿ� 
//2025.4.5
//��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷�

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

	printf("��/�޷� ȯ��?");
	scanf("%f", &exchange_rate);

	float won = exchange_rate * dollar;

	printf("USD %.2f = KRW %.2f\n", dollar, won);

	return;
}