//202511828 최주영 
//2025.4.17
//0~31번 비트에서 7번째 비트만 1인값, 15번째 비트만 1인값, 23번째 비트만 1인값, 31번째 비트만 1인값을 구해서 16진수와 10진수로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0417();

int main()
{
	//함수 asgmt0417를 호출한다
	asgmt0417();

	return 0;
}

void asgmt0417()
{
	//변수 a, b, c, d 를 선언하고 초기화한다
	unsigned int a = 0, b = 0, c = 0, d = 0;
	
	//비트 연산자를 이용해서 값을 저장한다
	a = 1 << 7;
	b = 1 << 15;
	c = 1 << 23;
	d = 1 << 31;


	//결과를 출력한다
	printf("7번 비트만 1인 값: %08X %d\n",a, a);
	printf("15번 비트만 1인 값: %08X %d\n",b, b);
	printf("23번 비트만 1인 값: %08X %d\n",c, c);
	printf("31번 비트만 1인 값: %08X %d\n",d, d);

	return;
}