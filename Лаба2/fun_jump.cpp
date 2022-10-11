#define _CRT_SECURE_NO_WARNINGS

#include "st_jump.h"

#include <iostream>
#include <string>

Jump InitJump(string d, int c, int r[5], double a, double h)
{
	Jump result;
	result.height = h;
	result.data = d;
	result.count = c;
	result.result = new int[c];
	for (int i = 0; i < c; i++)
		result.result[i] = r[i];
	result.average = a;
	return result;
}

Jump InputJump()
{
	string data;
	double j;
	system("cls");
	printf("Введите дату участия в прыжках : ");
	cin >> data;
	printf("Введите кол-во прыжков(не более 5): ");
	int l, r[5];
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("Введите дальность прыжка(метры): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		j = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("Введите дальность %d-го прыжка(метры): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		j = (double)sum / (double)l;
	}
	printf("Введите самый высокий прыжок: ");
	double h;
	scanf("%lf", &h);
	Jump result = InitJump(data, l, r, j, h);
	return result;
}

void OutJump(Jump a)
{
	printf("Прыжки:\n");
	cout << a.data << endl;
	printf("Кол-во прыжков: %d\n", a.count);
	for (int i = 0; i < a.count; i++)
		printf("Результат %d - %d\n", i + 1, a.result[i]);
	printf("Средний результат: %.2lf\n", a.average);
	printf("Самый высокий прыжок: %.2lf\n", a.height);
}

Jump RedJump(Jump a)
{
	int k;
	do
	{
		system("cls");
		OutJump(a);
		printf("Выберите действие:\n1-Дата\n2-Прыжки\n3-Закончить редактирование\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите дату: ");
			cin >> a.data;
		}
		if (k == 2)
		{
			delete a.result;
			printf("Введите кол-во прыжков(не более 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				a.count = l;
				a.result = new int[l];
				printf("Введите дальность прыжка(метры): ");
				scanf("%d", &a.result[0]); while (getchar() != '\n');
				j = (double)a.result[0];
				a.average = j;
			}
			else
			{
				a.count = l;
				a.result = new int[l];
				int sum = 0;
				for (int k = 0; k < l; k++)
				{
					printf("Введите дальность %d-го прыжка(метры): ", k + 1);
					scanf("%d", &a.result[k]); while (getchar() != '\n');
					sum = sum + a.result[k];
				}
				j = (double)sum / (double)l;
				a.average = j;
			}
			printf("Введите самый высокий прыжок: ");
			scanf("%lf", &a.height);
		}
	} while (k != 3);
	return a;
}

void ResJump(Jump a)
{
	system("cls");
	printf("Чтобы обпрыгать Землю, спортсмену потребуется сделать %.0lf прыжков\n", (double)40075000 / a.average);
	printf("Чтобы добраться до Луны, спортсмену потребуется сделать %.0lf прыжков в высоту\n", (double)384400000 / a.height);
	system("pause");
}
