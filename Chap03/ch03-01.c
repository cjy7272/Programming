//202511828 ���ֿ� 
//2025.4.5
//�� ���� ���̸� �Է¹޾� ���̿� �ѷ��� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt01(void);

int main()
{
	asgmt01();

	return 0;
}

void asgmt01(void)
{
	int length = 0;

	printf("�� ���� ����?");
	scanf("%d", &length);

	int area = length * length;
	int circumference = length * 4;

    printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d\n", circumference);


	return;
}