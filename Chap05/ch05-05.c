//202511828 ���ֿ�
//2025.4.20
//������ �Է¹޾� �������� �˻��ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0504();

int main()
{
	asgmt0504();

	return 0;
}

void asgmt0504()
{
	//���� year�� �����ϰ� �ʱ�ȭ�Ѵ�
	int year = 0;

	//������ �Է¹޴´�
	printf("����?");
	scanf("%d", &year);
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("%d���� �����Դϴ�.", year);
			}
			else
			{
				printf("%d���� ������ �ƴմϴ�.", year);
			}
		}
		else 
		{
			printf("%d���� �����Դϴ�.", year);
		}
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.", year);
	}


	return;
}