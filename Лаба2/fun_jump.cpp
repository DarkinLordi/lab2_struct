#define _CRT_SECURE_NO_WARNINGS

#include "st_jump.h"

#include <iostream>
#include <string>

Jump InitJump()
{
	system("cls");
	Jump result;
	printf("������� ���� ������� � ������� : ");
	cin >> result.data;
	printf("������� ���-�� �������: ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		result.count = 1;
		printf("������� ��������� ������(�����): ");
		scanf("%d", &result.result); while (getchar() != '\n');
	}
	else
	{
		result.count = l;
		result.result = new int[l];
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ��������� %d-�� ������(�����): ", k + 1);
			scanf("%d", &result.result[k]); while (getchar() != '\n');
			sum = sum + result.result[k];
		}
		result.average = (double)sum / (double)l;
	}
	return result;
}