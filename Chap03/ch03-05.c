//202511828 ���ֿ� 
//2025.4.5
//����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#define	PYENMG 0.3025

#include <stdio.h>

void asgmt0306(void);

int main()
{
	asgmt0306();

	return 0;
}

void asgmt0306(void)
{
	float area = 0;

	printf("����Ʈ�� ����(��������)?");
	scanf("%f", &area);

	float W = area * PYENMG;

	printf("%.2f �������� = %.2f ��\n",area, W);

	return;
}