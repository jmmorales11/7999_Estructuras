#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "ListaDoble.cpp"
///SIRVE
using namespace std;

int main(int arg, char** argv){
	int cedula,h100,h50,num,opc;
	bool confirmar;
	char datoEntero[10];

	ListaDoble *lis=new ListaDoble();
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
	}while(opc != 1 || opc != 2||opc != 3||opc != 4||opc != 0 );
	return 0;
	
	
	
	

}
