//202511828 ���ֿ�
//2025.4.26
//��Ʈ ������ �����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0508();

int bitwise_operation(int x, char y, int z);

int main()
{
	asgmt0508();

	return 0;
}

void asgmt0508()
{
	//���� operand1, operand2, operator�� �����ϰ� �ʱ�ȭ�Ѵ�
	int operand1 = 0, operand2 = 0;
	char operator = '&';

	//��Ʈ ������� �Է¹޴´�
	printf("��Ʈ �����? ");
	scanf("%i %c %i", &operand1, &operator, &operand2);
	
	int result = bitwise_operation(operand1, operator, operand2);

	//����� ����Ѵ�
	printf("%x", result);

	return;
}

int bitwise_operation(int x, char y, int z)
{
	int operation = 0;

	if (y == '&')
	{
		operation = x & z;
	}
	else
	{
		if (y == '|')
		{
			operation = x | z;
		}
		else
		{
			operation = x ^ z;
		}
	}	
	return operation;
}
