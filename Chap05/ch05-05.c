//202511828 최주영
//2025.4.20
//연도를 입력받아 윤년인지 검사하는 프로그램

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
	//변수 year을 선언하고 초기화한다
	int year = 0;

	//연도를 입력받는다
	printf("연도?");
	scanf("%d", &year);
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("%d년은 윤년입니다.", year);
			}
			else
			{
				printf("%d년은 윤년이 아닙니다.", year);
			}
		}
		else 
		{
			printf("%d년은 윤년입니다.", year);
		}
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", year);
	}


	return;
}