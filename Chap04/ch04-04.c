//202511828 ���ֿ� 
//2025.4.13
//����� ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt0404();

int main()
{
	//�Լ� asgmt0404()�� ȣ���Ѵ�
	asgmt0404();

	return 0;
}

int asgmt0404()
{
	//���� solute�� solvent�� �����ϰ� �ʱ�ȭ�Ѵ�
	int solute = 0;
	int solvent = 0;

	//����� �󵵸� ������ ������ �����ϰ� �ʱ�ȭ�Ѵ�
	double density = 0.0;

	//����� ������ �Է¹޴´�
	printf("���(g)? ");
	scanf("%d", &solvent);

	//������ ������ �Է¹޴´�
	printf("����(g)? ");
	scanf("%d", &solute);
	
	//�󵵸� ����Ѵ�
	density = (double) solute / (solute +  solvent) * 100;

	//�󵵸� ����Ѵ�
	printf("��: %.2f %%", density);	

	return 0;
}	

