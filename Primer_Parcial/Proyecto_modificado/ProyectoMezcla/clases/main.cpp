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
	string a;

	Lista *lis=new Lista();
	informacion *obj= new informacion("Morales","Jeimy",1754146676,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
	do{
		informacion *obj1= new informacion("Marley","Morales",1754146678,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
		informacion *obj2= new informacion("Camilo","ORRICO",1754146676,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
		informacion *obj3= new informacion("Julian","MACAS",1754146676,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
		informacion *obj= new informacion("Jualiana","Morales",1754146676,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
		
		//informacion *obj;
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar " << endl;
        cout << "\t[2]  Ingresar por cola " << endl;
        cout << "\t[3]  Mostrar " << endl;
        //cout << "\t[4]  Mostrar por cola " << endl;
        cout << "\t[4]  Buscar " << endl;
        cout << "\t[5]  Eliminar " << endl;
        cout << "\t[6]  Buscar  Apellidos" << endl;
        cout << "\t[7]  Eliminar  Apellidos" << endl;
        cout << "\t[8]  Eliminar repetidos  Apellidos" << endl;
		cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				lis->insertar(obj2);
				lis->insertar(obj1);
				lis->insertar(obj);
				lis->insertar(obj3);
				/*
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
				lis->insertar(obj);*/
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
			case 6:
				cin>> a;
				//lis->eliminarApellidos(a);
				lis->buscarApellido(a);
				system("PAUSE");
				break;
			case 7:
				cin>> a;
				//lis->eliminarApellidos(a);
				lis->eliminarApell(a);
				system("PAUSE");
				break;
			case 8:
				cin>> a;
				lis->apellidosEliminar(a);
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
