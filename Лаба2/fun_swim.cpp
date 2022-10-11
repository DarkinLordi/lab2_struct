#define _CRT_SECURE_NO_WARNINGS

#include "st_swim.h"

#include <iostream>;

Swim InitSwim(string d, int c, int r[5], int n, double a)
{
	Swim result;
	result.data = d;
	result.count = c;
	result.result = new int[c];
	for (int i = 0; i < c; i++)
		result.result[i] = r[i];
	result.range = n;
	result.average = a;
	return result;
}

Swim InputSwim()
{
	string data;
	int r[5], n;
	double a;
	system("cls");
	printf("������� ���� ������� � ��������: ");
	cin >> data;
	printf("������� ����� �������(�����): ");
	scanf("%d", &n);
	printf("������� ���-�� ��������(�� ����� 5): ");
	int l;
	scanf("%d", &l); while (getchar() != '\n');
	if (l == 1)
	{
		printf("������� ����. �������� ��������(�/�): ");
		scanf("%d", &r[0]); while (getchar() != '\n');
		a = (double)r[0];
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < l; k++)
		{
			printf("������� ����. �������� %d-�� ��������(�/�): ", k + 1);
			scanf("%d", &r[k]); while (getchar() != '\n');
			sum = sum + r[k];
		}
		a = (double)sum / (double)l;
	}
	Swim result = InitSwim(data, l, r, n, a);
	return result;
}

void OutSwim(Swim a)
{
	printf("��������:\n");
	cout << a.data << endl;
	printf("����� �������: %d\n", a.range);
	printf("���-�� ��������: %d\n", a.count);
	for (int i = 0; i < a.count; i++)
		printf("��������� %d - %d\n", i + 1, a.result[i]);
	printf("������� ���������: %.2lf\n", a.average);
}

Swim RedSwim(Swim a)
{
	int k;
	do
	{
		system("cls");
		OutSwim(a);
		printf("�������� ��������:\n1-����\n2-��������� �������\n3-������\n4-��������� ��������������\n");
		int l; double j;
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������� ����: ");
			cin >> a.data;
		}
		if (k == 2)
		{
			printf("������� ��������� �������(�����): ");
			scanf("%d", a.range);
		}
		if (k == 3)
		{
			delete a.result;
			printf("������� ���-�� ��������(�� ����� 5): ");
			scanf("%d", &l); while (getchar() != '\n');
			if (l == 1)
			{
				a.count = l;
				a.result = new int[l];
				printf("������� ����. �������� �������(�/�): ");
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
					printf("������� ����. �������� %d-�� �������(�/�): ", k + 1);
					scanf("%d", &a.result[k]); while (getchar() != '\n');
					sum = sum + a.result[k];
				}
				j = (double)sum / (double)l;
				a.average = j;
			}
		}
	} while (k != 4);
	return a;
}

void ResSwim(Swim a)
{
	system("cls");
	printf("������������ ��������� ��������� ������� ��� ������ ������?\n1-������������ �������\n2-������ �����\n");
	int k;
	scanf("%d", &k);
	if (k == 1)
		printf("��������� �������� �������� ������� ���������� %d �� %.2lf ������\n", a.range, (double)a.range / a.average);
	if (k == 2)
	{
		printf("������� ���������: ");
		int r;
		scanf("%d", &r);
		printf("��������� �������� �������� ������� ���������� %d �� %.2lf ������\n", r, (double)r / a.average);
	}
}
