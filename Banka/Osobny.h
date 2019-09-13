#pragma once
#include "Ucet.h"
class Osobny : public Ucet
{
public:
	

	Osobny(typUctu typ_,  int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, currency mena_, unsigned int operacie_) :Ucet(typ_, cislo_, meno_, priezvisko_
			, zostatok_, mena_)
	{

		this->operacie = operacie_;
	}

	unsigned int getOperacie();

private:
	unsigned int operacie;


};

