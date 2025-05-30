#include <stdio.h>
#include "contact.h"
#include <string.h>

//isEqualContact()
//��ȯ��: ���� ������ 1 , �׷��� ������ 0�� ��ȯ
//�Է�: ���� �� Contact��

int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContact(Contact ct)
{

	printf("�̸�: %s \n", ct.name);
	printf("����: %s \n", ct.phone);
	printf("����: %s \n", ct.gender == MAN ? "����" : "����");
	printf("����: %d \n", ct.year);

}

int isEqualContactPtr(const Contact* a, const Contact* b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContactPtr(const Contact* ct)
{

	printf("�̸�: %s \n", ct->name);
	printf("����: %s \n", ct->phone);
	printf("����: %s \n", ct->gender == MAN ? "����" : "����");
	printf("����: %d \n", ct->year);

}

