#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>

#include "Head_Function.h"
#include "st_run.h"
#include "Athletes.h"

int main()
{
	int choose, count;
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do
	{
		system("cls");
		printf("Выберите действие\n1)Ввод теста\n2)Ввод спортсменов\n4)Изменение записей\n5)Вывод результатов\n");
		printf("Введите 0 для выходa\n");
		choose = input_choose();
		if (choose == 1)
		{

		}
		if (choose == 2)
		{
			printf("Введите кол-во людей: ");
			scanf("%d", &count);
			Athletes* men = new Athletes[count];
			for (int i = 0; i < count; i++)
			{
				men[i] = InitAthletesMen();
			}
		}
		if (choose == 3)
		{

		}
		if (choose == 4)
		{

		}
		system("pause");
	} while (choose != 0);
}