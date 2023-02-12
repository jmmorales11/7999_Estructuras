/***********************************************************************
 * Module:  CuboMagico.cpp
 * Author:  Jeimy Morales y Orrico Camilo
 * Modified: miércoles, 1 de febrero de 2023 18:19:30
 * Purpose: Implementation of the class CuboMagico
 * TALLER
 ***********************************************************************/
#include "FuncionesInterfaz.cpp"
#include "FuncionA.cpp"
#include "validar.h"
#include <conio.h>
#include <string.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
int main(int argc, char** argv) {
	int gd = DETECT;
	int gm;
	initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1250,700); 
	
	int numero,nume;
	int opcion, n;
	char datoEntero[10];
	Reina *rei;
	FuncionesInterfaz *obj;
	Alfil *alfil;
	FuncionA *obj1;
	int fila, columna;
	
/*	
	line(850,400,850,150);
	line(850,400,1100,400);
//	line(85,60,90,50);
//	line(95,60,90,50);
//	line(585,405,590,410);
//	line(585,415,590,410);
	
	settextstyle(3,0,1);
	outtextxy(890,435,"Elementos");
	settextstyle(3,1,1);
	outtextxy(800,180,"O");
	outtextxy(800,200,"p");
	outtextxy(800,220,"e");
	outtextxy(800,240,"r");
	outtextxy(800,260,"a");
	outtextxy(800,280,"c");
	outtextxy(800,300,"i");
	outtextxy(800,320,"o");
	outtextxy(800,340,"n");
	outtextxy(800,360,"e");
	outtextxy(800,380,"s");
	setcolor(4);
	outtextxy(1090,380,"O(log n )");
	line(850,399,1100,398);
*/	
	obj->ejes();
	obj->graficarBigHoraSuperLineal();
	obj->graficarBigTiempoLineal();

	obj->LineaRoja();
	system("pause");
	do{
		obj1->cuadrado();
		system("color 0F");
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Reinas " << endl;
        cout << "\t[2]  Alfiles " << endl;
        cout << "\t[3]  Prueba " << endl;
        cout << "\t[4]  Reina" << endl;
        cout << "\t[5]  Caballo" << endl;
        cout << "\t[0]  Salir " << endl;
        //str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        //opcion = funcion_atoi(datoEntero,strlen(datoEntero));
        cin>>opcion;
		cout<<"\n";
		fila=0;
		columna=0;
        switch(opcion){
        	case 1:
        		cout<<"\n\tIngrese el numero de Reinas "<<endl;
        		cin>>n;
        	/*	str_cpy(datoEntero,ingresarDatosEnteros("\n\tIngrese el numero de Reinas "));
        		n = funcion_atoi(datoEntero,strlen(datoEntero));*/
        		rei = new Reina(n);
        		obj= new FuncionesInterfaz(rei);
        		obj->solucionReinas();
        		cout<<"Se creo el archivo txt"<<endl;
        		system("PAUSE");
        		cleardevice();
        		break;
        	case 2:
        		
        		alfil = new Alfil(4);
        		obj1= new FuncionA(alfil);
				obj1->solucionReinas();
				cout<<"Se creo el archivo txt"<<endl;
				system("PAUSE");
				cleardevice();
				break;
			case 3:
				do{
					fila = rand() % 8 + 1;
        			columna = rand() % 8 + 1;
        		}while(fila>columna);
	        	if (fila<=columna){
					alfil = new Alfil(1);
	        		obj1= new FuncionA(alfil);
					obj1->solucionAlfilA(fila-1,columna-1);
					cout<<"[ "<<fila<<" ; "<<columna<<" ]"<<endl;
				}else{
					cout<<"Valor no permitido"<<endl;
					cout<<"La fila debe ser mayor a la columna"<<endl;
				}
				
				system("PAUSE");
				cleardevice();
				break;
			case 4:
				do{
					fila = rand() % 8 + 1;
        			columna = rand() % 8 + 1;
        		}while(fila>columna);
	        	if (fila<=columna){
					rei = new Reina(1);
	        		obj= new FuncionesInterfaz(rei);
					obj->solucionReinasB(fila-1,columna-1);
					cout<<"[ "<<fila<<" ; "<<columna<<" ]"<<endl;
				}else{
					cout<<"Valor no permitido"<<endl;
					cout<<"La fila debe ser mayor a la columna"<<endl;
				}
				
				system("PAUSE");
				cleardevice();
				break;
			case 5:
				do{
					fila = rand() % 8 + 1;
        			columna = rand() % 8 + 1;
        		}while(fila>columna);
	        	if (fila<=columna){
					rei = new Reina(1);
	        		obj= new FuncionesInterfaz(rei);
					obj->caballo(fila-1,columna-1);
				//	obj->caballo(1,3);
					cout<<"[ "<<fila<<" ; "<<columna<<" ]"<<endl;
				}else{
					cout<<"Valor no permitido"<<endl;
					cout<<"La fila debe ser mayor a la columna"<<endl;
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
	}while (opcion!=1|| opcion!=2||opcion !=3 ||opcion !=4 ||opcion !=5 ||opcion!=0);
	return 0;
}