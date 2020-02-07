#include <typeinfo>
#include "Triangulo.h"
using namespace std;

#ifndef PIRAMIDE_H
#define PIRAMIDE_H

class Piramide{
	
	private: 
		
		int altura;
		int base;
		float volumen;
		Triangulo* triangular;

	public: 

		Piramide();
		Piramide(Triangulo *triangular,int);

		int getAltura();
		void setAltura(int);

		float Volumen();

		~Piramide();
};

#endif