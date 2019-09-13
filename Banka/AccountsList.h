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


	AccountsList();
	void pridajUcet(Ucet *u);
	void vypisUcty();


	

};

