//202511828 ���ֿ� 
//2025.4.5
//�Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt07(void);

int main()
{
	asgmt07();

	return 0;
}

void asgmt07(void)
{
	float area = 0;

	printf("�Ǽ�?");
	scanf("%f", &area);

	float square = area * area;
	float cubic = area * area * area;

	printf("����: %.6e\n", square);
	printf("������: %.6e\n", cubic);

	return;
}