//202511828 ���ֿ�
//2025.5.28
//ù ���� ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

void asgmt0701();

int main()
{
	asgmt0701();

	return 0;
}

void asgmt0701()
{
	int term = 0;
	int d = 0;

	printf("ù ��° ��? ");
	scanf("%d", &term);
	printf("��ġ? ");
	scanf("%d", &d);

	int AP[SIZE];
	int sum = term;

	for (int i = 0; i < SIZE; i++)
	{
		AP[i] = sum;
		sum += d;
	}

	printf("��������: ");

	for (int i = 0; i < SIZE; i++)
	{

		printf("%d ", AP[i]);
	}
}
