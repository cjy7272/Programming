//202511828 최주영 
//2025.4.12
//질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0403(void);

int main()
{
	//함수 asgmt0403()를 호출한다
	asgmt0403();

	return 0;
}

int asgmt0403(void)
{
	//변수 m과 v를 선언하고 초기화한다
	double m = 0.0;
	double v = 0.0;

	//밀도를 저장할 변수를 선언하고 초기화한다
	double D = 0.0;

	//질량을 입력받는다
	printf("질량(g)?");
	scanf("%lf", &m);

	//부피를 입력받는다
	printf("부피(세제곱센티미터)?");
	scanf("%lf", &v);

	//밀도를 계산한다
	D = m / v;
	
	//밀도를 출력한다
	printf("밀도: %.6f", D);

	return 0;
}
