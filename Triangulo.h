#include <typeinfo>

#ifndef TRIANGULO_H
#define TRIANGULO_H

using namespace std;


class Triangulo{
	
	private:
		
		int a, b, c;
		int altura;
		double area;
		double Calcular(int,int,int);

	public:

		Triangulo();
		Triangulo(int,int,int);

		int getA();
		void setA(int);

		int getB();
        void setB(int);

		int getC();
        void setC(int);

        int getAltura();
        void setAltura(int);

        double Area();

		~Triangulo();
	
};
#endif