//202511828 ���ֿ�
//2025.4.26
//�ܹ��� ������ ��꼭 ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0509();

void Calculation(int a, int b, int c, int d);

int main()
{
	asgmt0509();

	return 0;
}

void asgmt0509()
{
	//���� hamburger, french_fries, cola, set�� �����ϰ� �ʱ�ȭ�Ѵ�
	int set = 0, hamburger = 0, french_fries = 0, cola = 0;

	//�޴����� ����Ѵ�
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

	//������ �Է¹޴´�
	printf("�ܹ��� ����? ");
	scanf("%d", &hamburger);
	
	printf("����Ƣ�� ����? ");
	scanf("%d", &french_fries);

	printf("�ݶ� ����? ");
	scanf("%d", &cola);

	//���� �Է°��߿��� �ִ��� ��Ʈ������ ��ȯ�Ѵ�
	if (hamburger <= french_fries && hamburger <= cola)
	{
		set = hamburger;

		hamburger = hamburger % hamburger;
		french_fries = french_fries % hamburger;
		cola = cola % hamburger;

	}
	else
	{
		if (french_fries <= hamburger && french_fries <= cola)
		{
			set = french_fries;

			hamburger = hamburger % french_fries;
			french_fries = french_fries % french_fries;
			cola = cola % hamburger;
		}
		else
		{
			set = cola;

			hamburger = hamburger % cola;
			french_fries = french_fries % cola;
			cola = cola % cola;
		}
	}
	//�Լ� Calculation�� ȣ���Ѵ�
	Calculation(set, hamburger, french_fries, cola);
	
	return;
}

void Calculation(int a, int b, int c, int d)
{
	//�� �޴��� ������ ������ �����Ѵ�
	int	set_price = 6500;
	int hamburger_price = 4000;
	int	french_fries_price = 2000;
	int	cola_price = 1500;

	//���� amount1, amount2, amount3, amount4, sum�� �����ϰ� �ʱ�ȭ�Ѵ�
	int amount1 = 0, amount2 = 0, amount3 = 0, amount4 = 0, sum = 0;

	amount1 = set_price * a;
	amount2 = hamburger_price * b;
	amount3 = french_fries_price * c;
	amount4 = cola_price * d;

	sum = amount1 + amount2 + amount3 + amount4;

	printf("��ǰ��       �ܰ�     ����     �ݾ�\n");

	if (a > 0)
		printf("��Ʈ         %d       %d     %5d\n", set_price, a, amount1);

	if (b > 0)
		printf("�ܹ���       %d       %d     %5d\n", hamburger_price, b, amount2);

	if (c > 0)
		printf("����Ƣ��     %d       %d     %5d\n", french_fries_price, c, amount3);

	if (d > 0)
		printf("�ݶ�         %d       %d     %5d\n", cola_price, d, amount4);

	printf("-----------------------------------\n");
	printf("�հ�                          %5d\n", sum);
}