//202511828 ���ֿ�
//2025.6.7
//���簢���� ������ �Է¹޾� �����ϰ� ����ϴ� ���α׷�

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

	printf("���簢���� ���ϴ���(x, y)? ");
	scanf("%d %d", &rt.Right.x, &rt.Right.y);
	printf("���簢���� ������(x, y)? ");
	scanf("%d %d", &rt.Left.x, &rt.Left.y);

	print_rect(rt);
}

void print_rect(RECT rt)
{
	printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]", rt.Right.x, rt.Right.y, rt.Left.x, rt.Left.y);

}
