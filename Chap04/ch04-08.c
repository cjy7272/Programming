//202511828 ���ֿ� 
//2025.4.14
//�������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592

#include <stdio.h>

#include <math.h>

void asgmt0408();

double volume(int r, int h);

int main()
{
	//�Լ� asgmt0408�� ȣ���Ѵ�
	asgmt0408();

	return 0;
}

void asgmt0408()
{
	//���� r�� �����ϰ� �ʱ�ȭ�Ѵ�
	int r = 0;

	//������� ���Ǹ� ������ ������ �����ϰ� �ʱ�ȭ
	double v = 0.0;

	//�������� ���̸� �Է¹޴´�
	printf("�������� ����?");
	scanf("%d", &r);

	//�������� �������� ������ ������ �����ϰ� ����Ѵ�
	int r3 = (r * r * r);

	//������� ���Ǹ� ����Ѵ�
	v = (double)4 / 3 * PI * r3;

	//������� ���Ǹ� ����Ѵ�
	printf("���� ����: %.6f", v);



	return 0;
}
