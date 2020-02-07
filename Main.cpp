#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"
#include "Piramide.h"
#include "Esfera.h"

using namespace std;

int menu(){

    int opcion;//Variable de las opciones del menu

    cout<<"Menu\n\n";
    cout<<"1. Identificar número triangular previo"<<endl;;
	cout<<"2. Calcular área de triángulo"<<endl;
	cout<<"3. Calcular área de circulo"<<endl;
	cout<<"4. Calcular volumen de pirámide"<<endl;
	cout<<"5. Calcular volumen de esfera\n\n";
    cout<<"Ingrese una opcion: ";
    cin>>opcion;
    cout<<"\n\n";
    return opcion;

}//Fin del menu

void Ejercicio1(){

	int numero, anterior, triangular, i = 0;

	cout<<"Ingrese el numero: ";
	cin>>numero;

	while(numero<=0){
		cout<<"El numero no puede ser cero o menor que cero\n\n";
		cout<<"Ingrese el numero: ";
		cin>>numero;
	}//Valida que el numero no sea cero o menor

	do{
		i++;
		anterior  = ( (i-1)*i )/2;	
		triangular= ( i*(i+1) )/2;
	}while( numero > triangular  );

	cout<<"El numero traingular previo es:" <<anterior<<"\n\n\n";

}//Fin del Ejercicio 1

int main(){
	
	int usuario=1;


	do{

		switch(menu()){
			
			case 1:{
				Ejercicio1();
			break;}

			case 2:{

				int a,b,c;
				Triangulo *triangular;

				cout<<"Ingrese el primer lado: ";
				cin>>a;
				while(a<=0){
					cout<<"El valor del primer lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el primer lado: ";
					cin>>a;
				}//Valida el valor del primer lado

				cout<<"Ingrese el segundo lado: ";
				cin>>b;

				while(b<=0){
					cout<<"El valor del segundo lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el valor del segundo lado: ";
					cin>>b;
				}//Valida que el segundo lado sea valido

				cout<<"Ingrese el tercer lado: ";
				cin>>c;
				while(c<=0){
					cout<<"El valor del tercer lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el tercer lado: ";
					cin>>c;
				}//Valida que el valor del tercer lado sea valido

				triangular=new Triangulo(a,b,c);

				cout<<"El area del triangulo es: "<<triangular->Area()<<"\n\n";
				delete triangular;

			break;}//Fim del caso do s

			case 3:{

				int radio;
				cout<<"Ingrese el radio: ";
				cin>>radio;

				while(radio<=0){
					cout<<"El radio no puede ser cero o negativo: ";
					cout<<"Ingrese el radio: ";
					cin>>radio;
				}//Valida que el radio no sea cero o negativo

				Circulo *circular;
				circular=new Circulo(radio);

				cout<<"El area del criculo es: "<<circular->Area()<<"\n\n\n";
				delete circular;

			break;}

			case 4:{

				int a,b,c;
				Triangulo *triangular;

				cout<<"Ingrese el primer lado: ";
				cin>>a;
				while(a<=0){
					cout<<"El valor del primer lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el primer lado: ";
					cin>>a;
				}//Valida el valor del primer lado

				cout<<"Ingrese el segundo lado: ";
				cin>>b;

				while(b<=0){
					cout<<"El valor del segundo lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el valor del segundo lado: ";
					cin>>b;
				}//Valida que el segundo lado sea valido

				cout<<"Ingrese el tercer lado: ";
				cin>>c;
				while(c<=0){
					cout<<"El valor del tercer lado no puede ser cero o negativo\n\n";
					cout<<"Ingrese el tercer lado: ";
					cin>>c;
				}//Valida que el valor del tercer lado sea valido

				triangular=new Triangulo(a,b,c);

				int altura;
				cout<<"Ingrese la altura: ";
				cin>>altura;

				while(altura<=0){
					cout<<"La altura de la piramide no puede ser cero o negativo\n\n\n";
					cout<<"Ingrese la altura: ";
					cin>>altura;
				}//Valida que la altura no sea cero o negativo

				Piramide* piramided=new Piramide(triangular,altura);
					
					cout<<"El volumen de la piramide es: "<<piramided->Volumen()<<"\n\n\n";
				delete triangular;
				delete piramided;

			break;}

			case 5:{

				int radio;
				cout<<"Ingrese el radio: ";
				cin>>radio;

				while(radio<=0){
					cout<<"El radio no puede ser cero o negativo: ";
					cout<<"Ingrese el radio: ";
					cin>>radio;
				}//Valida que el radio no sea cero o negativo

				Circulo *circular;
				circular=new Circulo(radio);

				Esfera *esferar=new Esfera(circular);

				cout<<"El volumen de las esfera es: "<<esferar->Volumen()<<"\n\n\n";
				delete circular;
				delete esferar;

			break;}

			default:{
				cout<<"Opcion no valida\n\n\n";
			break;}
		}//Fin del case

		cout<<"Desea volver al menu[1.-Si/2.-No]: ";
		cin>>usuario;
		cout<<"\n\n\n";

	}while(usuario!=2);

}//Fin del main

