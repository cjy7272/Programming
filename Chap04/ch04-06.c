//202511828 ���ֿ� 
//2025.4.13
//��A�� ��ǥ�� ��B�� ��ǥ�� �Է¹޾� �� �� A, B�� ������ ������ ���⸦ ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0406();

double gradient(int x1, int y1, int x2, int y2);

int main()
{
	//�Լ� asgmt0406�� ȣ���Ѵ�
	asgmt0406();

	return 0;
}

int asgmt0406()
{
	//���� x1�� y1�� �����ϰ� �ʱ�ȭ�Ѵ�
	int x1 = 0,  y1 = 0;

	//���� x2�� y2�� �����ϰ� �ʱ�ȭ�Ѵ�
	int x2 = 0,  y2 = 0;
	
	//��A�� �Է¹޴´�
	printf("�� ���� ��ǥ (x1, y1)?");
	scanf("%d %d", &x1, &y1);

	//��B�� �Է¹޴´�
	printf("�� �ٸ� ���� ��ǥ (x2, y2)?");
	scanf("%d %d", &x2, &y2);

	//slope�Լ��� ȣ���ϰ� result�� �����Ѵ�
	double result = gradient(x1, y1, x2, y2);

	//���⸦ ����Ѵ�
	printf("������ ����: %.6f", result);
	
	return 0;
}

double gradient(int x1, int y1, int x2, int y2)
{
	//���⸦ ������ ������ �����ϰ� �ʱ�ȭ�Ѵ�
	double m = 0.0;

	//���⸦ ����Ѵ�
	m = (y2 - y1) / (x2 - x1);

	return m;
}