//202511828 ���ֿ�
//2025.4.23
//�Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0503();

void change(int S, int a, int b, int c, int d, int e, int f);

int main()
{
	//�Լ� asgmt0503�� ȣ���Ѵ�
	asgmt0503();

	return 0;
}

void asgmt0503()
{
	//���� S, a, b, c, d, e, f�� �����ϰ� �ʱ�ȭ�Ѵ�
	int S = 0;

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	//�Ž������� �Է¹޴´�
	printf("�Ž�����?");
	scanf("%d", &S);

	//if���� ����ؼ� �ʿ� �̸� ������ �����Ѵ�
	if (S % 10 > 0)
	{
		S = (S / 10) * 10;
	}

	//�Ž����� ���� ����Ѵ�
	printf("�Ž����� (10���̸� ����): %d\n", S);

	//�Լ� change�� ȣ���Ѵ�
	change(S, a, b, c, d, e, f);
	
	return;
}

void change(int S, int a, int b, int c, int d, int e, int f)
{
	//���� �� �� �ʿ����� ����Ѵ�
	a = S / 50000;
	S = S % 50000;

	b = S / 10000;
	S = S % 10000;

	c = S / 5000;
	S = S % 5000;

	d = S / 1000;
	S = S % 1000;

	e = S / 100;
	S = S % 100;

	f = S / 10;

	//����� ����Ѵ�
	printf("  50000��  %d��\n", a);
	printf("  10000��  %d��\n", b);
	printf("   5000��  %d��\n", c);
	printf("   1000��  %d��\n", d);
	printf("    100��  %d��\n", e);
	printf("     10��  %d��\n", f);

	return;
}