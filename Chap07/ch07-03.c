//202511828 ���ֿ�
//2025.5.28
//ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

void asgmt0706();

int main()
{
	asgmt0706();

	return 0;
}

void asgmt0706()
{
	double arr[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("�迭: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.1f ", arr[i]);
	}

	for (int i = 0; i < SIZE / 2; i++) {
		double change = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = change;
	}

	printf("\n����: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
}
