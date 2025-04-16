//202511828 최주영 
//2025.4.14
//동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0409();

int main()
{
	//함수 asgmt0409를 호출한다
	asgmt0409();

	return 0;
}

void asgmt0409()
{
	//변수 s, m, h을 선언하고 초기화한다
	int s = 0 , m = 0, h = 0;
	
	//초 단위를 변환할 변수를 선언하고 초기화
	int x = 0;

	//반지름의 길이를 입력받는다
	printf("재생시간(초)?");
	scanf("%d", &s);

	//초를 시간으로 변환한다
	h = s / 3600;

	s = s % 3600;
	//초를 분으로 변환한다
	m = s / 60;

	s = s % 60;
	
	//시간을 출력한다
	printf("%d시간 %d분 %d초입니다.", h, m, s);

	return ;
}
