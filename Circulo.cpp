#include "Circulo.h"

#include <typeinfo>

using namespace std;

Circulo::Circulo(){
	radio=0;
	diametro=0;
	circumferencia=0;
	area=0;
}

Circulo::Circulo(int radio){
	this -> radio=radio;
	this -> diametro=radio*radio;
	circumferencia=CalcularCircumferencia(radio);
}

int Circulo::getRadio(){
	return radio;
}

void Circulo::setRadio(int radio){
	this->radio=radio;
}

int Circulo::getDiametro(){
	return diametro;
}

void Circulo::setDiametro(int diametro){
	this->diametro=diametro;
}

float Circulo::getCircumferencia(){
	circumferencia=diametro*3.14159265359;
	return circumferencia;
}

float Circulo::CalcularCircumferencia(int radio){
	float r=3.14159265359;
	float circumferencia = diametro*r;
	return circumferencia;
}

float Circulo::Area(){
	float r=3.14159265359;
	float area = (radio*radio)*r;
	return area;
}

Circulo::~Circulo(){
	
}