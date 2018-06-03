// lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"
#include "SymbString.h"
#include "BinString.h"

bool isnumber(string str);

int main() {
	SymbString s;
	BinString b;
	string symb, bin;
	char a[20];
	int exit = 0;
	while (exit == 0) {
		int q = 0;
		cout << "1. Create SymbString" << endl;
		cout << "2. Create BinString" << endl;
		cout << "3. ShowOct" << endl;
		cout << "4. ShowDec" << endl;
		cout << "5. ShowHex" << endl;
		cout << "6. Delete SymbString" << endl;
		cout << "7. Delete DecString" << endl;
		cout << "8. Exit" << endl;
		cout << "Choice: ";
		cin >> q;
		switch (q) {
		case 1:
			cout << "Enter the value:" << endl;
			cin >> symb;
			s = SymbString(symb);
			cout << "Added" << endl;
			break;
		case 2:
			cout << "Enter the value:" << endl;
			cin >> bin;
			if (!isnumber(bin)) {
				cout << "Error" << endl;
				return 0;
			}
			_itoa(atoi(bin.c_str()), a, 2);
			b = BinString(bin);
			cout << "Added" << endl;
			break;
		case 3:
			cout << "Octal: " << b.ShowOct() << endl;
			break;
		case 4:
			cout << "Decimal: " << b.ShowDec() << endl;
			break;
		case 5:
			cout << "Hexadecimal: " << b.ShowHex() << endl;
			break;
		case 6:
			s = SymbString("");
			cout << "Deleted" << endl;
			break;
		case 7:
			b = BinString("");
			cout << "Deleted" << endl;
			break;
		case 8:
			exit = 1;
			break;
		}
	}
	return 0;
}

bool isnumber(string str) {
	string alph = "0123456789";
	for (int i = 0; i < str.size(); ++i)
		if (-1 == alph.find_first_of(str[i]))
			return false;
	return true;
}