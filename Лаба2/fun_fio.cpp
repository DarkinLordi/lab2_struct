#include "st_fio.h"

#include <iostream>

FIO InitFIO()
{
	FIO fio;
	system("cls");
	printf("¬ведите им€ участника: ");
	cin >> fio.firstname;
	printf("¬ведите отчество участника: ");
	cin >> fio.middlename;
	printf("¬ведите фамилию участника: ");
	cin >> fio.lastname;
	return fio;
}