//202511828 ���ֿ�
//2025.5.21
//distance �Լ��� ����ؼ� �������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

void asgmt0603(void);

double distance(int x1, int y1, int x2, int y2);

int main(void)
{
	asgmt0603();

	return 0;
}

void asgmt0603(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1 ,&y1);

	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	double result = distance(x1, y1, x2, y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %.6f", x1, y1, x2, y2, result);

}

double distance(int x1, int y1, int x2, int y2)
{
	
	double result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return result;
}
