#include <stdio.h>

//�Լ� f1 ����
void f1(void);  

//�Լ� f3 ����
int f3(int a, int b);

int main()
{	
	int x = 3;

	//�Լ� f1 ȣ��
	f1();   

	//�Լ� f3 ȣ��, ��ȯ���� r�� ����
	int result = f3(2, 3);

	return 1;

}

//�Լ� f1 ����
void f1(void)
{
	//Hello World ���
	printf("Hello World\n");

	return;
}

/*
	�Լ���: int f3(int a, int b)
	���: �Էµ� �� �� a, b�� ���ؼ� ��ȯ
	�Է�: a, b�� ����
    ��ȯ: ����
*/
int f3(int a, int b)
{
	int result = 0;

	//�� ���� ���ؼ� ��ȯ
	result = a + b;

	return result;
}