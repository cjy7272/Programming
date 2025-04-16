#include <stdio.h>

//함수 f1 선언
void f1(void);  

//함수 f3 선언
int f3(int a, int b);

int main()
{	
	int x = 3;

	//함수 f1 호출
	f1();   

	//함수 f3 호출, 반환값을 r에 저장
	int result = f3(2, 3);

	return 1;

}

//함수 f1 정의
void f1(void)
{
	//Hello World 출력
	printf("Hello World\n");

	return;
}

/*
	함수명: int f3(int a, int b)
	기능: 입력된 두 수 a, b를 더해서 반환
	입력: a, b는 정수
    반환: 정수
*/
int f3(int a, int b)
{
	int result = 0;

	//두 수를 더해서 반환
	result = a + b;

	return result;
}