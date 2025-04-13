//202511828 최주영 
//2025.4.13
//용매의 질량과 용질의 질량을 입력받아 용액의 퍼센트 농도를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0404();

int main()
{
	//함수 asgmt0404()를 호출한다
	asgmt0404();

	return 0;
}

int asgmt0404()
{
	//변수 solute와 solvent를 선언하고 초기화한다
	int solute = 0;
	int solvent = 0;

	//용액의 농도를 저장할 변수를 선언하고 초기화한다
	double density = 0.0;

	//용매의 질량을 입력받는다
	printf("용매(g)? ");
	scanf("%d", &solvent);

	//용질의 질량을 입력받는다
	printf("용질(g)? ");
	scanf("%d", &solute);
	
	//농도를 계산한다
	density = (double) solute / (solute +  solvent) * 100;

	//농도를 출력한다
	printf("농도: %.2f %%", density);	

	return 0;
}	

