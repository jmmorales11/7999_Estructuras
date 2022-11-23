/***********************************************************************
 * Module:  matrizPrueba.cpp
 * Author:  Jeimy
 * Modified: domingo, 20 de noviembre de 2022 18:38:43
 * Purpose: Implementation of the class matrizPrueba
 ***********************************************************************/

#include "matrizPrueba.h"
#include "validar.cpp"

template <typename T>
T** matrizPrueba<T>::getMatriz(void)
{
   return this->matriz;
}

template <typename T>
T matrizPrueba<T>::getFila(void)
{
   return fila;
}


template <typename T>
void matrizPrueba<T>::setFila(T newFila)
{
   fila = newFila;
}


template <typename T>
T matrizPrueba<T>::getColumna(void)
{
   return columna;
}

template <typename T>
void matrizPrueba<T>::setColumna(T newColumna)
{
   columna = newColumna;
}

template <typename T>
matrizPrueba<T>::matrizPrueba(T **matriz, T fila, T columna)
{
   this->matriz=matriz;
   this->fila=fila;
   this->columna=columna;
}

template <typename T>
matrizPrueba<T>::~matrizPrueba()
{
   // TODO : implement
}

template <typename T>
matrizPrueba<T> matrizPrueba<T>::ingresarMatriz(matrizPrueba matriz)
{
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(int i=0;i<matriz.getFila();i++){
		for(int j=0;j<matriz.getColumna();j++){
			do{
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(this->getMatriz()+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
			}while (*(*(matriz.getMatriz()+i)+j)==NULL);
		}
	}
	return matriz;
}

template <typename T>
matrizPrueba<T> matrizPrueba<T>::mostrarMatriz(matrizPrueba matriz)
{
   // TODO : implement
}
