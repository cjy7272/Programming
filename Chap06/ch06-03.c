//202511828 ���ֿ�
//2025.5.21
//is_even�� is_odd�Լ��� ����ؼ� �Է¹��� ������ Ȧ���� ¦���� ����� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void asgmt0605(void);

int is_even(int);

int is_odd(int);

int main(void)
{
	asgmt0605();

	return 0;
}

void asgmt0605(void)
{
    int num = 0;
    int even_count = 0;
    int odd_count = 0;

    printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�)\n");

    while (1) 
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        if (is_even(num))
        {
            even_count++;
        }
            
        else if (is_odd(num))
        {
            odd_count++;
        }
            
    }

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even_count, odd_count);
}

int is_even(int num)
{
	
	return (num % 2 == 0);
}


int is_odd(int num)
{
	
	return (num % 2 != 0);
}