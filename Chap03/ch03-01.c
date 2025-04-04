//202511828 최주영 
//2025.4.5
//한 변의 길이를 입력받아 넓이와 둘레를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt01(void);

int main()
{
	asgmt01();

	return 0;
}

void asgmt01(void)
{
	int length = 0;

	printf("한 변의 길이?");
	scanf("%d", &length);

	int area = length * length;
	int circumference = length * 4;

    printf("정사각형의 넓이: %d\n", area);
	printf("정사각형의 둘레: %d\n", circumference);


	return;
}