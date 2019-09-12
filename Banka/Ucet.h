#pragma once
#include <string>


using namespace std;
class Ucet
{

	enum typ
	{
		bezny = 1,
		sporiaci = 2,
		terminovany = 3,
		hypotekarny= 4,



	};

private:
	unsigned int cislo;
	string meno;
	string priezvisko;
	unsigned zostatok;
	string mena;
	unsigned int pocetOperacii;
	double sadzba;
	double periodicita;
	double dobaDixacie;




};

