//202511828 ���ֿ�
//2025.5.28
//Ư�� ������ �ʱ�ȭ�� ������ �迭���� �ִ��� ������ ���ҿ� �ּڰ��� ������ ������ �ε����� ���� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void asgmt0704();

int main()
{
	asgmt0704();

	return 0;
}

void asgmt0704()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	printf("�迭: ");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	int max_price = arr[0];
	int min_price = arr[0];

	int max_index = 0;
	int min_index = 0;


	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > max_price)
		{
			max_price = arr[i];
			max_index = i;
		}
		if (arr[i] < min_price)
		{
			min_price = arr[i];
			min_index = i;
		}
	}
	
	printf("\n�ִ�: �ε��� = %d, �� = %d\n", max_index, max_price);
	printf("�ּڰ�: �ε��� = %d, �� = %d\n", min_index, min_price);

}
