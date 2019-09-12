#pragma once
#include <vector>
#include "Ucet.h"
using namespace std;
class AccountsList
{

private:
	vector<Ucet> zoznamUctov;

public:
	void pridajUcet(Ucet ucet);

};

