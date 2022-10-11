#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Run InitRun(string d, int c, int r[5], double a)
{
	Run result;
	result.data = d;
	result.count = c;
	result.result = new int[c];
	for (int i = 0; i < c; i++)
		result.result[i] = r[i];
	result.average = a;
	return result;
}

Run InputRun()
{
	string data;
	int r[5];
	double a;
	system("cls");
	printf("������� ���� ������� � ������: ");
	cin >> data;
	printf("������� ���-�� �������(�� ����� 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ����. �������� ������: ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ����. �������� %d-�� ������(�������): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		a = (double)sum / (double)l;
	}
	Run result = InitRun(data, l, r, a);
	return result;
}

void OutRun(Run a)
{
	printf("���:\n");
	cout << a.data << endl;
	printf("���-�� �������: %d\n", a.count);
	for (int i = 0; i < a.count; i++)
		printf("��������� %d - %d\n", i + 1, a.result[i]);
	printf("������� ���������: %.2lf\n", a.average);
}

Run RedRun(Run a)
{
	int k;
	do
	{
		system("cls");
		OutRun(a);
		printf("�������� ��������:\n1-����\n2-������\n3-��������� ��������������\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ����: ");
			cin >> a.data;
		}
		if (k == 2)
		{
			delete a.result;
			printf("������� ���-�� �������(�� ����� 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				a.count = l;
				a.result = new int[l];
				printf("������� ����. �������� ������: ");
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
					printf("������� ����. �������� %d-�� ������(�������): ", k + 1);
					scanf("%d", &a.result[k]); while (getchar() != '\n');
					sum = sum + a.result[k];
				}
				j = (double)sum / (double)l;
				a.average = j;
			}
		}
	} while (k != 3);
	return a;
}

void ResRun(Run a)
{
	system("cls");
	printf("������� ����������(�): ");
	int k;
	scanf("%d", &k);
	printf("��������� �������� ��������� %d� �� %.2lf ������\n", k, (double)k / a.average);
	system("pause");
}

