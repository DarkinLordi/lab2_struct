#pragma once
#include "st_run.h"
#include "st_jump.h"
#include "st_swim.h"
#include "st_fio.h"

#include <iostream>

using namespace std;

struct Athletes
{
	struct Run res_run;
	struct Jump res_jump;
	struct Swim res_swim;
	struct FIO fio;
};

Athletes InitAthletesMen();
Athletes InitAthletes();
void OutAthletes(Athletes a);
Athletes RedAthletes(Athletes a);
void ResAthletes(Athletes a);