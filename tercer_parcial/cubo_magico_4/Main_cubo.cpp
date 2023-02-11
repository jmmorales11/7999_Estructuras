/***********************************************************************
 * Module:  CuboMagico.cpp
 * Author:  Jeimy Morales y Orrico Camilo
 * Modified: martes, 7 de febrero de 2023 18:19:30
 * Purpose: Implementation of the class CuboMagico
 ***********************************************************************/



#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "validar.h"
#include "CuboMagico.cpp"
#include "FuncionesCubo.cpp"
using namespace std;
int main(){
	int gd = DETECT;
	int gm;
	//initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1150,700);
	int num, numero, patron, dimension, opcion, **cuadrado;
	char datoEntero[10];
	CuboMagico *cubo;
	FuncionesCubo *obj;
	setcolor(7);
	settextstyle(3,HORIZ_DIR,6);
	outtextxy(220,100,"Cuadrado Magico");
	readimagefile("cuadro.jpg",200,200,800,500);
	setcolor(15);
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Cubo magico " << endl;
        cout << "\t[0]  Salir " << endl;
        /*
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        opcion = funcion_atoi(datoEntero,strlen(datoEntero));*/
        cin>>opcion;
        cout<<"\n";
        switch(opcion){
        	case 1:
        		system("cls");
        		cout<<"\nIngresa la dimension de la matriz: "<<endl;
        		cin>>dimension;
        		cout<<"\nIngresa el numero inicial: "<<endl;
        		cin>>numero;
        		cout<<"\nIngresa el patron: "<<endl;
        		cin>>patron;
        	/*	str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa la dimension de la matriz: "));
       			dimension = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa el numero inicial: "));
       			numero = funcion_atoi(datoEntero,strlen(datoEntero));
       			str_cpy(datoEntero,ingresarDatosEnteros("\nIngresa el patron: "));
       			patron = funcion_atoi(datoEntero,strlen(datoEntero));
       			
       		*/	cleardevice();
			   obj->dibujar(dimension);	
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
					obj->llenar(dimension,numero,patron);
					obj->mostrar(dimension);
					
				}else{
					cout<<endl;
					cout<<"Dimension no permitida"<<endl;
				}
				
        		system("PAUSE");
        		cleardevice();
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