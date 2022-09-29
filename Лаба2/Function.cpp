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
			printf("����� %d: %d\n", i, men.res_run.result[i]);
		else
			printf("�����: %d\n", men.res_run.result);
	}
	cout << "����: " + men.res_jump.data + "|| ���������� - ������, ����������:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_jump.count != 1)
			printf("����� %d: %d\n", i, men.res_jump.result[i]);
		else
			printf("�����: %d\n", men.res_jump.result);
	}
	cout << "����: " + men.res_swim.data + "|| ���������� - ��������, ����������:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_swim.count != 1)
			printf("����� %d: %d\n", i, men.res_swim.result[i]);
		else
			printf("�����: %d\n", men.res_swim.result);
	}
	printf("---------------------------------------------------------------------------------------------\n");
}

void outputav(struct Athletes men)
{
	cout << "��� ���������: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "����: " + men.res_run.data + "|| ���������� - ���, ���������:" << endl;
	if (men.res_run.count != 1)
		printf("%.2lf\n", men.res_run.average);
	else
		printf("����������� ����������� ���������\n");
	cout << "����: " + men.res_jump.data + "|| ���������� - ������, ���������:" << endl;
	if (men.res_jump.count != 1)
		printf("%.2lf\n", men.res_jump.average);
	else
		printf("����������� ����������� ���������\n");
	cout << "����: " + men.res_swim.data + "|| ���������� - ��������, ���������:" << endl;
	if (men.res_swim.count != 1)
		printf("%.2lf\n", men.res_swim.average);
	else
		printf("����������� ����������� ���������\n");
	printf("---------------------------------------------------------------------------------------------\n");
}