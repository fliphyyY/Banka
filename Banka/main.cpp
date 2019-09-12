
#include <iostream>
#include "AccountsList.h"
#include "Ucet.h"
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
			string meno;
			string priezvisko;
			string mena;
			cout << "Zadaj meno: ";
			cin >> meno;
			cout << "Zadaj priezvisko: ";
			cin >> priezvisko;
			zoznam->pridajUcet(Ucet (1, 2, meno, priezvisko, 0, "CZ", 1));
			
		}

		if (klavesnica == 2)
		{
			zoznam->vypisUcty();
		}

		cin >> klavesnica;
	}

}

