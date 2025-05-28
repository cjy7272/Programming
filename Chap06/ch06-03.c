//202511828 최주영
//2025.5.21
//is_even와 is_odd함수를 사용해서 입력받은 정수중 홀수와 짝수가 몇개인지 구하는 프로그램

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

    printf("정수를 빈칸으로 구분해서 입력하세요. (마지막에 0 입력)\n");

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

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even_count, odd_count);
}

int is_even(int num)
{
	
	return (num % 2 == 0);
}


int is_odd(int num)
{
	
	return (num % 2 != 0);
}