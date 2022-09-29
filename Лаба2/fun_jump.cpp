#define _CRT_SECURE_NO_WARNINGS

#include "st_jump.h"

#include <iostream>
#include <string>

Jump InitJump()
{
	system("cls");
	Jump result;
	printf("¬ведите дату участи€ в прыжках : ");
	cin >> result.data;
	printf("¬ведите кол-во прыжков: ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		result.count = 1;
		printf("¬ведите дальность прыжка(метры): ");
		scanf("%d", &result.result); while (getchar() != '\n');
	}
	else
	{
		result.count = l;
		result.result = new int[l];
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("¬ведите дальность %d-го прыжка(метры): ", k + 1);
			scanf("%d", &result.result[k]); while (getchar() != '\n');
			sum = sum + result.result[k];
		}
		result.average = (double)sum / (double)l;
	}
	return result;
}