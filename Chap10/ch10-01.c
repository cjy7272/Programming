//202511828 ���ֿ�
//2025.6.4
//���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void asgmt1001();

int main()
{
	asgmt1001();

	return 0;
}

typedef struct LOGIN
{
	char ID[20];
	char PW[20];

}LOGIN;

void asgmt1001()
{
	LOGIN u1;

	printf("ID? ");
	scanf("%s", u1.ID);
	
	printf("Passward? ");
	scanf("%s", u1.PW);

	printf("ID: %s\n", u1.ID);
	printf("PW: ");
	
	for (int i = 0; i < strlen(u1.PW); i++)
	{
		printf("*");
	}
	
}