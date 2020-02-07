#include "Esfera.h"
#include "Circulo.h"
#include <typeinfo>

using namespace std;

#include <iostream>

Esfera :: Esfera(Circulo *circular ){
	this->circular = circular;
	radio = circular->getRadio();
	
}

float Esfera::Volumen(){
	double volumen;
	volumen = ( 3.14159265359 * 4 * radio * radio * radio ) / 3;
	return volumen;
}

Esfera::~Esfera(){
	
}