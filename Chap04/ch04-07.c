//202511828 ���ֿ� 
//2025.4.13
//���� �ﰢ������ ������ �� �� �� a, b�� ���̸� �Է¹޾� ������ ���̸� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int asgmt0407();

double hypotenuse(int a, int b);

int main()
{
	//�Լ� asgmt0407�� ȣ���Ѵ�
	asgmt0407();

	return 0;
}

int asgmt0407()
{
	//���� a�� b�� �����ϰ� �ʱ�ȭ�Ѵ�
	int a = 0, b = 0;

	//�غ��� �Է¹޴´�
	printf("�غ�?");
	scanf("%d", &a);

	//���̸� �Է¹޴´�
	printf("����?");
	scanf("%d", &b);
	
	//hypotenuse�Լ��� ȣ���ϰ� result�� �����Ѵ�
	double result = hypotenuse(a, b);

	//������ ���̸� ����Ѵ�
	printf("������ ����: %.6f", result);

	return 0;
}

double hypotenuse(int a, int b)
{
	//������ ������ ������ �����ϰ� �ʱ�ȭ�Ѵ�
	double c = 0.0;

	//������ ����Ѵ�
	c = sqrt((a * a) + (b * b));

	return c;
}


