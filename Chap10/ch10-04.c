//202511828 최주영
//2025.6.7
//직사각형의 정보를 입력받아 저장하고 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt1013();

typedef struct POINT
{
	int x;
	int y;

}POINT;

typedef struct RECT
{
	POINT Right;
	POINT Left;

}RECT;

void print_rect(RECT rt);

int main()
{
	asgmt1013();

	return 0;
}

void asgmt1013()
{
	RECT rt;

	printf("직사각형의 좌하단점(x, y)? ");
	scanf("%d %d", &rt.Right.x, &rt.Right.y);
	printf("직사각형의 우상단점(x, y)? ");
	scanf("%d %d", &rt.Left.x, &rt.Left.y);

	print_rect(rt);
}

void print_rect(RECT rt)
{
	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]", rt.Right.x, rt.Right.y, rt.Left.x, rt.Left.y);

}
