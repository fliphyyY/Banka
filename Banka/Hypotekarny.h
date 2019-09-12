#pragma once
#include "Ucet.h"
class Hypotekarny: public Ucet
{


public:
	double sadzba;
	int fixacia;









	Hypotekarny(unsigned short int typ_, unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_, double sadzba_, int fixacia_) :Ucet(typ_, cislo_, meno_, priezvisko_
			, zostatok_, mena_)
	{
		this->fixacia = fixacia_;
		this->sadzba = sadzba_;
	}


};

