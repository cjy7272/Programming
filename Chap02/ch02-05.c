//202511828 최주영 
//2025.3.29
//커피 사이즈와 주문 수량을 입력 받아 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void coffee(void);

int main()
{
	coffee();

	return 0;
}

void coffee(void)
{
	char size[32];
	int num;

	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf("%s %d", size, &num);

	printf("%s 사이즈 %d잔을 주문합니다.", size, num);

	return;
}