//202511828 최주영
//2025.4.23
//거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0503();

void change(int S, int a, int b, int c, int d, int e, int f);

int main()
{
	//함수 asgmt0503을 호출한다
	asgmt0503();

	return 0;
}

void asgmt0503()
{
	//변수 S, a, b, c, d, e, f를 선언하고 초기화한다
	int S = 0;

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	//거스름돈을 입력받는다
	printf("거스름돈?");
	scanf("%d", &S);

	//if문을 사용해서 십원 미만 단위를 절사한다
	if (S % 10 > 0)
	{
		S = (S / 10) * 10;
	}

	//거스름돈 값을 출력한다
	printf("거스름돈 (10원미만 절사): %d\n", S);

	//함수 change를 호출한다
	change(S, a, b, c, d, e, f);
	
	return;
}

void change(int S, int a, int b, int c, int d, int e, int f)
{
	//각각 몇 개 필요한지 계산한다
	a = S / 50000;
	S = S % 50000;

	b = S / 10000;
	S = S % 10000;

	c = S / 5000;
	S = S % 5000;

	d = S / 1000;
	S = S % 1000;

	e = S / 100;
	S = S % 100;

	f = S / 10;

	//결과를 출력한다
	printf("  50000원  %d장\n", a);
	printf("  10000원  %d장\n", b);
	printf("   5000원  %d장\n", c);
	printf("   1000원  %d장\n", d);
	printf("    100원  %d개\n", e);
	printf("     10원  %d개\n", f);

	return;
}