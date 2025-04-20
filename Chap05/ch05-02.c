//202511828 최주영
//2025.4.19
//점의 좌표를 입력받아 스크린 상의 선택 영역 내의 점인지 확인하는 프로그램	

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0501();

int main()
{
	//함수 asgmt0501를 선언한다
	asgmt0501();

	return 0;
}

void asgmt0501()
{
	//변수 left와 top를 선언하고 초기화한다
	int left = 0, top = 0;

	//변수 right와 bottom를 선언하고 초기화한다
	int right = 0, bottom = 0;

	//변수 x와 y를 선언하고 초기화한다
	int x = 0, y = 0;

	//좌상단점을 입력받는다
	printf("선택 영역의 좌상단점 (left, top)?: ");
	scanf("%d %d", &left, &top);	
	
	//우상단점을 입력받는다
	printf("선택 영역의 우상단점 (right, bottom)?: ");
	scanf("%d %d", &right, &bottom);

	//점의 좌표를 입력받는다
	printf("점의 좌표 (x, y)?: ");
	scanf("%d %d", &x, &y);

	//선택 영역 내의 점인지 선택 영역 밖의 점인지 확인한다
	if((left <= x) && (top <= y) && (x <= right) && (y <= bottom))
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 밖의 점입니다.");
	}

	return;
}
