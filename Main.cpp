#include <iostream>

using namespace std;

int menu(){

    int opcion;//Variable de las opciones del menu

    cout<<"Menu\n\n";
    cout<<"1. Identificar número triangular previo";
	cout<<"2. Calcular área de triángulo";
	cout<<"3. Calcular área de circulo";
	cout<<"4. Calcular volumen de pirámide";
	cout<<"5. Calcular volumen de esfera";
	cout<<"6. Salir\n\n";
    cout<<"Ingrese una opcion: ";
    cin>>opcion;
    cout<<"\n\n";
    return opcion;

}//Fin del menu

int main(){
	
	int usuario=menu();


	do{

		switch(usuario){

			default:
				cout<<"Opcion no valida\n\n\n";
			break;
		}//Fin del case

	}while(usuario!=6);

}//Fin del main