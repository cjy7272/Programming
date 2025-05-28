//202511828 최주영
//2025.5.21
//distance 함수를 사용해서 시작점과 끝점 사이의 직선 거리를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

void asgmt0603(void);

double distance(int x1, int y1, int x2, int y2);

int main(void)
{
	asgmt0603();

	return 0;
}

void asgmt0603(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1 ,&y1);

	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	double result = distance(x1, y1, x2, y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %.6f", x1, y1, x2, y2, result);

}

double distance(int x1, int y1, int x2, int y2)
{
	
	double result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return result;
}
