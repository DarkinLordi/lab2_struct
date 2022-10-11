#define _CRT_SECURE_NO_WARNINGS
#include "st_fio.h"

#include <iostream>
#include <string>

using namespace std;

FIO InitFIO(string a, string b, string c) //input
{
	FIO fio;
	fio.firstname = a;
	fio.middlename = b;
	fio.lastname = c;
	return fio;
}

FIO InputFIO()
{
	string a, b, c;
	system("cls");
	printf("Введите имя участника: ");
	cin >> a;
	printf("Введите отчество участника: ");
	cin >> b;
	printf("Введите фамилию участника: ");
	cin >> c;
	FIO fio = InitFIO(a, b, c);
	return fio;
}

void OutFIO(FIO a)
{
	cout << a.firstname + " " + a.middlename + " " + a.lastname << endl;
}

FIO RedFIO(FIO a)
{
	int k;
	do
	{
		system("cls");
		OutFIO(a);
		printf("Выберите действие:\n1-Имя\n2-Отчество\n3-Фамилия\n4-Закончить редактирование\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("Введите имя: ");
			cin >> a.firstname;
		}
		if (k == 2)
		{
			printf("Введите отчество: ");
			cin >> a.middlename;
		}
		if (k == 3)
		{
			printf("Введите фамилию: ");
			cin >> a.lastname;
		}
	} while (k != 4);
	return a;
}