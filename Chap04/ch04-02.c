//202511828 ���ֿ� 
//2025.4.12
//ȭ�� �µ��� �Ǽ��� �Է¹޾� �����µ��� ��ȯ�ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0402();

int main()
{
	//�Լ� asgmt0402()�� ȣ���Ѵ�
	asgmt0402();

	return 0;
}

int asgmt0402()
{
	//���� f�� c�� �����ϰ� �ʱ�ȭ�Ѵ�
	float f = 0.0f;
	float c = 0.0f;

	//ȭ���µ��� �Է¹޴´�
	printf("ȭ���µ�? ");
	scanf("%f", &f);

	//ȭ���µ��� �����µ��� ��ȯ�Ѵ�
	c = (f - 32.0) * 5.0 / 9.0 ;

	//�����µ��� ����Ѵ�
	printf("%.2f F = %.2f C", f, c);

	return 0;
}

