//202511828 ���ֿ� 
//2025.4.5
//������ ���̸� �Է¹޾� ��ġ �������� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0303(void);

int main()
{
	asgmt0303();

	return 0;
}

void asgmt0303(void)
	
{
	int mass = 0;
	int height = 0;

	printf("����(Kg)?");
	scanf("%d", &mass);

	printf("����(m)?");
	scanf("%d", &height);

	float Ep = 9.8 * mass * height;
	
	printf("��ġ������: %.6f J\n", Ep);
	
	return;
}