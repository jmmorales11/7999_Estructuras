#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "validar.h"
#include "CuboMagico.cpp"
#include "FuncionesCubo.cpp"
int main(){
	int num, patron, dimension, opcion, **cuadrado;
	CuboMagico *cubo;
	FuncionesCubo *obj;
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Cubo magico " << endl;
        cout << "\t[0]  Salir " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        opcion = funcion_atoi(datoEntero,strlen(datoEntero));
        cout<<"\n";
        switch(opcion){
        	case 1:
        		system("cls");
        		str_cpy(datoEntero,ingresarDatosEnteros("Ingresa la dimension de la matriz: "));
       			dimension = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("Ingresa el numero inicial: "));
       			num = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("Ingresa el patron: "));
       			patron = funcion_atoi(datoEntero,strlen(datoEntero));
       			cuadrado=(int**)calloc(num,sizeof(int*));
				for(int i=0;i<(2*dimension-1);i++){
					*(cuadrado+i)=(int *)calloc((2*dimension-1),sizeof(int));
				}
				cubo= new CuboMagico(cuadrado);
				obj= new FuncionesCubo(cubo);
				obj->llenar(num, patron, dimension);
				obj->mostrar((2*dimension-1),(2*dimension-1));
        		system("PAUSE");
        		break;
        	case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while (opcion!=1||opcion !=0);
	return 0;
}