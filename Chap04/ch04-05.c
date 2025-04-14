//202511828 최주영 
//2025.4.13
//반지름과 높이를 입력받아 원기둥의 부피를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592

#include <stdio.h>

int asgmt0405();

double volume(int r , int h);

int main()
{
	//함수 asgmt0405를 호출한다
	asgmt0405();

	return 0;
}

int asgmt0405()
{
	//변수 r과 h를 선언하고 초기화한다
	int r = 0;
	int h = 0;

	//반지름의 길이를 입력받는다
	printf("반지름의 길이?");
	scanf("%d", &r);

	//높이를 입력받는다
	printf("높이");
	scanf("%d", &h);

	//volume 함수를 호출하고 result에 저장한다
	double result = volume(r, h);

	//원기둥의 부피를 출력한다
	printf("원기둥의 부피: %.6f", result);

	return 0;
}

double volume(int r, int h)
{
	//원기둥의 부피를 저장할 변수를 선언하고 초기화
	double v = 0.0;

	//원기둥의 부피를 계산한다
	v = PI * (double)r  *  r  *  h;

	return v;
}

