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
	printf("������� ��� ���������: ");
	cin >> a;
	printf("������� �������� ���������: ");
	cin >> b;
	printf("������� ������� ���������: ");
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
		printf("�������� ��������:\n1-���\n2-��������\n3-�������\n4-��������� ��������������\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ���: ");
			cin >> a.firstname;
		}
		if (k == 2)
		{
			printf("������� ��������: ");
			cin >> a.middlename;
		}
		if (k == 3)
		{
			printf("������� �������: ");
			cin >> a.lastname;
		}
	} while (k != 4);
	return a;
}