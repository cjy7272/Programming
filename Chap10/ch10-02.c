//202511828 ���ֿ�
//2025.6.4
//����ü �迭�� �̿��� �α��� ���α׷�

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
						printf("�α��� ����\n");
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