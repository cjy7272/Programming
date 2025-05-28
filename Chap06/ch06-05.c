//202511828 ���ֿ�
//2025.5.21
//RGB ���� ����� �����ϴ� �Լ��� �����ϰ� RGB ������ ������ ���ؼ� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int make_rgb(int, int, int);

int get_red(int);

int get_green(int);

int get_blue(int);

void asgmt0609(void);

int main(void)
{
	asgmt0609();

	return 0;
}

void asgmt0609(void)
{
	int r = 0, g = 0, b = 0;
	int rgb = 0;
	int rrgb = 0;

	printf("RGB ����? ");
	scanf("%i", &rgb);

	r = get_red(rgb);
	g = get_green(rgb);
	b = get_blue(rgb);

	r = 255 - r;
	g = 255 - g;
	b = 255 - b;

	rrgb = make_rgb(r, g, b);

	printf("RGB %X�� ���� : %06X\n", rgb, rrgb);
}

int make_rgb(int r, int g, int b)
{
	
	return (r << 16) | (g << 8) | b;
}

int get_red(int rgb)
{
	
	return (rgb >> 16) & 0xFF;
}

int get_green(int rgb)
{
	
	return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb)
{
	
	return rgb & 0xFF;
}