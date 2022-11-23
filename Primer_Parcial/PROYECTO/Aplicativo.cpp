/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include "Lista.cpp"
#include "validar.h"
int main() {
	Lista lst;
	int opc,contador, num, cantidad;
	char datoEntero[10];
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar los elemntos de la lista " << endl;
        cout << "\t[2]  Mostrar lista simple" << endl;
        cout << "\t[3]  Eliminar elemento" << endl;
        cout << "\t[4]  Buscar elemento" << endl;
        cout << "\t[5]  Ingresar los elementos por la cola" << endl;
        cout << "\t[6]  Mostrar los elementos por la cola" << endl;
        cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cantidad de datos que desea introducir:  "));
				cantidad=funcion_atoi(datoEntero,strlen(datoEntero));
				do{
					str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
					num=funcion_atoi(datoEntero,strlen(datoEntero));
					lst.insertar(num);
					contador++;
				}while (contador<cantidad);
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
				
				char respuesta,datoCaracter[10];
				//do{
					str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que desea introducir a la lista: "));
				num=funcion_atoi(datoEntero,strlen(datoEntero));
				lst.insertarCola(num);
				//cout<<"\nDesea ingresar otro numero: (s/n)\n";
				//cin>>respuesta;
				//}while (respuesta=='s'||respuesta=='S');
				cout<<endl;
				system("PAUSE");
				break;
			case 6:
				lst.mostrarLista();
				lst.imprimirCola(lst,cantidad);
				cout<<endl;
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
