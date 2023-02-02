#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuboMagico.cpp""
#include "FuncionesCubo.cpp"
#include "validar.h"
using namespace std;
int main(){
	int **cuadrado, dimension, num, patron, opcion;
	CuboMagico *cubo;
	char datoEntero[10];
	FuncionesCubo *obj;
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Cubo Magico " << endl;
        cout << "\t[0]  Salir " << endl;
        cin>>opcion;
		cout<<"\n";
		switch(opcion){
			case 1:
				str_cpy(datoEntero,ingresarDatosEnteros("\n\tIngrese la dimension"));
	        	dimension = funcion_atoi(datoEntero,strlen(datoEntero));
	        	str_cpy(datoEntero,ingresarDatosEnteros("\n\tIngrese el numero a iniciar"));
	        	num = funcion_atoi(datoEntero,strlen(datoEntero));
	        	str_cpy(datoEntero,ingresarDatosEnteros("\n\tIngrese el patron a iniciar"));
	        	patron = funcion_atoi(datoEntero,strlen(datoEntero));
	        	cuadrado=(int**)calloc(2*dimension-1,sizeof(int*));
				for(int i=0;i<num;i++){
					*(cuadrado+i)=(int *)calloc(2*dimension-1,sizeof(int));				
				}
				cubo = new CuboMagico();
				obj = new FuncionesCubo(cubo);
				obj->llenar(num, patron, dimension);
				obj->mostrar(2*dimension-1,2*dimension-1);
				system("pause");
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