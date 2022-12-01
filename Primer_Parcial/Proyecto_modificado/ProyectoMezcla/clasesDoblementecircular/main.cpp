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
#include "ListaCircularDoble.cpp"
///SIRVE
using namespace std;

int main(int arg, char** argv){
	int cedula,h100,h50,num,opc,cont=1;
	bool confirmar;
	char datoEntero[10];

	ListaCircularDoble *lis=new ListaCircularDoble();
	informacion *obj;
	do{
		informacion *obj;
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar " << endl;
        cout << "\t[2]  Mostrar " << endl;
        cout << "\t[3]  Buscar " << endl;
        cout << "\t[4]  Eliminar " << endl;
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
					if(cont==1){
					obj->ingresarInformacion(obj);	
					cont++;
					}else{
						obj->ingresarInformacion(obj);
						if(lis->buscarObj(obj->getId())==true){
						confirmar=true;
						cout<<"\nLa cedula que ingreso ya existe ";	
						}else{
						confirmar=false;
						}
					}					
					
				}while(confirmar!=false);
				lis->insertar(obj);
				system("PAUSE");
				break;
			case 2:
				cout<<lis->toString()<<endl;
				system("PAUSE");
				break;
			case 3:

				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula a buscar:  "));
				cedula=funcion_atoi(datoEntero,strlen(datoEntero));
				cout<<endl;
				
				confirmar=lis->buscarObj(cedula);
				if(confirmar==false){
					cout<<"Usuario no encontrado"<<endl;
				}
				system("PAUSE");
				break;
			case 4:
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
	}while(opc != 1 || opc != 2||opc != 3||opc != 4||opc != 0 );
	return 0;
	
	
	
	

}
