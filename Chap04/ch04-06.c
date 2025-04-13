//202511828 최주영 
//2025.4.13
//점A의 좌표와 점B의 좌표를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0406();

double gradient(int x1, int y1, int x2, int y2);

int main()
{
	//함수 asgmt0406을 호출한다
	asgmt0406();

	return 0;
}

int asgmt0406()
{
	//변수 x1와 y1를 선언하고 초기화한다
	int x1 = 0,  y1 = 0;

	//변수 x2와 y2를 선언하고 초기화한다
	int x2 = 0,  y2 = 0;
	
	//점A를 입력받는다
	printf("한 점의 좌표 (x1, y1)?");
	scanf("%d %d", &x1, &y1);

	//점B를 입력받는다
	printf("또 다른 점의 좌표 (x2, y2)?");
	scanf("%d %d", &x2, &y2);

	//slope함수를 호출하고 result에 저장한다
	double result = gradient(x1, y1, x2, y2);

	//기울기를 출력한다
	printf("직선의 기울기: %.6f", result);
	
	return 0;
}

double gradient(int x1, int y1, int x2, int y2)
{
	//기울기를 저장할 변수를 선언하고 초기화한다
	double m = 0.0;

	//기울기를 계산한다
	m = (y2 - y1) / (x2 - x1);

	return m;
}