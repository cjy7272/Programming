//202511828 ���ֿ�
//2025.5.21
//get_perimeter �Լ��� ����ؼ� ���簢���� �ѷ��� ���ϴ�  ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0601(void);

int get_perimeter(int a, int b);

int main(void)
{
	asgmt0601();

	return 0;
}

void asgmt0601(void)
{
	int a = 0;
	int b = 0;

	printf("����? ");
	scanf("%d",&a);

	printf("����? ");
	scanf("%d",&b);

	int result = get_perimeter(a, b);

	printf("���簢���� �ѷ� : %d", result);

}

int get_perimeter(int a, int b)
{
	int circumference = (a + b) * 2;

	return circumference;
}
