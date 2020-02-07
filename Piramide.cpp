#include "Piramide.h"
#include "Triangulo.h"
#include <typeinfo>

using namespace std;

Piramide:: Piramide(Triangulo *triangular,int altura ){
	this->triangular = triangular;
	base = triangular->getB();
	this->altura=altura;
	
}

int Piramide::getAltura(){
	return altura;
}

void Piramide::setAltura(int altura){
	this->altura=altura;
}

float Piramide::Volumen(){
	float volumen=((base *base)*altura)/3;
	return volumen;
}

Piramide::~Piramide(){
	
}