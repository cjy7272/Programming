//202511828 ���ֿ� 
//2025.4.16
//0~255������ ���� red, green, blue�� ������ 3���� �Է� �ް� RGB ���� ���� 16������ ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0416();

int bitwise(unsigned char r, unsigned char g, unsigned char b);

int main()
{
	//�Լ� asgmt0416�� ȣ���Ѵ�
	asgmt0416();

	return 0;
}

void asgmt0416()
{
	//���� r, g, b �� �����ϰ� �ʱ�ȭ�Ѵ�
	unsigned char r = 0, g = 0, b = 0;

	//red�� �Է¹޴´�
	printf("red? ");
	scanf("%hhu", &r);

	//green�� �Է¹޴´�
	printf("green? ");
	scanf("%hhu", &g);

	//blue�� �Է¹޴´�
	printf("blue? ");
	scanf("%hhu", &b);

	unsigned int result = bitwise(r, g, b);

	//RGB Ʈ���÷��� ����Ѵ�
	printf("RGB Ʈ���÷�: %06X", result);

	return;
}

int bitwise(unsigned char r, unsigned char g, unsigned char b)
{
	//���� sum�� �����ϰ� �ʱ�ȭ�Ѵ� 
	unsigned int RGB = 0;

	RGB = r | g << 8 | b << 16;
	
	return RGB;
}