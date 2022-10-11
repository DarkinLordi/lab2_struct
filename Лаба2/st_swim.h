#pragma once

#include <iostream>

using namespace std;

struct Swim
{
	int* result, count, range;
	double average;
	string data;
};

Swim InitSwim(string d, int c, int r[5], int n, double a);
Swim InputSwim();
void OutSwim(Swim a);
Swim RedSwim(Swim a);
void ResSwim(Swim a);