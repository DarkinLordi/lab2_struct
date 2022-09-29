#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Run RunInitTest()
{
	system("cls");
	Run test;
	test.data = "ƒата в тесте отсутствует";
	printf("¬ведите кол-во забегов\n");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		test.count = 1;
		printf("¬ведите врем€ забега(секунды)\n");
		scanf("%d", &test.result); while (getchar() != '\n');
	}
	else
	{
		test.count = l;
		test.result = new int[l];
		for (int k = 0; k < l; k++)
		{
			printf("¬ведите врем€ %d-го забега(секунды): ", k + 1);
			scanf("%d", &test.result[k]); while (getchar() != '\n');
		}
	}
	return test;
}

Run RunInitMen()
{
	system("cls");
	Run result;
	printf("¬ведите дату участи€: ");
	cin >> result.data;
	printf("¬ведите кол-во забегов\n");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		result.count = 1;
		printf("¬ведите врем€ забега(секунды)\n");
		scanf("%d", &result.result); while (getchar() != '\n');
	}
	else
	{
		result.count = l;
		result.result = new int[l];
		for (int k = 0; k < l; k++)
		{
			printf("¬ведите врем€ %d-го забега(секунды): ", k + 1);
			scanf("%d", &result.result[k]); while (getchar() != '\n');
		}
	}
	return result;
}