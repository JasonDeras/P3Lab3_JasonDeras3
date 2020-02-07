#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int menu(){

    int opcion;//Variable de las opciones del menu

    cout<<"Menu\n\n";
    cout<<"1. Identificar número triangular previo"<<endl;;
	cout<<"2. Calcular área de triángulo"<<endl;
	cout<<"3. Calcular área de circulo"<<endl;
	cout<<"4. Calcular volumen de pirámide"<<endl;
	cout<<"5. Calcular volumen de esfera"<<endl;
	cout<<"6. Salir\n\n";
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
		cout<<"El numero no puede ser cero o menor que cer\n\n";
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
				Circulo *circular;
				circular=new Circulo(radio);
				
				cout<<"El area del criculo es: "<<circular->Area()<<"\n\n\n";
				delete circular;

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

