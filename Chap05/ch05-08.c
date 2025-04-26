//202511828 최주영
//2025.4.26
//햄버거 가게의 계산서 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0509();

void Calculation(int a, int b, int c, int d);

int main()
{
	asgmt0509();

	return 0;
}

void asgmt0509()
{
	//변수 hamburger, french_fries, cola, set를 선언하고 초기화한다
	int set = 0, hamburger = 0, french_fries = 0, cola = 0;

	//메뉴판을 출력한다
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	//수량을 입력받는다
	printf("햄버거 개수? ");
	scanf("%d", &hamburger);
	
	printf("감자튀김 개수? ");
	scanf("%d", &french_fries);

	printf("콜라 개수? ");
	scanf("%d", &cola);

	//받은 입력값중에서 최대한 세트값으로 변환한다
	if (hamburger <= french_fries && hamburger <= cola)
	{
		set = hamburger;

		hamburger = hamburger % hamburger;
		french_fries = french_fries % hamburger;
		cola = cola % hamburger;

	}
	else
	{
		if (french_fries <= hamburger && french_fries <= cola)
		{
			set = french_fries;

			hamburger = hamburger % french_fries;
			french_fries = french_fries % french_fries;
			cola = cola % hamburger;
		}
		else
		{
			set = cola;

			hamburger = hamburger % cola;
			french_fries = french_fries % cola;
			cola = cola % cola;
		}
	}
	//함수 Calculation를 호출한다
	Calculation(set, hamburger, french_fries, cola);
	
	return;
}

void Calculation(int a, int b, int c, int d)
{
	//각 메뉴의 가격을 변수에 저장한다
	int	set_price = 6500;
	int hamburger_price = 4000;
	int	french_fries_price = 2000;
	int	cola_price = 1500;

	//변수 amount1, amount2, amount3, amount4, sum을 선언하고 초기화한다
	int amount1 = 0, amount2 = 0, amount3 = 0, amount4 = 0, sum = 0;

	amount1 = set_price * a;
	amount2 = hamburger_price * b;
	amount3 = french_fries_price * c;
	amount4 = cola_price * d;

	sum = amount1 + amount2 + amount3 + amount4;

	printf("상품명       단가     수량     금액\n");

	if (a > 0)
		printf("세트         %d       %d     %5d\n", set_price, a, amount1);

	if (b > 0)
		printf("햄버거       %d       %d     %5d\n", hamburger_price, b, amount2);

	if (c > 0)
		printf("감자튀김     %d       %d     %5d\n", french_fries_price, c, amount3);

	if (d > 0)
		printf("콜라         %d       %d     %5d\n", cola_price, d, amount4);

	printf("-----------------------------------\n");
	printf("합계                          %5d\n", sum);
}