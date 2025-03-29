//202511828 최주영 
//2025.3.29
//몸무게를 입력받아 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void weight(void);

int main()
{
	weight();

	return 0;
}

void weight(void)
{
	float num;
	
	printf("몸무게?");
	scanf("%f", &num);

	printf("입력한 몸무게는 %.2fKG입니다.", num);

	return;
}