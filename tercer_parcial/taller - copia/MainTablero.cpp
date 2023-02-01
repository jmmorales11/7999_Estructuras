#include "FuncionesInterfaz.cpp"
#include "FuncionA.cpp"
#include "validar.h"
#include <conio.h>
#include <string.h>
int main(int argc, char** argv) {
	int opcion, n;
	char datoEntero[10];
	Reina *rei;
	FuncionesInterfaz *obj;
	Alfil *alfil;
	FuncionA *obj1;
	int fila, columna;
	do{
		system("color 0F");
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Reinas " << endl;
        cout << "\t[2]  Alfiles " << endl;
        cout << "\t[3]  Prueba " << endl;
        cout << "\t[0]  Salir " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        opcion = funcion_atoi(datoEntero,strlen(datoEntero));
        cout<<"\n";
        switch(opcion){
        	case 1:
        		str_cpy(datoEntero,ingresarDatosEnteros("\n\tIngrese el numero de Reinas "));
        		n = funcion_atoi(datoEntero,strlen(datoEntero));
        		rei = new Reina(n);
        		obj= new FuncionesInterfaz(rei);
        		obj->solucionReinas();
        		cout<<"Se creo el archivo txt"<<endl;
        		system("PAUSE");
        		break;
        	case 2:
        		
        		alfil = new Alfil(4);
        		obj1= new FuncionA(alfil);
				obj1->solucionReinas();
				cout<<"Se creo el archivo txt"<<endl;
				system("PAUSE");
				break;
			case 3:
				str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la fila hasta 8\n "));
        		fila = funcion_atoi(datoEntero,strlen(datoEntero));
        		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la columna hasta 8\n "));
        		columna = funcion_atoi(datoEntero,strlen(datoEntero));
        		alfil = new Alfil(1);
        		obj1= new FuncionA(alfil);
				obj1->solucionAlfilA(fila-1,columna-1);
				cout<<"Se creo el archivo txt"<<endl;
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while (opcion!=1|| opcion!=2||opcion !=0);
	return 0;
}