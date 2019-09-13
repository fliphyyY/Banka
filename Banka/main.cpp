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
			string mena;

			cout << "Zadaj typ: ";
			cin >> typ;

			cout << "Zadaj meno: ";
			cin >> meno;
			cout << "Zadaj priezvisko: ";
			cin >> priezvisko;
		     

			if (typ == 1)
			{
				zoznam->pridajUcet(new Osobny(u.bezny, 2, meno, priezvisko, 0, "CZ", 1));
			}
			 else if (typ == 2)
			{
				zoznam->pridajUcet(new Sporiaci(u.sporiaci, 2, meno, priezvisko, 0, "CZ", 6));
			}
			if (typ == 3)
			{
				zoznam->pridajUcet(new Terminovany(u.terminovany, 2, meno, priezvisko, 0, "CZ", 1,5));
			}
			if (typ == 4)
			{
				zoznam->pridajUcet(new Hypotekarny(u.hypotekarny, 2, meno, priezvisko, 0, "CZ", 1,5));
			}
			
			

			
		}

		if (klavesnica == 2)
		{
			zoznam->vypisUcty();
		}

		cin >> klavesnica;
	}

}

