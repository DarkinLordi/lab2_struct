#pragma once

#include <iostream>

using namespace std;

struct Jump
{
	int *result, count;
	double average, height;
	string data;
};

Jump InitJump(string d, int c, int r[5], double a, double h);
Jump InputJump();
void OutJump(Jump a);
Jump RedJump(Jump a);
void ResJump(Jump a);