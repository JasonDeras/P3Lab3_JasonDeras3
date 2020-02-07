#include <typeinfo>
#include "Circulo.h"
using namespace std;

#ifndef ESFERA_H
#define ESFERA_H

class Esfera{
	private:
		double radio;
		float volumen;
		Circulo* circular;
	public:
		Esfera();
		Esfera( Circulo *circular);
		float Volumen();
		~Esfera();
};

#endif