//202511828 ���ֿ�
//2025.4.19
//���� ��ǥ�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ Ȯ���ϴ� ���α׷�	

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0501();

int main()
{
	//�Լ� asgmt0501�� �����Ѵ�
	asgmt0501();

	return 0;
}

void asgmt0501()
{
	//���� left�� top�� �����ϰ� �ʱ�ȭ�Ѵ�
	int left = 0, top = 0;

	//���� right�� bottom�� �����ϰ� �ʱ�ȭ�Ѵ�
	int right = 0, bottom = 0;

	//���� x�� y�� �����ϰ� �ʱ�ȭ�Ѵ�
	int x = 0, y = 0;

	//�»������ �Է¹޴´�
	printf("���� ������ �»���� (left, top)?: ");
	scanf("%d %d", &left, &top);	
	
	//�������� �Է¹޴´�
	printf("���� ������ ������ (right, bottom)?: ");
	scanf("%d %d", &right, &bottom);

	//���� ��ǥ�� �Է¹޴´�
	printf("���� ��ǥ (x, y)?: ");
	scanf("%d %d", &x, &y);

	//���� ���� ���� ������ ���� ���� ���� ������ Ȯ���Ѵ�
	if((left <= x) && (top <= y) && (x <= right) && (y <= bottom))
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

	return;
}
