//============================================================================
// Name        : classExample.cpp
// Author      : c
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Estudiant.hh"
using namespace std;

int main() {
	cout << "Estudiant:" << endl; // prints !!!Hello World!!!
	Estudiant e1;
	e1.modificar_nota(9.5);
	cout << e1.consultar_nota() << endl;

	int stop;
	cin >> stop;

	return 0;
}
