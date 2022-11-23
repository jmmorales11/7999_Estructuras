/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "Matriz.h"
#include "validar.cpp"

template<typename T>
	void Matriz<T>::setMatriz(T m){
		this->**matriz=m;
	}
template<typename T>
	T Matriz<T>::getMatriz(){
		return this->**matriz;
	}
	template<typename T>
	void Matriz<T>::setDato(T d){
		this->dato=d;
	}
template<typename T>
	T Matriz<T>::getDato(){
		return this->dato;
	}
template<typename T>
	void Matriz<T>::setFilas(T f){
		this->filas=f;
	}
template<typename T>
	T Matriz<T>::getFilas()const{
		return this->filas;
	}
template<typename T>
	void Matriz<T>::setColumnas(T c){
		this->columnas=c;
	}
template<typename T>
	T Matriz<T>::getColumnas()const{
		return this->columnas;
	}
template<typename T>
void Matriz<T>::ingresarMatriz(T **matriz, T filas, T columnas)
{
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			do{
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(matriz+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
			}while (*(*(matriz+i)+j)==NULL);
		}
	}
}
template<typename T>
void Matriz<T>::ingresarMatrizRecursiva(T **matriz,T **matriz1 ,T filas, T columnas)
{
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			do{
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(matriz+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			*(*(matriz1+i)+j)=*(*(matriz+i)+j);
			}while (*(*(matriz+i)+j)==NULL);
		}
	}
}
template<typename T>
void Matriz<T>::imprimirMatriz(T **matriz, T filas, T columnas)
{
//	cout<<"\nTEMPLATE\n "<<endl;
   	cout<<"\nLa matriz es:\n "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
			//printf("  %p",&*(*(matriz+i)+j));
		}
		cout<<"\n";
	}

}
template<typename T>

T Matriz<T>::sumaMatrizRecursiva(T **matriz1, T **matriz2,T **resultado, T f, T c,Matriz funcion){
	
	if((f==0)&&(c==0)){//caso base solo se va a terminar cuando 0 0
		*(*(resultado+f)+c)=*(*(matriz1+f)+c) + *(*(matriz2+f)+c);
		return *(*(resultado+f)+c);
	}else{

			
		if((f>=0)&&(c>=0)){	
			*(*(resultado+f)+c)=*(*(matriz1+f)+c) + *(*(matriz2+f)+(c));
			c--;
			return funcion.sumaMatrizRecursiva(matriz1, matriz2,resultado, f, c,funcion);
				
		}	
		c=sizeof(matriz1[0])/sizeof(matriz1[0][0]);
		f--;
		return funcion.sumaMatrizRecursiva(matriz1, matriz2,resultado, f, c,funcion);
		
	}

}

template<typename T>
void Matriz<T>::multiplicarMatriz(T **matrizA, T **matrizB,T **resultado ,T **resultado1,T fA, T cA, T fB, T cB)
{	int suma=0;
   //misno columnas A= Filas B
	//Matriz resultante filas A con Columnas B
	Matriz funcion;
	int k;
	cout<<"\nLa multiplicacion de las matrices es \n "<<endl;

	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
			suma=0;
			
			for( k=0; k<cA;k++){
				(*(*(resultado+i)+k))= ((*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j)));
				suma=suma+(*(*(resultado+i)+k));
			
				*(*(resultado1+i)+j)=suma;//memoria	
			}	
			cout<<suma<<" | ";
			
		}printf("\n");
		
	}

}
template<typename T>
void Matriz<T>::sumaMatriz(T **matriz1, T filas, T columnas, T **matriz2)
{
	cout<<"\nLa suma de las matrices es "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
}

template<typename T>
void Matriz<T>::multiplicacion( T **matrizA,T **matrizB, T **matrizResultado, T f, T c, T suma, T i, T k, T j, Matriz funcion) {
	if (k == c) {
        (*(*(matrizResultado + i) + j)) = suma;
        j++;
        k = 0;
        suma = 0;
        if (j == c) {
            i++;
            j = 0;
        }
    }
    if (i == f) return;
    suma += *(*(matrizA + i) + k) * *(*(matrizB + k) + j);
    cout<<suma<<endl;
    k++;
    funcion.multiplicacion(matrizA, matrizB, matrizResultado, f, c,  suma, i, k, j,funcion);
}

template<typename T>
void Matriz<T>::multiplicacionNveces(Matriz funcion, T valor){
	   // funcion.multiplicacion(matrizA, matrizB, matrizResultado, f, c, c1, suma, primero, segundo, i, k, j,funcion);
}
