//202511828 ���ֿ� 
//2025.4.12
//������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0403(void);

int main()
{
	//�Լ� asgmt0403()�� ȣ���Ѵ�
	asgmt0403();

	return 0;
}

int asgmt0403(void)
{
	//���� m�� v�� �����ϰ� �ʱ�ȭ�Ѵ�
	double m = 0.0;
	double v = 0.0;

	//�е��� ������ ������ �����ϰ� �ʱ�ȭ�Ѵ�
	double D = 0.0;

	//������ �Է¹޴´�
	printf("����(g)?");
	scanf("%lf", &m);

	//���Ǹ� �Է¹޴´�
	printf("����(��������Ƽ����)?");
	scanf("%lf", &v);

	//�е��� ����Ѵ�
	D = m / v;
	
	//�е��� ����Ѵ�
	printf("�е�: %.6f", D);

	return 0;
}
