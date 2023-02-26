/***********************************************************************
 * Module:  Mochila.h
 * Author:  camilo Orrico Y morales Marley
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Declaration of the class Mochila
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Mochila.cpp"
int main(){
	int opc, posicion;
	char datoEntero[10];
	int peso;
	Mochila *obj;
	ListaDoble<Mochila> *lis = new ListaDoble<Mochila>();
	
	do{
	
		system("cls");
		cout<<3/2<<endl;
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar por cabeza " << endl;
        cout << "\t[2]  Ingresar por cola " << endl;
        cout << "\t[3]  Ingresar por posicion " << endl;
        cout << "\t[4]  Eliminar por cabeza " << endl;
        cout << "\t[5]  Eliminar por cola " << endl;
        cout << "\t[6]  Eliminar por posicion " << endl;
        cout << "\t[7]  Mostrar " << endl;
        cout << "\t[8]  Beneficio maximo de la mochila" << endl;
		cout << "\t[0]  Salir" << endl;
		cout << " " << endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				obj = new Mochila(0.0, 0.0);
				obj->ingresarDatos();
				lis->insertarPorCabeza(obj);
				cout<<endl;
				system("PAUSE");
				break;
			case 2:
				obj = new Mochila(0.0, 0.0);
				obj->ingresarDatos();
				lis->insertarPorCola(obj);
				cout<<endl;
				system("PAUSE");
				break;
			case 3:
				obj = new Mochila(0.0, 0.0);
				obj->ingresarDatos();
				lis->insertarEntre(obj);
				cout<<endl;
				system("PAUSE");
				break;
			
			case 4:
				lis->eliminarPorCabeza();
				system("PAUSE");
				break;
			case 5:
				lis->eliminarPorCola();
				system("PAUSE");
				break;
			case 6:
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la posicion: "));
        		posicion = funcion_atoi(datoEntero,strlen(datoEntero));
				lis->eliminarEntre(posicion);
				system("PAUSE");
				break;
			case 7:
				lis->mostrarPorCabeza();
				system("PAUSE");
				break;
			case 8:
				if (lis->getListaVacia()){
					cout<<"Ingrese objetos "<<endl;
				}else{
					lis->ordenamientoBurbuja();
					str_cpy(datoEntero,ingresoflotantes("\nIngrese el peso maximo de la mochila: "));
	  				peso = funcion_atoi(datoEntero,strlen(datoEntero));
					lis->calcularValorMax(peso);
				}
				
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while(opc!= 1 || opc != 2||opc != 3||opc != 4||opc != 5||opc != 6 ||opc != 7||opc != 8||opc != 0 );
		
		
	return 0;
}