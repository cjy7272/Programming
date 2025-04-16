//202511828 최주영 
//2025.4.16
//원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고 구입할 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#define Exchange_fee 0.0175

#include <stdio.h>

void asgmt0415();

double exchange_rate(double a, double b);

int main()
{
	//함수 asgmt0415를 호출한다
	asgmt0415();

	return 0;
}

void asgmt0415()
{
	//변수 a와 b를 선언하고 초기화한다
	double a = 0.0, b = 0.0;

	//변수 c와 d를 선언하고 초기화 한다
	double c = 0.0, d = 0.0;

	//원/달러 매매기준율을 입력받는다
	printf("원/달러 매매기준율?");
	scanf("%lf", &a);

	//환율우대율을 입력받는다
	printf("환율우대율(0~100%)?");
	scanf("%lf", &b);

	//함수 exchange_rate를 호출한다
	double result = exchange_rate(a, b);

	//result를 출력한다
	printf("달러 살 때 환율은 %.6f입니다\n", result);
	
	
	//구입할 달러를 입력받는다
	printf("구입할 달러(USD)?");
	scanf("%lf", &c);

	//입력한 달러가 몇 원에 해당하는지 계산한다
	d = result * c;

	//d를 출력한다
	printf("USD %.2f 살 때 ==> KRW %.2f", c, d);

	return;
}

double exchange_rate(double a, double b)
{
	//환율을 저장할 변수를 선언하고 초기화 한다
	double c = 0.0;

	//b를 변환한다
	b *= 0.01;

	//환율을 계산한다
	c = a + (a * Exchange_fee * (1.0 - b));
	
	//c를 반환한다
	return c;
}