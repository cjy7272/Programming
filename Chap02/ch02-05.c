//202511828 ���ֿ� 
//2025.3.29
//Ŀ�� ������� �ֹ� ������ �Է� �޾� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void coffee(void);

int main()
{
	coffee();

	return 0;
}

void coffee(void)
{
	char size[32];
	int num;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
	scanf("%s %d", size, &num);

	printf("%s ������ %d���� �ֹ��մϴ�.", size, num);

	return;
}