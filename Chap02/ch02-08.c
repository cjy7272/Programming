//202511828 최주영 
//2025.3.29
//파이 값을 여러가지 방법으로 출력하는 프로그램

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