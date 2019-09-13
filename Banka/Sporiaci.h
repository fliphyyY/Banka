#pragma once
#include "Ucet.h"
class Sporiaci :public Ucet
	
{

public:




	

	




	Sporiaci(typUctu typ_ ,  int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, currency mena_, float sadzba_) :Ucet(typ_, cislo_, meno_, priezvisko_
		, zostatok_, mena_)
	{

		this->sadzba = sadzba_;
	}
	
	float getSadzba();

private:
	float sadzba;

};

