#pragma once
#include <vector>
#include "Ucet.h"


using namespace std;
class AccountsList
{

private:


	string meno;
	Ucet u;
	vector <Ucet> zoznamUctov;

public:


	AccountsList();
	void pridajUcet(Ucet u);


	

};

