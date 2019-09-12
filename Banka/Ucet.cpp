#include "Ucet.h"


Ucet::Ucet(unsigned short int typ_, unsigned int cislo_, string meno_, string priezvisko_, unsigned int zostatok_, string mena_, unsigned int pocetOperacii_)
{


	this->typ = typ_;
	this->cislo = cislo_;
	this->meno = meno_;
	this->priezvisko = priezvisko_;
	this->zostatok = zostatok_;
	this->mena = mena_;
	this->pocetOperacii = pocetOperacii_;
}

Ucet::Ucet(unsigned short int typ_, unsigned int cislo_, string meno_, string priezvisko_, unsigned int zostatok_, string mena_, unsigned int pocetOperacii_, double sadzba_)
{


	this->typ = typ_;
	this->cislo = cislo_;
	this->meno = meno_;
	this->priezvisko = priezvisko_;
	this->zostatok = zostatok_;
	this->mena = mena_;
	this->sadzba = sadzba_;
}

string Ucet::getMeno()
{
	return this->meno;
}
