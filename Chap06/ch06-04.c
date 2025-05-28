//202511828 최주영
//2025.5.21
//메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int choose_menu(void);

void asgmt0606(void);

int main(void)
{
	asgmt0606();

	return 0;
}

void asgmt0606(void)
{
	int menu = 0;
	
	while (1)
	{
		menu = choose_menu();
		if (menu == 0)
		{
			break;
		}
	}
}

int choose_menu(void)
{
	int menu = 0;

	printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1:
		printf("파일 열기를 수행합니다\n");
		break;
	case 2:
		printf("파일 저장을 수행합니다\n");
		break;
	case 3:
		printf("인쇄를 수행합니다\n");
		break;
	case 0:
		break;
	}

	return menu;
}