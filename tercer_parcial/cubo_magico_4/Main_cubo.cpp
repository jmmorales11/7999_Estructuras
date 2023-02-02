#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "validar.h"
#include "CuboMagico.cpp"
#include "FuncionesCubo.cpp"
int main(){
	int num, numero, patron, dimension, opcion, **cuadrado;
	char datoEntero[10];
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
        		str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa la dimension de la matriz: "));
       			dimension = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa el numero inicial: "));
       			numero = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa el patron: "));
       			patron = funcion_atoi(datoEntero,strlen(datoEntero));
       			cuadrado=(int**)calloc(num,sizeof(int*));
				for(int i=0;i<(2*dimension-1);i++){
					*(cuadrado+i)=(int *)calloc((2*dimension-1),sizeof(int));
				}
				cubo= new CuboMagico(cuadrado);
				obj= new FuncionesCubo(cubo);
				obj->llenar1(dimension,numero,patron);
				obj->mostrar1(dimension);
				cout<<"AAAAAAAAAAAAAAAAAA"<<endl;
				num=2*dimension-1;
				obj->suma(dimension, numero,patron);
				obj->llenar(num, numero, patron);
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