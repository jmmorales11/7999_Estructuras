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
       			if(dimension==4){
       				for(int i=0;i<(dimension);i++){
					*(cuadrado+i)=(int *)calloc((dimension),sizeof(int));
					}
					cubo= new CuboMagico(cuadrado);
					obj= new FuncionesCubo(cubo);
					obj->suma(dimension, numero,patron);
					obj->llenar2(dimension,numero,patron);
					obj->mostrar2(dimension);
				   }if(dimension%2!=0){
				   
					for(int i=0;i<(2*dimension-1);i++){
						*(cuadrado+i)=(int *)calloc((2*dimension-1),sizeof(int));
					}
					cubo= new CuboMagico(cuadrado);
					obj= new FuncionesCubo(cubo);
					obj->suma(dimension, numero,patron);
					obj->llenar1(dimension,numero,patron);
					obj->mostrar1(dimension);	
					}else{
					cout<<endl;
					cout<<"Dimension no permitida"<<endl;
				}
				
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