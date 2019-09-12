#include "Ucet.h"




Ucet::Ucet(unsigned short int typ_, unsigned int cislo_, string meno_, string priezvisko_, unsigned int zostatok_, string mena_)
{


	this->typ = typ_;
	this->cislo = cislo_;
	this->meno = meno_;
	this->priezvisko = priezvisko_;
	this->zostatok = zostatok_;
	this->mena = mena_;
	
}

unsigned short int Ucet::getTyp()
{
	return this->typ;
}

unsigned int Ucet::getCislo()
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

unsigned int Ucet::getZostatok()
{
	return this->zostatok;
}

string Ucet::getMena()
{
	return this->mena;
}







