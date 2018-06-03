#pragma once
#include "Factory.h"
class BinString : public Factory
{
public:
	BinString() { value = ""; }
	BinString(string bin) { value = bin; };
};
