/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Miercoles, 30 de nombiebre de 2022 21:17:59
 * Purpose: ROL DE PAGO
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"
///SIRVE
using namespace std;

int main(int arg, char** argv){
	int cedula,h100,h50,num,opc,cantidad;
	bool confirmar;
	char datoEntero[10], respuesta,datoCaracter[10];

	Lista *lis=new Lista();
	informacion *obj;
	do{
		informacion *obj;
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar " << endl;
        cout << "\t[2]  Ingresar por cola " << endl;
        cout << "\t[3]  Mostrar " << endl;
        //cout << "\t[4]  Mostrar por cola " << endl;
        cout << "\t[4]  Buscar " << endl;
        cout << "\t[5]  Eliminar " << endl;
		cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				do
				{
					obj = new informacion();
					obj->ingresarInformacion(obj);
					if(lis->buscarObj(obj->getId())==true){
						confirmar=true;
						cout<<"\nLa cedula que ingreso ya existe ";	
					}else{
						confirmar=false;
					}
				}while(confirmar!=false);
				lis->insertar(obj);
				system("PAUSE");
				break;
			case 2:
				do
				{
					obj = new informacion();
					obj->ingresarInformacion(obj);
					if(lis->buscarObj(obj->getId())==true){
						confirmar=true;
						cout<<"\nLa cedula que ingreso ya existe ";	
					}else{
						confirmar=false;
					}
				}while(confirmar!=false);
				lis->insertarCola(obj);
				cout<<endl;
				system("PAUSE");
				break;
			case 3:
				cout<<lis->toString()<<endl;
				system("PAUSE");
				
				break;
			case 6:
				lis->imprimirCola(*lis,cantidad);
				cout<<endl;
				break;
			case 4:

				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula a buscar:  "));
				cedula=funcion_atoi(datoEntero,strlen(datoEntero));
				cout<<endl;
				lis->buscarObj(cedula);

				system("PAUSE");
				break;
			case 5:
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula a eliminar:  "));
				cedula=funcion_atoi(datoEntero,strlen(datoEntero));
				cout<<endl;
				lis->eliminar(cedula);
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while(opc != 1 || opc != 2||opc != 3||opc != 4||opc != 5||opc != 6||opc != 0 );
	return 0;
	
	
	
	

}
