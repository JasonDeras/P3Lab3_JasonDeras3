#include <iostream>

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

			default:
				cout<<"Opcion no valida\n\n\n";
			break;
		}//Fin del case

		cout<<"Desea volver al menu[1.-Si/2.-No]: ";
		cin>>usuario;
		cout<<"\n\n\n";

	}while(usuario!=2);

}//Fin del main

