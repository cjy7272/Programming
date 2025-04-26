//202511828 최주영
//2025.4.26
//주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0517();

void arking_fee(int a);

int main()
{
	asgmt0517();

	return 0;
}

void asgmt0517()
{
	//변수 time을 선언하고 초기화한다
	int time = 0;

	//주차 시간을 입력받는다
	printf("주차 시간(분)? ");
	scanf("%d", &time);

	//함수 arking_fee를 호출한다
	arking_fee(time);

	return;
}

void arking_fee(int a)
{
	int fee = 0;

	if (a % 10 > 0)
	{
		a = ((a / 10) * 10) + 10;
	}

	fee = a - 30;

	fee = (fee / 10 * 1000) + 2000;

	if (a >= 1440)
	{
		printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.");
	}
	else if (fee >= 25000)
	{
		printf("주차 요금은 최대 25000원을 넘을 수 없습니다.");
	}
	else
	{
		printf("주차 요금: %d",fee);
	}
	return;
}