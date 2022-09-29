#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>

#include "Head_Function.h"
#include "st_run.h"
#include "Athletes.h"

Athletes InitAthletes();

Athletes* men;

int main()
{
	int choose, count = -1;
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do
	{
		system("cls");
		printf("Выберите действие\n1)Ввод спортсменов\n2)Изменение записей\n3)\n4)Вывод результатов\n");
		printf("Введите 0 для выходa\n");
		choose = input_choose();
		if (choose == 1)
		{
			printf("Введите кол-во людей: ");
			scanf("%d", &count);
			men = new Athletes[count];
			for (int i = 0; i < count; i++)
			{
				men[i] = InitAthletesMen();
			}
		}
		if (choose == 2)
		{

		}
		if (choose == 3)
		{

		}
		if (choose == 4)
		{
			if (count >= 1)
			{
				printf("Выберите формат вывода:\n1)Вывести результаты полностью\n2)Вывести одного участника\n3)Вывести усредненные результаты\n");
				switch (input_choose())
				{
				case 1:
				{
					for (int i = 0; i < count; i++)
						output(men[i]);
				}
				case 2:
				{
					printf("Введите номер участника(всего их %d): ", count);
					int a = input_choose();
					if (a >= 1 && a <= count)
						output(men[a]);
					else
						printf("Вы ввели несуществующего участника\n");
				}
				default:
					break;
				}
			}
			else
				printf("Вы не ввели участников!\n");
		}
		system("pause");
	} while (choose != 0);
}