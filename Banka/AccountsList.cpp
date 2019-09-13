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
		cout << var->cisloUctu() << endl;
		cout << var->getMeno() << endl;
		cout << var->getPriezvisko() << endl;
		cout << var->getZostatok() << endl;
		cout << var->getMena() << endl;
		if (var->getTyp() == u.bezny)
		{
			Osobny *t = static_cast<Osobny*>(var);
			cout << t->getOperacie()<< endl;
		}

		else if (var->getTyp() == u.sporiaci)
		{
			Sporiaci* t = static_cast<Sporiaci*>(var);
			cout << t->getSadzba() << endl;
		}

		else if (var->getTyp() == u.terminovany)
		{
			Terminovany* t = static_cast<Terminovany*>(var);
			cout << t->getSadzba() << endl;
			cout << t->getPeriodicita();
			
		}

		else if (var->getTyp() == u.hypotekarny)
		{
			Hypotekarny* t = static_cast<Hypotekarny*>(var);
			cout << t->getSadzba() << endl;
			cout << t->getFixacia() << endl;
		}
	}


}
