#define _CRT_SECURE_NO_WARNINGS

#include "Athletes.h"

#include <iostream>
#include <string>

Athletes InitAthletes()
{
	Athletes null;
	return null;
}

Athletes InitAthletesMen()
{
	Athletes men;
	men.fio = InitFIO();
	men.res_run = InitRun();
	men.res_swim = InitSwim();
	men.res_jump = InitJump();
	return men;
}