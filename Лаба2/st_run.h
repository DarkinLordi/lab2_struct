#pragma once
#include <string>
using namespace std;
struct Run
{
	int *result, count;
	double average;
	string data;
};

Run RunInitTest();
Run RunInitMen();