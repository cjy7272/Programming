//202511828 최주영
//2025.4.20
//이차원 평면에 있는 점의 좌표를 입력받아 어느 사분면의 점인지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0502();

int main()
{
	//함수 asgmt0502를 호출한다
	asgmt0502();

	return 0;
}

void asgmt0502()
{
	//변수 x, y를 선언하고 초기화한다
	int x = 0, y = 0;

	//x와 y를 입력받는다
	printf("점의 좌표 (x, y)?");
	scanf("%d, %d",&x, &y);

	//중첩된 if를 사용해서 점이 어느 사분면에 있는지 출력한다
	if (x > 0)
	{
		if (y > 0)
		{
			printf("1사분면에 있습니다.");
		}
		else
		{
			printf("4사분면에 있습니다.");
		}
		
	}
	else
	{
		if (y > 0)
		{
			printf("2사분면에 있습니다.");
		}
		else
		{
			printf("3사분면에 있습니다.");
		}
	}

	return;
}