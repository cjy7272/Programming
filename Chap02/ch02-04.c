//202511828 ���ֿ� 
//2025.3.29
//�����Ը� �Է¹޾� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void weight(void);

int main()
{
	weight();

	return 0;
}

void weight(void)
{
	float num;
	
	printf("������?");
	scanf("%f", &num);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", num);

	return;
}