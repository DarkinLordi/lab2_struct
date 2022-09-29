#include "Head_Function.h"
#include "st_run.h"

#include "Athletes.h"

#include <iostream>
#include <conio.h>

int input_choose()
{
		char a = _getch();
		int b = a - '0';
		return b;
}

void output(struct Athletes men)
{
	cout << "��� ���������: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "����: " + men.res_run.data + "|| ���������� - ���, ����������:" << endl;
	for (int i = 0; i < men.res_run.count; i++)
	{
		if (men.res_run.count != 1)
			printf("����� %d: %d �/�\n", i, men.res_run.result[i]);
		else
			printf("�����: %d �/�\n", men.res_run.result);
	}
	cout << "����: " + men.res_jump.data + "|| ���������� - ������, ����������:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_jump.count != 1)
			printf("����� %d: %d\n �", i, men.res_jump.result[i]);
		else
			printf("�����: %d\n �", men.res_jump.result);
	}
	cout << "����: " + men.res_swim.data + "|| ���������� - ��������, ����������:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_swim.count != 1)
			printf("��������� %d: %d �/�\n", i, men.res_swim.result[i]);
		else
			printf("���������: %d �/�\n", men.res_swim.result);
	}
	printf("---------------------------------------------------------------------------------------------\n");
}

void outputav(struct Athletes men)
{
	cout << "��� ���������: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "����: " + men.res_run.data + "|| ���������� - ���, ���������:" << endl;
	if (men.res_run.count != 1)
		printf("%.2lf �/�\n", men.res_run.average);
	else
		printf("����������� ����������� ���������\n");
	cout << "����: " + men.res_jump.data + "|| ���������� - ������, ���������:" << endl;
	if (men.res_jump.count != 1)
		printf("%.2lf �/c\n", men.res_jump.average);
	else
		printf("����������� ����������� ���������\n");
	cout << "����: " + men.res_swim.data + "|| ���������� - ��������, ���������:" << endl;
	if (men.res_swim.count != 1)
		printf("%.2lf �\n", men.res_swim.average);
	else
		printf("����������� ����������� ���������\n");
	printf("---------------------------------------------------------------------------------------------\n");
}

Athletes redact(struct Athletes men)
{
	system("cls");
	printf("�������� ��� �������������:\n1)���\n2)�����\n3)������\n4)��������\n");
	switch (input_choose())
	{
	case 1:
	{
		men.fio = InitFIO();
		break;
	}
	case 2:
	{
		men.res_run = InitRun();
		break;
	}
	case 3:
	{
		men.res_jump = InitJump();
		break;
	}
	case 4:
	{
		men.res_swim = InitSwim();
		break;
	}
	default:
		break;
	}
	return men;
}

void statistics(struct Athletes men)
{
	int a;
	system("cls");
	cout << "��� ���������: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	double time;
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_run.average;
		printf("�������� ��������� 1�� �� %.2lf �����", time/60.);
	}
	else
		printf("���������� ��������� ���������� ��� ������� �����������");
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_swim.average;
		printf("�������� ���������� 1�� �� %.2lf �����", time / 60.);
	}
	else
		printf("���������� ��������� ���������� ��� ������� �����������");
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_jump.average;
		printf("�������� ���������� 1�� �� %.2lf �������", time);
	}
	else
		printf("���������� ��������� ���������� ��� ������� �����������");
}