//202511828 ���ֿ�
//2025.6.4
//��ǰ, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷�

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

	printf("��ǰ��? ");
	scanf("%s", pt.name);
	printf("����? ");
	scanf("%d", &pt.price);
	printf("���? ");
	scanf("%d", &pt.stock);

	print_product(pt);
}

int print_product(PRODUCT pt)
{

	printf("[%s %d�� ���:%d]",pt.name, pt.price, pt.stock);

	return 0;
}
