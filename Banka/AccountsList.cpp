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
	
		auto typUctu = enum_name(var->getTyp());
		cout << typUctu << endl;
		cout <<"Cislo uctu je: "<<var->cisloUctu() << endl;
		cout <<"Meno majitela: "<< var->getMeno() << endl;
		cout <<"Priezvisko majitela: " << var->getPriezvisko() << endl;
		auto nazovMeny = enum_name(var->getMena());
		cout <<"Zostatok na ucte: "<< var->getZostatok()<< " " << nazovMeny << endl;
		cout <<"Ucet je vedeny v mene: "<< var->getMena() << endl;
		if (var->getTyp() == u.bezny)
		{
			Osobny *t = static_cast<Osobny*>(var);
			cout <<"Pocet operacii: "<< t->getOperacie()<< endl;
		}

		else if (var->getTyp() == u.sporiaci)
		{
			Sporiaci* t = static_cast<Sporiaci*>(var);
			cout <<"Vysko urokovej sadzby: " <<  t->getSadzba() <<" %" << endl;
		}

		else if (var->getTyp() == u.terminovany)
		{
			Terminovany* t = static_cast<Terminovany*>(var);
			cout << "Vysko urokovej sadzby: " << t->getSadzba() << " %" << endl;
			cout <<"Periodicita pripisovania urokov v tyzdnoch: " <<  t->getPeriodicita() << endl;
			
		}

		else if (var->getTyp() == u.hypotekarny)
		{
			Hypotekarny* t = static_cast<Hypotekarny*>(var);
			cout << "Vysko urokovej sadzby: " << t->getSadzba() << " %" << endl;
			cout <<"Doba fixacie je: "<< t->getFixacia() << " mesiacov."<<endl;
		}
	}


}
