//202511828 최주영
//2025.6.4
//제품, 가격, 재고를 입력받아 저장하고 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt1008();

typedef struct PRODUCT
{
	char name[20];
	int price;
	int stock;
}PRODUCT;

int print_product(PRODUCT pt);

int main()
{
	asgmt1008();

	return 0;
}

void asgmt1008()
{
	PRODUCT pt;

	printf("제품명? ");
	scanf("%s", pt.name);
	printf("가격? ");
	scanf("%d", &pt.price);
	printf("재고? ");
	scanf("%d", &pt.stock);

	print_product(pt);
}

int print_product(PRODUCT pt)
{

	printf("[%s %d원 재고:%d]",pt.name, pt.price, pt.stock);

	return 0;
}
