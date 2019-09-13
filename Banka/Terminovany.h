#pragma once
#include "Ucet.h"
class Terminovany: public Ucet
{


public:
	float sadzba;
	int preriodicita;









	Terminovany(typUctu  typ_,  int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, currency mena_, float sadzba_, int periodicita_) :Ucet(typ_, cislo_, meno_, priezvisko_
			, zostatok_, mena_)
	{
		this->preriodicita = periodicita_;
		this->sadzba = sadzba_;

	}


	float getSadzba();
	int getPeriodicita();

};

