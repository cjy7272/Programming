//202511828 ���ֿ�
//2025.5.21
//�޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� ���α׷�

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

	printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1:
		printf("���� ���⸦ �����մϴ�\n");
		break;
	case 2:
		printf("���� ������ �����մϴ�\n");
		break;
	case 3:
		printf("�μ⸦ �����մϴ�\n");
		break;
	case 0:
		break;
	}

	return menu;
}