//202511828 ���ֿ�
//2025.4.23
//�µ��� �Է¹޾� �����µ��� ȭ���µ��� ȭ���µ��� �����µ��� ��ȯ�ϴ� ���α׷�

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
	//���� temperature�� unit1, unit2�� �����ϰ� �ʱ�ȭ�Ѵ�
	double temperature = 0;

	char unit1 = 'C';
	char unit2 = 'C';

	//�µ��� ������ �Է¹޴´�
	printf("�µ�? ");
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

	//��ȯ�� �µ��� ����Ѵ�
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
