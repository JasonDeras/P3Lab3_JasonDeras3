#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo(){

}

Triangulo::Triangulo(int pa,int pb,int pc){

        this->a=pa;
        this->b=pb;
        this->c=pc;
        this->s=(a+b+c)/2;

}

int Triangulo::getA(){
        return a;
}

void Triangulo::setA(int pa){
        a=pa;
}

int Triangulo::getB(){
        return b;
}

void Triangulo::setB(int pb){
        b=pb;
}

int Triangulo::getC(){
        return c;
}
void Triangulo::setC(int pc){
        c=pc;
}

int Triangulo::CalcularArea(){
        return b;
}
