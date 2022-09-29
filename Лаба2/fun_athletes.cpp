#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Athletes InitAthletesMen()
{
	Athletes men;
	men.res_run = RunInitMen();
	return men;
}