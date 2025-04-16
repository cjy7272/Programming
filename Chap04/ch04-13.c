#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int m;
	int f;

	scanf("%d", &m);

	f = 6 <= m <= 8 ? 70000 : 35000;

	printf("ÀÔÀå·á: %d", f);

	return 0;
}