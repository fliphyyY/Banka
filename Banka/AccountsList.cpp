#include "AccountsList.h"



AccountsList::AccountsList()
{
	
}

void AccountsList::pridajUcet(Ucet u)
{
	this->zoznamUctov.push_back(u);
}

void AccountsList::vypisUcty()
{


	for  (Ucet var : zoznamUctov)
	{
		cout << var.getMeno() << endl;
	}
}
