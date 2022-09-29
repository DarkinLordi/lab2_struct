#pragma once

#include <iostream>

using namespace std;

struct Jump
{
	int *result, count;
	double average;
	string data;
};

Jump InitJump();