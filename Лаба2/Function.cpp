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
	cout << "ФИО участника: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "Дата: " + men.res_run.data + "|| Дисциплина - бег, результаты:" << endl;
	for (int i = 0; i < men.res_run.count; i++)
	{
		if (men.res_run.count != 1)
			printf("Забег %d: %d\n", i, men.res_run.result[i]);
		else
			printf("Забег: %d\n", men.res_run.result);
	}
	cout << "Дата: " + men.res_jump.data + "|| Дисциплина - прыжки, результаты:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_jump.count != 1)
			printf("Забег %d: %d\n", i, men.res_jump.result[i]);
		else
			printf("Забег: %d\n", men.res_jump.result);
	}
	cout << "Дата: " + men.res_swim.data + "|| Дисциплина - плаванье, результаты:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_swim.count != 1)
			printf("Забег %d: %d\n", i, men.res_swim.result[i]);
		else
			printf("Забег: %d\n", men.res_swim.result);
	}
	printf("---------------------------------------------------------------------------------------------\n");
}

void outputav(struct Athletes men)
{
	cout << "ФИО участника: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "Дата: " + men.res_run.data + "|| Дисциплина - бег, результат:" << endl;
	if (men.res_run.count != 1)
		printf("%.2lf\n", men.res_run.average);
	else
		printf("Отсутствует усредненный результат\n");
	cout << "Дата: " + men.res_jump.data + "|| Дисциплина - прыжки, результат:" << endl;
	if (men.res_jump.count != 1)
		printf("%.2lf\n", men.res_jump.average);
	else
		printf("Отсутствует усредненный результат\n");
	cout << "Дата: " + men.res_swim.data + "|| Дисциплина - плаванье, результат:" << endl;
	if (men.res_swim.count != 1)
		printf("%.2lf\n", men.res_swim.average);
	else
		printf("Отсутствует усредненный результат\n");
	printf("---------------------------------------------------------------------------------------------\n");
}