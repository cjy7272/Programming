//202511828 최주영 
//2025.4.5
//아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#define	PYENMG 0.3025

#include <stdio.h>

void asgmt0306(void);

int main()
{
	asgmt0306();

	return 0;
}

void asgmt0306(void)
{
	float area = 0;

	printf("아파트의 면적(제곱미터)?");
	scanf("%f", &area);

	float W = area * PYENMG;

	printf("%.2f 제곱미터 = %.2f 평\n",area, W);

	return;
}