#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 5
#define TAM1 5
#include "validar.cpp"

using namespace std;


void ingresarMatriz(int **,int,int);
void multiplicarMatriz(int **,int **,int, int, int,int);
void sumaMatriz(int **,int ,int,int **);
void imprimirMatriz(int **,int,int);
int main(int argc, char** argv){
	int f,c,i,f1,c1;
	int **matriz1 ,**matriz2;
	char datoEntero[10];
	cout<<"_____________________Ingreso de la primera matriz_______________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la primera matriz 
	matriz1 = new  int*[f];
	for ( i=0;i<f;i++){
		matriz1[i] = new int[c];
	}
	ingresarMatriz(matriz1,f,c);
	cout<<"\n__________________Ingreso de la segunda matriz____________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f1=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c1=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la segunda matriz 
	matriz2 = new  int*[f1];
	for (i=0;i<f1;i++){
		matriz2[i] =new int[c1];
	}
	ingresarMatriz(matriz2,f1,c1);
	imprimirMatriz(matriz1 ,f,c);
	imprimirMatriz(matriz2 ,f1,c1);
	multiplicarMatriz(matriz1,matriz2,f,c, f1,c1);
	//sumaMatriz(matriz1,f,c,matriz2);
	
}

void ingresarMatriz(int **matriz,int filas,int columnas){
	int i,j;
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"Digite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			cin>>*(*(matriz+i)+j);
		}
	}	
}

void sumaMatriz(int **matriz1,int filas,int columnas,int **matriz2){
	cout<<"Entra a la suma"<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
	
}

void imprimirMatriz(int **matriz ,int filas,int columnas){
	cout<<"La matriz es "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	
}


void multiplicarMatriz(int **matrizA,int **matrizB,int fA, int cA, int fB,int cB){
	//misno columnas A= Filas B 
	//Matriz resultante filas A con Columnas B
	int **resultado = new int*[fA];
	for(int i=0;i<fA;i++){
	resultado[fA]=new int[cB];
	}
	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
			*(*(resultado+i)+j)=0;
			for(int k=0; k<cA;k++){
					//cout<<"Antes "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
				*(*(resultado+i)+j) += (*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j));
				//cout<<"comienzo "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
			}
			cout<<*(*(resultado+i)+j)<<"  ";
		}cout<<endl;
	}
}
