//202511828 ���ֿ� 
//2025.3.29
//������ 8, 10, 16���� �� �ϳ��� �Է¹޾Ƽ� 8, 10, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void number(void);

int main()
{
	number();

	return 0;
}

void number(void)
{
	int num;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n����?");
	scanf("%i", &num);

	printf("8����: 0%o\n", num);

	printf("10����: %d\n", num); 

	printf("16����: 0x%x\n", num);

	return;
}