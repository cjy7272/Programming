//202511828 ���ֿ� 
//2025.4.13
//�������� ���̸� �Է¹޾� ������� ���Ǹ� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592

#include <stdio.h>

int asgmt0405();

double volume(int r , int h);

int main()
{
	//�Լ� asgmt0405�� ȣ���Ѵ�
	asgmt0405();

	return 0;
}

int asgmt0405()
{
	//���� r�� h�� �����ϰ� �ʱ�ȭ�Ѵ�
	int r = 0;
	int h = 0;

	//�������� ���̸� �Է¹޴´�
	printf("�������� ����?");
	scanf("%d", &r);

	//���̸� �Է¹޴´�
	printf("����");
	scanf("%d", &h);

	//volume �Լ��� ȣ���ϰ� result�� �����Ѵ�
	double result = volume(r, h);

	//������� ���Ǹ� ����Ѵ�
	printf("������� ����: %.6f", result);

	return 0;
}

double volume(int r, int h)
{
	//������� ���Ǹ� ������ ������ �����ϰ� �ʱ�ȭ
	double v = 0.0;

	//������� ���Ǹ� ����Ѵ�
	v = PI * (double)r  *  r  *  h;

	return v;
}

