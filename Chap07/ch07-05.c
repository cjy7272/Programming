//202511828 최주영
//2025.5.29
//기차표 예매 프로그램

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
		printf("현재 좌석: ");
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", train_seat[j]);
		}

		printf("\n예매할 좌석수? ");
		scanf("%d", &seat);
	
		for (int a = sum; a < (seat + sum); a++)
		{
			train_seat[a] = 'X';
			printf("%d ", a + 1);
		}
		printf("번 좌석을 예매했습니다.\n");

		sum += seat;
	}
}