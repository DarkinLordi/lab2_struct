#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>

#include "Head_Function.h"
#include "st_run.h"
#include "Athletes.h"

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
		printf("�������� ��������\n1)���� �����������\n2)����� �����������\n3)��������������\n4)����������\n");
		printf("������� 0 ��� �����a\n");
		choose = input_choose();
		if (choose == 1)
		{
			printf("������� ���-�� �����: ");
			scanf("%d", &count);
			men = new Athletes[count];
			for (int i = 0; i < count; i++)
			{
				men[i] = InitAthletesMen();
			}
		}
		if (choose == 2)
		{
			for (int i = 0; i < count; i++)
				OutAthletes(men[i]);
		}
		if (choose == 3)
		{
			printf("������� ����� ���������: ");
			int j;
			scanf("%d", &j);
			men[j - 1] = RedAthletes(men[j - 1]);
		}
		if (choose == 4)
			for (int i = 0; i < count; i++)
				ResAthletes(men[i]);
		system("pause");
	} while (choose != 0);
}