//202511828 ���ֿ� 
//2025.4.16
//��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ� ������ �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#define Exchange_fee 0.0175

#include <stdio.h>

void asgmt0415();

double exchange_rate(double a, double b);

int main()
{
	//�Լ� asgmt0415�� ȣ���Ѵ�
	asgmt0415();

	return 0;
}

void asgmt0415()
{
	//���� a�� b�� �����ϰ� �ʱ�ȭ�Ѵ�
	double a = 0.0, b = 0.0;

	//���� c�� d�� �����ϰ� �ʱ�ȭ �Ѵ�
	double c = 0.0, d = 0.0;

	//��/�޷� �Ÿű������� �Է¹޴´�
	printf("��/�޷� �Ÿű�����?");
	scanf("%lf", &a);

	//ȯ��������� �Է¹޴´�
	printf("ȯ�������(0~100%)?");
	scanf("%lf", &b);

	//�Լ� exchange_rate�� ȣ���Ѵ�
	double result = exchange_rate(a, b);

	//result�� ����Ѵ�
	printf("�޷� �� �� ȯ���� %.6f�Դϴ�\n", result);
	
	
	//������ �޷��� �Է¹޴´�
	printf("������ �޷�(USD)?");
	scanf("%lf", &c);

	//�Է��� �޷��� �� ���� �ش��ϴ��� ����Ѵ�
	d = result * c;

	//d�� ����Ѵ�
	printf("USD %.2f �� �� ==> KRW %.2f", c, d);

	return;
}

double exchange_rate(double a, double b)
{
	//ȯ���� ������ ������ �����ϰ� �ʱ�ȭ �Ѵ�
	double c = 0.0;

	//b�� ��ȯ�Ѵ�
	b *= 0.01;

	//ȯ���� ����Ѵ�
	c = a + (a * Exchange_fee * (1.0 - b));
	
	//c�� ��ȯ�Ѵ�
	return c;
}