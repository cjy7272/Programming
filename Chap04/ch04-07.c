//202511828 최주영 
//2025.4.13
//직각 삼각형에서 직각을 낀 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int asgmt0407();

double hypotenuse(int a, int b);

int main()
{
	//함수 asgmt0407을 호출한다
	asgmt0407();

	return 0;
}

int asgmt0407()
{
	//변수 a와 b를 선언하고 초기화한다
	int a = 0, b = 0;

	//밑변을 입력받는다
	printf("밑변?");
	scanf("%d", &a);

	//높이를 입력받는다
	printf("높이?");
	scanf("%d", &b);
	
	//hypotenuse함수를 호출하고 result에 저장한다
	double result = hypotenuse(a, b);

	//빗변의 길이를 출력한다
	printf("빗변의 길이: %.6f", result);

	return 0;
}

double hypotenuse(int a, int b)
{
	//빗변을 저장할 변수를 선언하고 초기화한다
	double c = 0.0;

	//빗변을 계산한다
	c = sqrt((a * a) + (b * b));

	return c;
}


