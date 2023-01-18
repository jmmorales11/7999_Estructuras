/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include "ListaCircularDoble.cpp"
#include "validar.h"
int main() {
	ListaCircularDoble lst;
	int opc,contador, num, cantidad;
	char datoEntero[10];
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar los elemntos de la lista " << endl;
        cout << "\t[2]  Mostrar lista " << endl;
        cout << "\t[3]  Eliminar elemento" << endl;
        cout << "\t[4]  Buscar elemento" << endl;
        cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
<<<<<<< HEAD
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cantidad de datos que desea introducir:  "));
				cantidad=funcion_atoi(datoEntero,strlen(datoEntero));
				do{
					str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
					num=funcion_atoi(datoEntero,strlen(datoEntero));
					lst.insertar(num);
					contador++;
				}while (contador<cantidad);
=======
				
					str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
					num=funcion_atoi(datoEntero,strlen(datoEntero));
					lst.insertar(num);
>>>>>>> 52418595ebd169506f053bf31acac561cd876abf
				cout<<endl;
				system("PAUSE");
				break;
			case 2:
				lst.mostrarLista();
				cout<<endl;
				system("PAUSE");
				break;
			case 3:
				lst.mostrarLista();
				cout<<endl;
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el elemento que desea eliminar:  "));
				num=funcion_atoi(datoEntero,strlen(datoEntero));
				lst.eliminar(num);
				cout<<endl;
				lst.mostrarLista();
				cout<<endl;
				system("PAUSE");
				break;
			case 4:
				cout<<endl;
				lst.mostrarLista();
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el elmento que desea buscar:  "));
				num=funcion_atoi(datoEntero,strlen(datoEntero));
				cout<<endl;
				lst.buscar(num);
				system("PAUSE");
				break;
			case 5:
<<<<<<< HEAD
				lst.mostrarLista();
				cout<<endl;
				lst.ordenarMetodoBurbuja();
				cout<<endl;
				system("PAUSE");
=======
				cout<<endl;
				lst.mostrarLista();
				cout<<endl;
				lst.ordenarMetodoBurbuja();
				lst.mostrarLista();
				cout<<endl;
				lst.buscar(num);
				system("PAUSE");
				break;
>>>>>>> 52418595ebd169506f053bf31acac561cd876abf
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}

	}while(opc != 1 || opc != 2|| opc != 3 || opc != 4||opc != 0 );
	return 0;
}
