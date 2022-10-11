#define _CRT_SECURE_NO_WARNINGS

#include "st_swim.h"

#include <iostream>;

Swim InitSwim(string d, int c, int r[5], int n, double a)
{
	Swim result;
	result.data = d;
	result.count = c;
	result.result = new int[c];
	for (int i = 0; i < c; i++)
		result.result[i] = r[i];
	result.range = n;
	result.average = a;
	return result;
}

Swim InputSwim()
{
	string data;
	int r[5], n;
	double a;
	system("cls");
	printf("Введите дату участия в плаванье: ");
	cin >> data;
	printf("Введите длину дорожки(метры): ");
	scanf("%d", &n);
	printf("Введите кол-во заплывов(не более 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("Введите макс. скорость плаванья(м/с): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("Введите макс. скорость %d-го плаванья(м/с): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		a = (double)sum / (double)l;
	}
	Swim result = InitSwim(data, l, r, n, a);
	return result;
}

void OutSwim(Swim a)
{
	printf("Плаванье:\n");
	cout << a.data << endl;
	printf("Длина дорожки: %d\n", a.range);
	printf("Кол-во заплывов: %d\n", a.count);
	for (int i = 0; i < a.count; i++)
		printf("Результат %d - %d\n", i + 1, a.result[i]);
	printf("Средний результат: %.2lf\n", a.average);
}

Swim RedSwim(Swim a)
{
	int k;
	do
	{
		system("cls");
		OutSwim(a);
		printf("Выберите действие:\n1-Дата\n2-Дальность дорожки\n3-Забеги\n4-Закончить редактирование\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите дату: ");
			cin >> a.data;
		}
		if (k == 2)
		{
			printf("Введите дальность дорожки(метры): ");
			scanf("%d", a.range);
		}
		if (k == 3)
		{
			delete a.result;
			printf("Введите кол-во заплывов(не более 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				a.count = l;
				a.result = new int[l];
				printf("Введите макс. скорость заплыва(м/с): ");
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
					printf("Введите макс. скорость %d-го заплыва(м/с): ", k + 1);
					scanf("%d", &a.result[k]); while (getchar() != '\n');
					sum = sum + a.result[k];
				}
				j = (double)sum / (double)l;
				a.average = j;
			}
		}
	} while (k != 4);
	return a;
}

void ResSwim(Swim a)
{
	system("cls");
	printf("Использовать введенную дальность дорожки или ввести другую?\n1-Использовать текущую\n2-Ввести новую\n");
	int k;
	scanf("%d", &k);
	if (k == 1)
		printf("Спортсмен способен проплыть дорожку дальностью %d за %.2lf секунд\n", a.range, (double)a.range / a.average);
	if (k == 2)
	{
		printf("Введите дальность: ");
		int r;
		scanf("%d", &r);
		printf("Спортсмен способен проплыть дорожку дальностью %d за %.2lf секунд\n", r, (double)r / a.average);
	}
}
