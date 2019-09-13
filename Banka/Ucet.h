#pragma once
#include <string>
#include <random>
#include <iostream>
#include "magic_enum.hpp"

using namespace magic_enum;
using namespace std;

class Ucet
{


public :

	enum currency
	{
		EUR,
		CZK,
		GBP,
		USD,
		RUB,


	};

	enum  typUctu
	{
		bezny ,
		sporiaci,
		terminovany,
		hypotekarny,



	};

	Ucet() = default;
	Ucet(typUctu typ_,  int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, currency mena_);


	virtual typUctu getTyp();
	virtual  int getCislo();
	virtual string getMeno();
	virtual string getPriezvisko();
	virtual float zadajSadzbu();
	virtual unsigned int getZostatok();

	virtual currency getMena();

	 int cisloUctu();

	currency vyberMeny();
	
	

protected:

	//	unsigned short int typ;
	typUctu typ;
	unsigned int cislo;
	string meno;
	string priezvisko;
	unsigned int zostatok;
	currency mena;


	

	

	


};



