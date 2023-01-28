#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "Matriz.cpp"
#include <Windows.h>
#define MAX 8
using namespace std;
void lectura();
int main(){

	Matriz<int> funcion;
	int opc;
	int **matriz;
	matriz = new  int*[MAX];
	for ( int i=0;i<MAX;i++){
		matriz[i] = new int[MAX];
	}
	do{
		system("color 3F");
		cout<<"*************Tablero de ajedrez**********"<<endl;
		cout<<"\t[1]tablero"<<endl;
		cout<<"\t[2] tablero y numeros"<<endl;
		cout<<"\t[0] salir"<<endl;
		cin>>opc;
		funcion.ingresarMatriz(matriz,MAX,MAX);
		switch(opc){
			case 1: 
				funcion.imprimirMatriz(matriz,MAX,MAX);
				cout<<endl;
				system("pause");
				system("cls");
			break;
			case 2:
				funcion.espacios(matriz,MAX,MAX);
				system("pause");
				system("cls");
			break;
		}
		system("cls");
		if(opc==0){
			cout<<"Gracias por ocupar nuestro programa"<<endl;
			break;
		}
	}while(opc !=0 || opc !=1 || opc !=2);
	

	return 0;
}

