#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"
///SIRVE
using namespace std;

int main(int arg, char** argv){
	int cedula,h100,h50,num,opc;
	bool confirmar;
	char datoEntero[10];
	//informacion *obj=new informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	Lista *lis=new Lista();
	//informacion *obj1=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	//informacion *obj2=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	
	
	//cout<<"Aquie"<<endl;
	informacion *obj=new informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	informacion *obj1=new informacion("CAMILO",1234567890,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	informacion *obj2=new informacion("Kike",1245678912,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	do{
		
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
				/*do
				{
					obj->ingresarInformacion(obj);
					lis->insertar(obj);
					if(buscarObj(lis->->getId())==true){
						
					}
				}while(comfirmar=!false);*/
				//lis->buscarObj(cedula);
				
				lis->insertar(obj1);
				//lis->insertar(obj2);
				system("PAUSE");
				//return main();
				break;
			case 2:
				cout<<lis->toString()<<endl;
				system("PAUSE");
				break;
			case 3:

				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula a buscar:  "));
				cedula=funcion_atoi(datoEntero,strlen(datoEntero));
				cout<<endl;
				lis->buscarObj(cedula);

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
