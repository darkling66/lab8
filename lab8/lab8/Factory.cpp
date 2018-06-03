#include "stdafx.h"
#include "Factory.h"
int Factory::ShowOct() {
	char a[20];
	_itoa(atoi(value.c_str()), a, 8);
	return atoi(a);
}

int Factory::ShowDec() {
	char a[20];
	_itoa(atoi(value.c_str()), a, 10);
	return atoi(a);
}
string Factory::ShowHex() {
	char a[20];
	_itoa(atoi(value.c_str()), a, 16);
	return _strupr(a);
}