#pragma once
#include <vector>
#include "Ucet.h"
#include "Terminovany.h"
#include "Osobny.h"
#include "Hypotekarny.h"
#include "Sporiaci.h"
#include <iostream>



using namespace std;
class AccountsList
{

	
   private:


	string meno;
	Ucet u;
	vector <Ucet*> zoznamUctov;

  public:


	
	  AccountsList()= default;
	void pridajUcet(Ucet *u);
	void vypisUcty();
	bool zrusUcet(int cislo);
	bool vlozPeniaze(int cislo, int suma);
	bool vyberPeniaze(int cislo, int suma);
	int vypisZostatok(int cislo);
	float urokySporiaci(int cislo);
	float urokTerminovany(int cislo);


	

};

