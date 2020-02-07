#include <typeinfo>

#include <string>
using namespace std;

#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
	
	private: 
		
		int a,b,c,s,area;

	public: 

		Triangulo();
		Triangulo(int, int, int,);

		int getA();
		void setA(int);

		int getB();
		void setB(int);

		int getC();
		void setC;

		int CalcularArea();
};

#endif