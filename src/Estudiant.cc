#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

Estudiant :: Estudiant(){
	dni = 0;
	amb_nota = false;
}



double Estudiant :: consultar_nota(){
	return this->nota;
}
void Estudiant :: modificar_nota(double nota){
	this->nota=nota;
}
