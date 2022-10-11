#pragma once
#include <string>
using namespace std;
struct Run
{
	int *result, count;
	double average;
	string data;
};

Run InitRun(string d, int c, int r[5], double a);
Run InputRun();
void OutRun(Run a);
Run RedRun(Run a);
void ResRun(Run a);