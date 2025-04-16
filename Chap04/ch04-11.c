//202511828 최주영 
//2025.4.16
//0~255사이의 값을 red, green, blue의 순서로 3개를 입력 받고 RGB 색상 만들어서 16진수로 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0416();

int bitwise(unsigned char r, unsigned char g, unsigned char b);

int main()
{
	//함수 asgmt0416를 호출한다
	asgmt0416();

	return 0;
}

void asgmt0416()
{
	//변수 r, g, b 를 선언하고 초기화한다
	unsigned char r = 0, g = 0, b = 0;

	//red를 입력받는다
	printf("red? ");
	scanf("%hhu", &r);

	//green을 입력받는다
	printf("green? ");
	scanf("%hhu", &g);

	//blue를 입력받는다
	printf("blue? ");
	scanf("%hhu", &b);

	unsigned int result = bitwise(r, g, b);

	//RGB 트루컬러를 출력한다
	printf("RGB 트루컬러: %06X", result);

	return;
}

int bitwise(unsigned char r, unsigned char g, unsigned char b)
{
	//변수 sum을 선언하고 초기화한다 
	unsigned int RGB = 0;

	RGB = r | g << 8 | b << 16;
	
	return RGB;
}