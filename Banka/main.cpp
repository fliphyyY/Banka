#include <iostream>
#include "AccountsList.h"
#include "Osobny.h"
#include "Ucet.h"
#include "Terminovany.h"
#include "Sporiaci.h"
#include "Hypotekarny.h"
#include <iostream>


int main()
{


	Ucet u;

	
	AccountsList *zoznam = new AccountsList();
	cout << "Vitajte v menu" << endl;
	cout << "1 Vytvorenie uctu" << endl;
	int klavesnica;
	cin >> klavesnica;
	while (klavesnica != 7)
	{
		if (klavesnica == 1)
		{
			int typ ;
			
		
			
			string meno;
			string priezvisko;
			

			cout << "Zadaj typ: ";
			cin >> typ;

			cout << "Zadaj meno: ";
			cin >> meno;
			cout << "Zadaj priezvisko: ";
			cin >> priezvisko;
		     

			if (typ == 1)
			{

				
				zoznam->pridajUcet(new Osobny(u.bezny, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), 0));
			}
			 else if (typ == 2)
			{
				
				zoznam->pridajUcet(new Sporiaci(u.sporiaci, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu()));
			}
			if (typ == 3)	
			{

				int periodicita;
				cout << "Zadajte periodicitu pripisovania urokov: ";
				cin >> periodicita;
				zoznam->pridajUcet(new Terminovany(u.terminovany, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu(),periodicita));
			}
			if (typ == 4)
			{
				int fixacia;
				cout << "Zadajte dobu fixacie: ";
				cin >> fixacia;
				zoznam->pridajUcet(new Hypotekarny(u.hypotekarny, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu(),fixacia));
			}
			
			

			
		}

		if (klavesnica == 2)
		{
			zoznam->vypisUcty();
		}

		cin >> klavesnica;
	}

}

