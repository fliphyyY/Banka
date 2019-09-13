#include "AccountsList.h"



AccountsList::AccountsList()
{
	
}

void AccountsList::pridajUcet(Ucet *u)
{
	this->zoznamUctov.push_back(u);
}

void AccountsList::vypisUcty()
{


	for  (Ucet* var : zoznamUctov)
	{ 

	
		cout << var->getTyp() << endl;
		cout << var->getMeno() << endl;
		cout << var->getPriezvisko() << endl;
		cout << var->getZostatok() << endl;
		cout << var->getMena() << endl;
		if (var->getTyp() == 3)
		{
			Terminovany* t = static_cast<Terminovany*>(var);
			cout << t->getSadzba() << endl;
		}
	}


}
