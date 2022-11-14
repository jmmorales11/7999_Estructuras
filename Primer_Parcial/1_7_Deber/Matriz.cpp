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
	void Matriz<T>::setFilas(int f){
		this->filas=f;
	}
template<typename T>
	int Matriz<T>::getFilas()const{
		return this->filas;
	}
template<typename T>
	void Matriz<T>::setColumnas(int c){
		this->columnas=c;
	}
template<typename T>
	int Matriz<T>::getColumnas()const{
		return this->columnas;
	}
template<typename T>
void Matriz<T>::ingresarMatriz(T **matriz, int filas, int columnas)
{
	Matriz m;
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(m.getFilas()==0;m.getFilas()<m.getFilas();m.getFilas()+1){
		for(m.getColumnas()==0;m.getColumnas()<m.getColumnas();m.getColumnas()+1){
			cout<<"\nDigite un numero: ["<<m.getColumnas()<<" "<<m.getColumnas()<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			(*(*matriz+m.getFilas())+m.getColumnas())==funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
		}
	}
}
template<typename T>
void Matriz<T>::imprimirMatriz(T **matriz, int filas, int columnas)
{
	Matriz m;
   cout<<"\nLa matriz es:\n "<<endl;
	for (int i=0;i<m.getFilas();i++){

		for(int j =0;j<m.getColumnas();j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
template<typename T>
T Matriz<T>::sumaMatriz(T **matriz1, T **matriz2, T **matrizResultado, int filas, int columnas){
	Matriz m;
	if((m.getFilas()==0)&&(m.getColumnas()==0))
		return *(*(matriz1+m.getFilas())+m.getColumnas()) += *(*(matriz2+m.getFilas())+m.getColumnas());
	else{
		if(m.getFilas()>-1){
			m.getColumnas()-1;
			if(m.getColumnas()>=-1)
				*(*(matrizResultado+m.getFilas())+m.getColumnas()) += *(*(matriz1+m.getFilas())+m.getColumnas()) += *(*(matriz2+m.getFilas())+m.getColumnas());
			else
				return **matrizResultado;
			
	}
}
	
}
