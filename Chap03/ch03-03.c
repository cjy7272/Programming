//202511828 최주영 
//2025.4.5
//질량과 높이를 입력받아 위치 에너지를 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0303(void);

int main()
{
	asgmt0303();

	return 0;
}

void asgmt0303(void)
	
{
	int mass = 0;
	int height = 0;

	printf("질량(Kg)?");
	scanf("%d", &mass);

	printf("높이(m)?");
	scanf("%d", &height);

	float Ep = 9.8 * mass * height;
	
	printf("위치에너지: %.6f J\n", Ep);
	
	return;
}