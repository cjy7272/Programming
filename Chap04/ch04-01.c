//202511828 최주영 
//2025.4.9
//질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램

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

	printf("질량과 속력을 입력해주세요.");
	scanf("%lf %lf", &m, &v);

	double result = getMotionEnergy(m, v);

	printf("질량 %.2fKg 속력 %.2f의 운동 에너지는 %.2f J입니다.\n",m, v, result);
	
	return 0;
}

double getMotionEnergy(double m, double v)
{

	double Ev = 0.0;		

	Ev = 0.5 * m * v * v;

	return Ev;
}