//202511828 ���ֿ� 
//2025.4.5
//��ü�� �ۿ��� ���� ũ��� �̵��Ÿ��� �Է¹޾� ���� ���� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0304(void);

int main()
{
	asgmt0304();

	return 0;
}

void asgmt0304(void)
{
	int F = 0;
	int S = 0;

	printf("��(N)?");
	scanf("%d", &F);

	printf("�̵��Ÿ�(m)?");
	scanf("%d", &S);

	float W = F * S;

	printf("���� ��: %.2f J\n", W);

	return;
}