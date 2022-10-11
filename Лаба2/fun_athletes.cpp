#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Athletes InitAthletes()
{
	Athletes null;
	return null;
}

Athletes InitAthletesMen()
{
	Athletes men;
	printf("Тесе");
	men.fio = InputFIO();
	men.res_run = InputRun();
	men.res_swim = InputSwim();
	men.res_jump = InputJump();
	return men;
}

void OutAthletes(Athletes a)
{
	OutFIO(a.fio);
	OutRun(a.res_run);
	OutJump(a.res_jump);
	OutSwim(a.res_swim);
}
Athletes RedAthletes(Athletes a)
{
	int k = 0;
	do
	{
		system("cls");
		printf("Выберите, что редактировать:\n1-ФИО\n2-Бег\n3-Плаванье\n4-Прыжки\n5-Закончить редактировать\n");
		scanf("%d", &k);
		if (k == 1)
			a.fio = RedFIO(a.fio);
		if (k == 2)
			a.res_run = RedRun(a.res_run);
		if (k == 3)
			a.res_swim = RedSwim(a.res_swim);
		if (k == 4)
			a.res_jump = RedJump(a.res_jump);
	} while (k != 5);
	return a;
}

void ResAthletes(Athletes a)
{
	ResRun(a.res_run);
	ResSwim(a.res_swim);
	ResJump(a.res_jump);
}