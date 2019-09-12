#include <iostream>
#include "AccountsList.h"
#include "Osobny.h"
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
				zoznam->pridajUcet(new Osobny(1, 2, meno, priezvisko, 0, "CZ", 1));
			}
			 else if (typ == 2)
			{
				zoznam->pridajUcet(new Terminovany(3, 2, meno, priezvisko, 0, "CZ", 999,  6));
			}
			
			

			
		}

		if (klavesnica == 2)
		{
			zoznam->vypisUcty();
		}

		cin >> klavesnica;
	}

}

