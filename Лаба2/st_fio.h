#pragma once
#include <string>

using namespace std;

struct FIO
{
	string firstname;
	string middlename;
	string lastname;
};

FIO InitFIO(string a, string b, string c);
FIO InputFIO();
void OutFIO(FIO a);
FIO RedFIO(FIO a);