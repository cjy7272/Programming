//202511828 ���ֿ� 
//2025.4.9
//������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0401(void);

double getMotionEnergy(double m, double v);

int main()
{
	int r = asgmt0401();
	
	return 0;
}

int asgmt0401(void)
{
	double m = 0.0;
	double v = 0.0;

	printf("������ �ӷ��� �Է����ּ���.");
	scanf("%lf %lf", &m, &v);

	double result = getMotionEnergy(m, v);

	printf("���� %.2fKg �ӷ� %.2f�� � �������� %.2f J�Դϴ�.\n",m, v, result);
	
	return 0;
}

double getMotionEnergy(double m, double v)
{

	double Ev = 0.0;		

	Ev = 0.5 * m * v * v;

	return Ev;
}