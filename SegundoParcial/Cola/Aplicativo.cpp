/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include "Cola.cpp"
#include "validar.h"
int main() {
	Cola pila;
	int opc,contador, num, cantidad;
	char datoEntero[10];
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar los elemntos de la lista " << endl;
        
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				do{
					str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
					num=funcion_atoi(datoEntero,strlen(datoEntero));
					pila.push(num);
				}while (contador<cantidad);
				cout<<endl;
				system("PAUSE");
				break;
			case 2:
				pila.mostrar();
				cout<<endl;
				system("PAUSE");
				break;
			case 3:
				pila.pop();
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}

	}while(opc != 1 || opc != 2|| opc != 3 || opc != 4||opc != 5|| opc != 6||opc != 0 );
	return 0;
}
