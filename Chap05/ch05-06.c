//202511828 최주영
//2025.4.23
//온도를 입력받아 섭씨온도는 화씨온도로 화씨온도는 섭씨온도로 변환하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0505();

double Celsius_Fahrenheit(double x, char y);

int main()
{
	asgmt0505();

	return 0;
}

void asgmt0505()
{
	//변수 temperature과 unit1, unit2를 선언하고 초기화한다
	double temperature = 0;

	char unit1 = 'C';
	char unit2 = 'C';

	//온도와 단위를 입력받는다
	printf("온도? ");
	scanf("%lf %c", &temperature, &unit1);

	if(unit1 == 'C')
	{
		unit2 = 'F';
	}
	else
	{
		unit2 = 'C';
	}

	double result = Celsius_Fahrenheit(temperature, unit1);

	//변환한 온도를 출력한다
	printf("%.2f %c ==> %.2f %c", temperature, unit1, result, unit2);

	return;
}

double Celsius_Fahrenheit(double x, char y)
{
	double temperature = 0;

	if (y == 'C')
	{
		temperature = (x * 9 / 5) + 32;
	}
	else
	{
		temperature = (x - 32) * 5 / 9;
	}

	return temperature;
}
