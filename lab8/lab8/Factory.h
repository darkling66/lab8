#pragma once
#include "stdafx.h"
class Factory
{
protected:
	string value;
public:
	Factory() { value = ""; }
	int ShowOct();
	int ShowDec();
	string ShowHex();
private:
	Factory(string a) { value = a; }
};
