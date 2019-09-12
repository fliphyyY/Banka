#pragma once
#include <string>


using namespace std;

class Ucet
{



	

	enum  typ 
	{
		bezny = 1,
		sporiaci = 2,
		terminovany = 3,
		hypotekarny= 4,



	};




private:

	unsigned short int typ;
	unsigned int cislo;
	string meno;
	string priezvisko;
	unsigned int zostatok;
	string mena;
	unsigned int pocetOperacii;
	double sadzba;
	double periodicita;
	double dobaDixacie;
	

public :

	Ucet() = default;
	Ucet(unsigned short int typ_, unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_, unsigned int pocetOperacii_,  );

	string getMeno();



	


};



