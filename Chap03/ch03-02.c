//202511828 ���ֿ� 
//2025.4.5
//������ ���̿� ������ ���̸� �Է¹޾� ���̿� �ѷ��� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt02(void);

int main()
{
	asgmt02();

	return 0;
}

void asgmt02(void)
{
	int x = 0;
	int y = 0;

	printf("������ ����?");
	scanf("%d", &x);

	printf("������ ����?");
	scanf("%d", &y);

	int area = x * y;
	int circumference = (x + y) * 2;

	printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d\n", circumference);


	return;
}