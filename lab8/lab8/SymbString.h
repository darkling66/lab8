#pragma once
#include "Factory.h"
class SymbString : public Factory
{
public:
	SymbString() { value = ""; }
	SymbString(string symb) { value = symb; };
};
