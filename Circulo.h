#include <typeinfo>

#include <string>
using namespace std;

#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo{
	
	private: 
		
		int radio,diametro,circumferencia,area;
		float CalcularCircumferencia();

	public: 

		Circulo();
		Circulo(int);

		int getRadio();
		void setRadio(int);

		int getDiametro();
		void setDiametro(int);

		float getCircumferencia();
		void setCircumferencia(float);

		float CalcularArea();
};

#endif