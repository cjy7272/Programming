//202511828 ���ֿ�
//2025.5.29
//����ǥ ���� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void asgmt0712();

int main()
{
	asgmt0712();

	return 0;
}

void asgmt0712()
{
	char train_seat[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', };
	int seat = 0;
	int sum = 0;
	
	while (sum < 10)
	{
		printf("���� �¼�: ");
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", train_seat[j]);
		}

		printf("\n������ �¼���? ");
		scanf("%d", &seat);
	
		for (int a = sum; a < (seat + sum); a++)
		{
			train_seat[a] = 'X';
			printf("%d ", a + 1);
		}
		printf("�� �¼��� �����߽��ϴ�.\n");

		sum += seat;
	}
}