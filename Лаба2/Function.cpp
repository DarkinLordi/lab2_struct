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
			printf("Забег %d: %d м/с\n", i, men.res_run.result[i]);
		else
			printf("Забег: %d м/с\n", men.res_run.result);
	}
	cout << "Дата: " + men.res_jump.data + "|| Дисциплина - прыжки, результаты:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_jump.count != 1)
			printf("Длина %d: %d\n м", i, men.res_jump.result[i]);
		else
			printf("Длина: %d\n м", men.res_jump.result);
	}
	cout << "Дата: " + men.res_swim.data + "|| Дисциплина - плаванье, результаты:" << endl;
	for (int i = 0; i < men.res_swim.count; i++)
	{
		if (men.res_swim.count != 1)
			printf("Результат %d: %d м/с\n", i, men.res_swim.result[i]);
		else
			printf("Результат: %d м/с\n", men.res_swim.result);
	}
	printf("---------------------------------------------------------------------------------------------\n");
}

void outputav(struct Athletes men)
{
	cout << "ФИО участника: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	cout << "Дата: " + men.res_run.data + "|| Дисциплина - бег, результат:" << endl;
	if (men.res_run.count != 1)
		printf("%.2lf м/с\n", men.res_run.average);
	else
		printf("Отсутствует усредненный результат\n");
	cout << "Дата: " + men.res_jump.data + "|| Дисциплина - прыжки, результат:" << endl;
	if (men.res_jump.count != 1)
		printf("%.2lf м/c\n", men.res_jump.average);
	else
		printf("Отсутствует усредненный результат\n");
	cout << "Дата: " + men.res_swim.data + "|| Дисциплина - плаванье, результат:" << endl;
	if (men.res_swim.count != 1)
		printf("%.2lf м\n", men.res_swim.average);
	else
		printf("Отсутствует усредненный результат\n");
	printf("---------------------------------------------------------------------------------------------\n");
}

Athletes redact(struct Athletes men)
{
	system("cls");
	printf("Выберите что редактировать:\n1)ФИО\n2)Забег\n3)Прыжки\n4)Плаванье\n");
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
	cout << "ФИО участника: " + men.fio.firstname + " " + men.fio.middlename + " " + men.fio.lastname << endl;
	double time;
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_run.average;
		printf("Участник пробегает 1км за %.2lf минут", time/60.);
	}
	else
		printf("Невозможно высчетать статистику без средних показателей");
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_swim.average;
		printf("Участник проплывает 1км за %.2lf минут", time / 60.);
	}
	else
		printf("Невозможно высчетать статистику без средних показателей");
	if (men.res_run.count != 1)
	{
		time = 1000. / men.res_jump.average;
		printf("Участник пропрыгает 1км за %.2lf прыжков", time);
	}
	else
		printf("Невозможно высчетать статистику без средних показателей");
}