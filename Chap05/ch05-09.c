//202511828 ���ֿ�
//2025.4.26
//���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0517();

void arking_fee(int a);

int main()
{
	asgmt0517();

	return 0;
}

void asgmt0517()
{
	//���� time�� �����ϰ� �ʱ�ȭ�Ѵ�
	int time = 0;

	//���� �ð��� �Է¹޴´�
	printf("���� �ð�(��)? ");
	scanf("%d", &time);

	//�Լ� arking_fee�� ȣ���Ѵ�
	arking_fee(time);

	return;
}

void arking_fee(int a)
{
	int fee = 0;

	if (a % 10 > 0)
	{
		a = ((a / 10) * 10) + 10;
	}

	fee = a - 30;

	fee = (fee / 10 * 1000) + 2000;

	if (a >= 1440)
	{
		printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.");
	}
	else if (fee >= 25000)
	{
		printf("���� ����� �ִ� 25000���� ���� �� �����ϴ�.");
	}
	else
	{
		printf("���� ���: %d",fee);
	}
	return;
}