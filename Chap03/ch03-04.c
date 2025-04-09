//202511828 최주영 
//2025.4.5
//물체의 작용한 힘의 크기와 이동거리를 입력받아 일의 양을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0304(void);

int main()
{
	asgmt0304();

	return 0;
}

void asgmt0304(void)
{
	int F = 0;
	int S = 0;

	printf("힘(N)?");
	scanf("%d", &F);

	printf("이동거리(m)?");
	scanf("%d", &S);

	float W = F * S;

	printf("일의 양: %.2f J\n", W);

	return;
}