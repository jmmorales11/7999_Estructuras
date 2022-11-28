#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"
///SIRVE
using namespace std;
int main(int arg, char** argv){
	int cedula,h100,h50,n,opc;
	char datoEntero[10];
	informacion *obj=new informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	Lista *lis=new Lista();
	//informacion *obj1=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	//informacion *obj2=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	
	
	//cout<<"Aquie"<<endl;
	
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar " << endl;
        cout << "\t[2]  Mostrar " << endl;
        cout << "\t[3]  Buscar " << endl;
        cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
				obj->informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
				obj->ingresarInformacion(obj);
				lis->insertar(obj);
				break;
			case 2:
				cout<<lis->toString()<<endl;
				system("PAUSE");
				break;
			case 3:
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while(opc != 1 || opc != 2||opc != 0 );
	return 0;
	
	
	
	

}
