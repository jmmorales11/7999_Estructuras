#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 5
#define TAM1 5
#include "validar.cpp"
using namespace std;
//https://programacionparacoccidio.blogspot.com/2013/03/multiplicacion-de-matrices-en-c.html
void ingresarMatriz(int matriz[][TAM1],int,int);
void multiplicarMatriz(int matriz[][TAM1],int matriz1[][TAM1] ,int, int, int,int );
void sumaMatriz(int matriz1[][TAM1] ,int ,int,int matriz[][TAM1]  );
void imprimirMatriz(int matriz[][TAM1]  ,int,int);
int main(int argc, char argv){
	int f,c,i,f1,c1;
	int matriz1[TAM][TAM1] ,matriz2[TAM][TAM1];
	char datoEntero[10];
	cout<<"_____________________Ingreso de la primera matriz_______________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la primera matriz 
	matriz1[f][c];

	ingresarMatriz(matriz1,f,c);
	cout<<"\n__________________Ingreso de la segunda matriz____________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f1=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c1=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la segunda matriz 
	matriz1[f1][c1];
	ingresarMatriz(matriz2,f1,c1);
	imprimirMatriz(matriz1 ,f,c);
	imprimirMatriz(matriz2 ,f1,c1);
	multiplicarMatriz(matriz1,matriz2,f,c, f1,c1);
	//sumaMatriz(matriz1,f,c,matriz2);
	
}
void ingresarMatriz(int matriz[][TAM1],int filas,int columnas){
	int i,j;
	char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			matriz[i][j]=funcion_atoi(datoEntero,strlen(datoEntero));
		}
	}	
}

void sumaMatriz(int matriz1[][TAM1] ,int filas,int columnas,int matriz2[][TAM1] ){
	cout<<"La suma es: "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
	
}

void imprimirMatriz(int matriz[][TAM1] ,int filas,int columnas){
	cout<<"\nLa matriz es "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	
}


void multiplicarMatriz(int matriz[][TAM1],int matriz1[][TAM1],int fA, int cA, int fB,int cB){
	//misno columnas A= Filas B 
	//Matriz resultante filas A con Columnas B
	cout<<"\nLa matriz multiplicacion es "<<endl;
	int C[TAM][TAM];
	for(int i=0;i<fA;i++){
	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
			 C[i][j]=0;
			for(int k=0; k<cA;k++){
					//cout<<"Antes "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
				C[i][j]=C[i][j]+matriz[i][k]*matriz1[k][j];
				//cout<<"comienzo "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
			}
		}
	}
}
	imprimirMatriz(C ,fA,cB);
}
