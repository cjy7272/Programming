//202511828 최주영
//2025.6.4
//구조체 배열을 이용한 로그인 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int asgmt1003();

int main()
{
	asgmt1003();

	return 0;
}

typedef struct LOGIN
{
	char ID[20];
	char PW[20];

}LOGIN;

int asgmt1003()
{
	LOGIN arr[5] =
	{
		{"guest1", "12345"},
		{"guest2", "12345"},
		{"guest3", "12345"},
		{"guest4", "12345"},
		{"guest5", "12345"}
	};
	
	char ID[20];
	char PW[20];

	while (1)
	{
		repeat:
		printf("ID? ");
		scanf("%s", ID);

		for (int i = 0; i < 5; i++)
		{
			if (strcmp(arr[i].ID, ID) == 0)
			{
				printf("PW? ");
				scanf("%s", PW);

				for (int i = 0; i < 5; i++)
				{
					if (strcmp(arr[i].PW, PW) == 0)
					{
						printf("로그인 성공\n");
						goto repeat;
					}
					else
					{
						return 1;
					}

				}
			}
			else
			{
				return 1;
			}
		}
	}
}