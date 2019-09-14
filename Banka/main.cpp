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

	int klavesnica = 0;
	AccountsList *zoznam = new AccountsList();
	
	while (klavesnica != 7)
	{

	
		cout << "1. Vytvorenie uctu" << endl;
		cout << "2. Zrusenie uctu" << endl;
		cout << "3. Vklad na ucet" << endl;
		cout << "4. Vyber z uctu" << endl;
		cout << "5. Vypis zostatku na ucte" << endl;
		cout << "6. Vypis vsetkych uctov" << endl;
		cout << "Vasa volba: ";		
		cin >> klavesnica;

		if (klavesnica == 1)
		{
			int typ ;
			
		
			cout << endl;
			string meno;
			string priezvisko;
			
			cout << "1. Bezny ucet" << endl;
			cout << "2. Sporiaci ucet" << endl;
			cout << "3. Terminovany ucet" << endl;
			cout << "4. Hypotekarny ucet" << endl;
			cout << "Zadaj typ: ";
			cin >> typ;
			cout << endl;
			cout << "Zadaj meno: ";
			cin >> meno;
			cout << "Zadaj priezvisko: ";
			cin >> priezvisko;
			
		     

			if (typ == 1)
			{

				zoznam->pridajUcet(new Osobny(u.bezny, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), 0));
				system("cls");
				cout << endl;
				cout << "Bankovy ucet bol uspesne vytvoreny" << endl;
				
			}
			 else if (typ == 2)
			{
				
				zoznam->pridajUcet(new Sporiaci(u.sporiaci, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu()));
				system("cls");
				cout << endl;
				cout << "Bankovy ucet bol uspesne vytvoreny" << endl;
			}
			if (typ == 3)	
			{

				int periodicita;
				cout << "Zadajte periodicitu pripisovania urokov: ";
				cin >> periodicita;
				zoznam->pridajUcet(new Terminovany(u.terminovany, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu(),periodicita));
				system("cls");
				cout << endl;
				cout << "Bankovy ucet bol uspesne vytvoreny" << endl;
			}
			if (typ == 4)
			{
				int fixacia;
				cout << "Zadajte dobu fixacie v mesiacoch: ";
				cin >> fixacia;
				zoznam->pridajUcet(new Hypotekarny(u.hypotekarny, u.cisloUctu(), meno, priezvisko, 0, u.vyberMeny(), u.zadajSadzbu(),fixacia));
				system("cls");
				cout << endl;
				cout << "Bankovy ucet bol uspesne vytvoreny" << endl;
			}
			
			

			
		}

		else if (klavesnica == 2)
		{
			system("cls");
			cout << endl;
			zoznam->vypisUcty();
			cout << "Zadajte cislo uctu ktory chcete zrusit" << endl;
			int cislo;
			cin >> cislo;
			if (zoznam->zrusUcet(cislo))
			{
				cout << "Zmazanie uctu bolo uspesne !" << endl;
			}
			
			else
			{
				cout << "Zmazanie uctu nebolo uspesne !" << endl;
			}
			
		}

		else if (klavesnica == 3)
		{
			int cislo;
			int suma;
			system("cls");
			cout << endl;
			zoznam->vypisUcty();
		
			cout << "Zadajte cislo uctu na ktory chcete vlozit peniaze: ";			
			cin >> cislo;
			cout << "Zadajte sumu ktoru chcete vlozit na ucet: ";
			cin >> suma;
			if(zoznam->vlozPeniaze(cislo, suma))
			{
				cout << "Vklad bol uspesny !" << endl;
			}

			else
			{
			cout << "Vklad nebol uspesny !" << endl;
			}

		}


		else if (klavesnica == 4)
		{

		int cislo;
		int suma;
		system("cls");
		cout << endl;
		zoznam->vypisUcty();

		cout << "Zadajte cislo uctu z ktoreho chcete vybrat peniaze: ";
		cin >> cislo;
		cout << "Zadajte sumu: ";
		cin >> suma;
		if (zoznam->vyberPeniaze(cislo, suma))
		{
			cout << "Vyber bol uspesny !" << endl;
		}

		else
		{
			cout << "Vyber nebol uspesny !" << endl;
		}

		}


		if (klavesnica == 5)
		{

			unsigned int pom;
			int cislo;
			system("cls");
			cout << endl;
			

			cout << "Zadajte cislo uctu pre vypis zostatku: ";
			cin >> cislo;

			pom = zoznam->vypisZostatok(cislo);
			if (pom != -1)
			{

				cout << "Zostatok na ucete je: " << pom << endl;
			}
				
			else
			{
				cout << "Ucet nebol najdeny" << endl;
			}
			

		
		}

		if (klavesnica == 6)
		{
			cout << endl;
			zoznam->vypisUcty();
		}

		
	}

}

