#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Run InitRun()
{
	system("cls");
	Run result;
	printf("������� ���� ������� � ������: ");
	cin >> result.data;
	printf("������� ���-�� �������: ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		result.count = 1;
		printf("������� ����. �������� ������: ");
		scanf("%d", &result.result); while (getchar() != '\n');
	}
	else
	{
		int sum = 0;
		result.count = l;
		result.result = new int[l];
		for (int k = 0; k < l; k++)
		{
			printf("������� ����. �������� %d-�� ������(�������): ", k + 1);
			scanf("%d", &result.result[k]); while (getchar() != '\n');
			sum = sum + result.result[k];
		}
		result.average = (double)sum / (double)l;
	}
	return result;
}