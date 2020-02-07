#include "Triangulo.h"
#include <math.h>

#include <iostream>

using namespace std;

Triangulo::Triangulo(){
	a=0;
	b=0;
	c=0;
	area=0;
	altura=0;
}

Triangulo::Triangulo(int a, int b, int c){
	this -> a=a;
	this -> b=b;
	this -> c=c;
	area=Calcular(a,b,c);
	altura=(2*area)/b;
}

int Triangulo::getA(){
	return a;
}

void Triangulo::setA(int a){
	this->a=a;
}

int Triangulo::getB(){
	return b;
}

void Triangulo::setB(int b){
	this->b=b;
}

int Triangulo::getC(){
	return c;
}

void Triangulo::setC(int c){
	this->c=c;
}

int Triangulo::getAltura(){
	return altura;
}

void Triangulo::setAltura(int altura){
	this->altura=altura;
}

double Triangulo::Calcular(int a, int b, int c){
	int s = (a+b+c)/2;
	double area = sqrt(s*((s-a)*(s-b)*(s-c)));
	return area;
}

double Triangulo::Area(){
	return area;
}

Triangulo::~Triangulo(){
	
}