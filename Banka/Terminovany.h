#pragma once
#include "Ucet.h"
class Terminovany: public Ucet
{


public:
	double sadzba;
	int preriodicita;









	Terminovany(unsigned short int typ_, unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_, double sadzba_, int periodicita_) :Ucet(typ_, cislo_, meno_, priezvisko_
			, zostatok_, mena_)
	{
		this->preriodicita = periodicita_;
		this->sadzba = sadzba_;
	}


	double getSadzba();

};

