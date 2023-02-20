#include "ListaDoble.cpp"
#include <iostream>
#include "validar.h"
int main(){
	ListaDoble<string> *lis=new ListaDoble<string>();
	char datoEntero[10];
	int opcion;
	int valor;
	string nombre;
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  insertar lista " << endl;
        cout << "\t[2]  desplazada " << endl;
		cout << "\t[0]  Salir " << endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        opcion = funcion_atoi(datoEntero,strlen(datoEntero));
        cout<<"\n";
        switch(opcion){
        	case 1:
        		ingresocaracteres("\n Ingrese el nombre ");
        		
        		lis->insertarPorCabeza("Juan");
        		lis->insertarPorCabeza("Jose");
        		lis->insertarPorCabeza("Carlos");
        		
				lis->mostrarPorCabeza();
				system("PAUSE");
        		break;
        	case 2:
        		lis->mostrarPorCabeza();
        		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el valor "));
		        valor = funcion_atoi(datoEntero,strlen(datoEntero));
		        cout<<"\n";
        		lis->bit(valor);
        		lis->mostrarPorCabeza();
				system("PAUSE");
        		break;
        	
        	case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while (opcion!=1|| opcion!=2||opcion !=0);
}
	
