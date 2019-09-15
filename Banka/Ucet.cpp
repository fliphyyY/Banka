#include "Ucet.h"


#define CISLO_MIN 1000000000
#define CISLO_MAX 2147483647


Ucet::Ucet(typUctu typ_,  int cislo_, string meno_,
	string priezvisko_, unsigned int zostatok_, currency mena_)
{


	this->typ = typ_;
	this->cislo = cislo_;
	this->meno = meno_;
	this->priezvisko = priezvisko_;
	this->zostatok = zostatok_;
	this->mena = mena_;
	
}



Ucet::typUctu Ucet::getTyp()
{
	return this->typ;
}

 int Ucet::getCislo()
{
	return this->cislo;
}

string Ucet::getMeno()
{
	return this->meno;
}

string Ucet::getPriezvisko()
{
	return this->priezvisko;
}

float Ucet::zadajSadzbu()
{
	float sadzba;
	cout << "Zadajte urokovu sadzbu: ";
	cin >> sadzba;

	return sadzba;
}

unsigned int &Ucet::getZostatok()
{
	return this->zostatok;
}

Ucet::currency Ucet::getMena()
{
	return this->mena;
}


 int Ucet::cisloUctu()
{
	mt19937 rng(random_device{}());
	uniform_int_distribution<> dist(CISLO_MIN, CISLO_MAX);

	auto random_number = dist(rng);
	return random_number;
}

Ucet::currency Ucet::vyberMeny()
{
	cout << endl;
	int volba;
	cout << "1. EUR " << endl;
	cout << "2. CZK " << endl;
	cout << "3. GBP " << endl;
	cout << "4. USD " << endl;
	cout << "5. RUB " << endl;
	cout << endl;
	cout << "Zadajte menu: ";
	cin >> volba;


	switch (volba)
	{

		case 1:
		
		return EUR;
		break;

		case 2:
		
		return CZK;
		break;
		

		case 3:		
		return GBP;
		break;
		

		case 4:
		
		return USD;
		break;
		

		case 5:
		
		return RUB;
		break;
		
		default:
		system("cls");
		vyberMeny();
	}
}









