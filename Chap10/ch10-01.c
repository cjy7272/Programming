//202511828 최주영
//2025.6.4
//아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램

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