#include <typeinfo>

using namespace std;

#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo{
	
	private: 
		
		int radio,diametro;
		float circumferencia;
		double area;
		float CalcularCircumferencia(int);

	public: 

		Circulo();
		Circulo(int);

		int getRadio();
		void setRadio(int);

		int getDiametro();
		void setDiametro(int);

		float getCircumferencia();
		void setCircumferencia(float);

		float Area();

		~Circulo();
};

#endif