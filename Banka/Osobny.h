#pragma once
#include "Ucet.h"
class Osobny : public Ucet
{
public:
	int operacie;

	Osobny(unsigned short int typ_, unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_, double operacie_) :Ucet(typ_, cislo_, meno_, priezvisko_
			, zostatok_, mena_)
	{

		this->operacie = operacie_;
	}

private:

	int getOperacie();



};

