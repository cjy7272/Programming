//202511828 ���ֿ� 
//2025.3.29
//���� ���� �������� ������� ����ϴ� ���α׷�

#include <stdio.h>

void pi(void);

int main()
{
	pi();

	return 0;
}

void pi(void)
{
	double num = 3.14159265;

	printf("pi = %.2f\n", num);
	printf("pi = %.4f\n", num);
	printf("pi = %.6f\n", num);
	printf("pi = %.8f\n", num);
	printf("pi = %e\n", num);

	return;
}