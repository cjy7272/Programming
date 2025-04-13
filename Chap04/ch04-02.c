//202511828 최주영 
//2025.4.12
//화씨 온도를 실수로 입력받아 섭씨온도로 변환하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0402();

int main()
{
	//함수 asgmt0402()를 호출한다
	asgmt0402();

	return 0;
}

int asgmt0402()
{
	//변수 f와 c를 선언하고 초기화한다
	float f = 0.0f;
	float c = 0.0f;

	//화씨온도를 입력받는다
	printf("화씨온도? ");
	scanf("%f", &f);

	//화씨온도를 섭씨온도로 변환한다
	c = (f - 32.0) * 5.0 / 9.0 ;

	//섭씨온도를 출력한다
	printf("%.2f F = %.2f C", f, c);

	return 0;
}

