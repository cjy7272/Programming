//202511828 최주영
//2025.4.26
//비트 연산을 수행하는 프로그램

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
	//변수 operand1, operand2, operator를 선언하고 초기화한다
	int operand1 = 0, operand2 = 0;
	char operator = '&';

	//비트 연산식을 입력받는다
	printf("비트 연산식? ");
	scanf("%i %c %i", &operand1, &operator, &operand2);
	
	int result = bitwise_operation(operand1, operator, operand2);

	//결과를 출력한다
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
