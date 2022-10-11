#define _CRT_SECURE_NO_WARNINGS

#include "st_jump.h"

#include <iostream>
#include <string>

Jump InitJump(string d, int c, int r[5], double a, double h)
{
	Jump result;
	result.height = h;
	result.data = d;
	result.count = c;
	result.result = new int[c];
	for (int i = 0; i < c; i++)
		result.result[i] = r[i];
	result.average = a;
	return result;
}

Jump InputJump()
{
	string data;
	double j;
	system("cls");
	printf("������� ���� ������� � ������� : ");
	cin >> data;
	printf("������� ���-�� �������(�� ����� 5): ");
	int l, r[5];
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ��������� ������(�����): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		j = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ��������� %d-�� ������(�����): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		j = (double)sum / (double)l;
	}
	printf("������� ����� ������� ������: ");
	double h;
	scanf("%lf", &h);
	Jump result = InitJump(data, l, r, j, h);
	return result;
}

void OutJump(Jump a)
{
	printf("������:\n");
	cout << a.data << endl;
	printf("���-�� �������: %d\n", a.count);
	for (int i = 0; i < a.count; i++)
		printf("��������� %d - %d\n", i + 1, a.result[i]);
	printf("������� ���������: %.2lf\n", a.average);
	printf("����� ������� ������: %.2lf\n", a.height);
}

Jump RedJump(Jump a)
{
	int k;
	do
	{
		system("cls");
		OutJump(a);
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
				printf("������� ��������� ������(�����): ");
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
					printf("������� ��������� %d-�� ������(�����): ", k + 1);
					scanf("%d", &a.result[k]); while (getchar() != '\n');
					sum = sum + a.result[k];
				}
				j = (double)sum / (double)l;
				a.average = j;
			}
			printf("������� ����� ������� ������: ");
			scanf("%lf", &a.height);
		}
	} while (k != 3);
	return a;
}

void ResJump(Jump a)
{
	system("cls");
	printf("����� ��������� �����, ���������� ����������� ������� %.0lf �������\n", (double)40075000 / a.average);
	printf("����� ��������� �� ����, ���������� ����������� ������� %.0lf ������� � ������\n", (double)384400000 / a.height);
	system("pause");
}
