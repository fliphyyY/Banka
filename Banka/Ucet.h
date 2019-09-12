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




protected:
	
	unsigned short int typ;
	unsigned int cislo;
	string meno;
	string priezvisko;
	unsigned int zostatok;
	string mena;
	
	

public :


	
	Ucet() = default;
	Ucet(unsigned short int typ_, unsigned int cislo_, string meno_,
		string priezvisko_, unsigned int zostatok_, string mena_);



	virtual unsigned short int getTyp();
	virtual unsigned int getCislo();
	virtual string getMeno();
	virtual string getPriezvisko();

	virtual unsigned int getZostatok();

	virtual string getMena();
	

	


};



