#include "AccountsList.h"





void AccountsList::pridajUcet(Ucet *u)
{
	this->zoznamUctov.push_back(u);
}

void AccountsList::vypisUcty()
{


	for  (Ucet* var : zoznamUctov)
	{ 
	
		auto typUctu = enum_name(var->getTyp());
		cout <<"Typ uctu: " << typUctu << endl;
		cout <<"Cislo uctu je: "<<var->getCislo() << endl;
		cout <<"Meno majitela: "<< var->getMeno() << endl;
		cout <<"Priezvisko majitela: " << var->getPriezvisko() << endl;
		auto nazovMeny = enum_name(var->getMena());
		cout <<"Zostatok na ucte: "<< var->getZostatok()<< " " << nazovMeny << endl;
		cout <<"Ucet je vedeny v mene: "<< nazovMeny << endl;
		if (var->getTyp() == u.bezny)
		{
			Osobny *t = static_cast<Osobny*>(var);
			cout <<"Pocet operacii: "<< t->getOperacie()<< endl;
		}

		else if (var->getTyp() == u.sporiaci)
		{
			Sporiaci* t = static_cast<Sporiaci*>(var);
			cout <<"Vyska urokovej sadzby: " <<  t->getSadzba() <<" %" << endl;
		}

		else if (var->getTyp() == u.terminovany)
		{
			Terminovany* t = static_cast<Terminovany*>(var);
			cout << "Vysko urokovej sadzby: " << t->getSadzba() << " %" << endl;
			cout <<"Periodicita pripisovania urokov v mesiacoch: " <<  t->getPeriodicita() << endl;
			
		}

		else if (var->getTyp() == u.hypotekarny)
		{
			Hypotekarny* t = static_cast<Hypotekarny*>(var);
			cout << "Vysko urokovej sadzby: " << t->getSadzba() << " %" << endl;
			cout <<"Doba fixacie je: "<< t->getFixacia() << " mesiacov."<<endl;
		}

		cout << endl;
	}


}

bool AccountsList::zrusUcet(int cislo)
{

	bool pom = false;
	for (int i = 0; i < zoznamUctov.size(); i++)
	{
		
	

		if (zoznamUctov[i]->getCislo() == cislo)
		{
			delete zoznamUctov[i];
			zoznamUctov.erase(zoznamUctov.begin() + i);// zoznamUctov.erase(i) nefungovalo!!!
			
			pom = true;
			return pom;
		}

		
	}

	return pom;

}

bool AccountsList::vlozPeniaze(int cislo, int suma)
{
	bool pom = false;
	for (int i = 0; i < zoznamUctov.size(); i++)
	{



		if (zoznamUctov[i]->getCislo() == cislo)
		{

			
			zoznamUctov[i]->getZostatokk() += suma;
			if (zoznamUctov[i]->getTyp() == u.bezny)
			{

				Osobny* t = static_cast<Osobny*>(zoznamUctov[i]);
				t->zvysOperacie();
				
			}
			pom = true;
			return pom;
		}


	}

	return pom;

}

bool AccountsList::vyberPeniaze(int cislo, int suma)
{

	bool pom = false;
	for (int i = 0; i < zoznamUctov.size(); i++)
	{



		if (zoznamUctov[i]->getCislo() == cislo)
		{

			

			if (zoznamUctov[i]->getZostatokk() >= suma)
			{
				zoznamUctov[i]->getZostatokk() -= suma;

				if (zoznamUctov[i]->getTyp() == u.bezny)
				{

					Osobny* t = static_cast<Osobny*>(zoznamUctov[i]);
					t->zvysOperacie();

				}
				pom = true;
				return pom;
			}
			

			
		}


	}

	return pom;

}

 int AccountsList::vypisZostatok(int cislo)
{
	
	for (int i = 0; i < zoznamUctov.size(); i++)
	{



		if (zoznamUctov[i]->getCislo() == cislo)
		{

			return zoznamUctov[i]->getZostatokk();
		

		}

		
			
		


	}

	return -1;
}
