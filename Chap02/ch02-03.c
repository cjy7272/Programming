//202511828 최주영 
//2025.3.20
//번호와 학점을 입력받아 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void score(void);

int main()
{
	score();

	return 0;
}

void score(void)
{
	int num;
	float mark;
	
	printf("번호?");
	scanf("%d", &num);
	
	printf("학점?");
	scanf("%f", &mark);
	
	printf("%d번 학생의 학점은 %f입니다.", num, mark);

	return ;
}