//202511828 ���ֿ� 
//2025.3.29
//16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void hexadecimal(void);

int main()
{
	hexadecimal();

	return 0;
}

void hexadecimal(void)
{
	int num;

	printf("16���� ����?");
	scanf("%x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�.", num, num);

	return;
}