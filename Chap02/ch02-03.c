//202511828 ���ֿ� 
//2025.3.20
//��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void score(void);

int main()
{
	score();

	return 0;
}

void score(void)
{
	int number;
	float mark;
	
	printf("��ȣ?");
	scanf("%d", &number);
	
	printf("����?");
	scanf("%f", &mark);
	
	printf("%d�� �л��� ������ %f�Դϴ�.", number, mark);

	return ;
}