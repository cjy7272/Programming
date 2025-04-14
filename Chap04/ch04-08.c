//202511828 최주영 
//2025.4.14
//반지름의 길이를 입력받아 구의 부피를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592

#include <stdio.h>

#include <math.h>

void asgmt0408();

double volume(int r, int h);

int main()
{
	//함수 asgmt0408를 호출한다
	asgmt0408();

	return 0;
}

void asgmt0408()
{
	//변수 r을 선언하고 초기화한다
	int r = 0;

	//원기둥의 부피를 저장할 변수를 선언하고 초기화
	double v = 0.0;

	//반지름의 길이를 입력받는다
	printf("반지름의 길이?");
	scanf("%d", &r);

	//반지름의 세제곱을 저장할 변수를 선언하고 계산한다
	int r3 = (r * r * r);

	//원기둥의 부피를 계산한다
	v = (double)4 / 3 * PI * r3;

	//원기둥의 부피를 출력한다
	printf("구의 부피: %.6f", v);



	return 0;
}
