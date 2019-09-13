#pragma once
#include "Ucet.h"
class Sporiaci :public Ucet
	
{

public:

	double sadzba;


	

	




	Sporiaci(typUctu typ_ , unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_, double sadzba_) :Ucet(typ_, cislo_, meno_, priezvisko_
		, zostatok_, mena_)
	{

		this->sadzba = sadzba_;
	}
	
	

private:

	string getMeno();
};

