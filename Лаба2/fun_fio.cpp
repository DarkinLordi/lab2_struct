#include "st_fio.h"

#include <iostream>

FIO InitFIO()
{
	FIO fio;
	system("cls");
	printf("������� ��� ���������: ");
	cin >> fio.firstname;
	printf("������� �������� ���������: ");
	cin >> fio.middlename;
	printf("������� ������� ���������: ");
	cin >> fio.lastname;
	return fio;
}