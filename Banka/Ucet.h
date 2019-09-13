#pragma once
#include <string>
#include <random>
#include <iostream>


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
	virtual unsigned int getCislo();
	virtual string getMeno();
	virtual string getPriezvisko();

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



