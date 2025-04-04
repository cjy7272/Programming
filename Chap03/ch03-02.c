//202511828 최주영 
//2025.4.5
//가로의 길이와 세로의 길이를 입력받아 넓이와 둘레를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt02(void);

int main()
{
	asgmt02();

	return 0;
}

void asgmt02(void)
{
	int x = 0;
	int y = 0;

	printf("가로의 길이?");
	scanf("%d", &x);

	printf("세로의 길이?");
	scanf("%d", &y);

	int area = x * y;
	int circumference = (x + y) * 2;

	printf("직사각형의 넓이: %d\n", area);
	printf("직사각형의 둘레: %d\n", circumference);


	return;
}