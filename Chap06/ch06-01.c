//202511828 최주영
//2025.5.21
//get_perimeter 함수를 사용해서 직사각형의 둘레를 구하는  프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0601(void);

int get_perimeter(int a, int b);

int main(void)
{
	asgmt0601();

	return 0;
}

void asgmt0601(void)
{
	int a = 0;
	int b = 0;

	printf("가로? ");
	scanf("%d",&a);

	printf("세로? ");
	scanf("%d",&b);

	int result = get_perimeter(a, b);

	printf("직사각형의 둘레 : %d", result);

}

int get_perimeter(int a, int b)
{
	int circumference = (a + b) * 2;

	return circumference;
}
