//202511828 ���ֿ�
//2025.4.20
//������ ��鿡 �ִ� ���� ��ǥ�� �Է¹޾� ��� ��и��� ������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0502();

int main()
{
	//�Լ� asgmt0502�� ȣ���Ѵ�
	asgmt0502();

	return 0;
}

void asgmt0502()
{
	//���� x, y�� �����ϰ� �ʱ�ȭ�Ѵ�
	int x = 0, y = 0;

	//x�� y�� �Է¹޴´�
	printf("���� ��ǥ (x, y)?");
	scanf("%d, %d",&x, &y);

	//��ø�� if�� ����ؼ� ���� ��� ��и鿡 �ִ��� ����Ѵ�
	if (x > 0)
	{
		if (y > 0)
		{
			printf("1��и鿡 �ֽ��ϴ�.");
		}
		else
		{
			printf("4��и鿡 �ֽ��ϴ�.");
		}
		
	}
	else
	{
		if (y > 0)
		{
			printf("2��и鿡 �ֽ��ϴ�.");
		}
		else
		{
			printf("3��и鿡 �ֽ��ϴ�.");
		}
	}

	return;
}