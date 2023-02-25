#include "Operaciones.h"
#include "maingrafica.cpp"
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>
#include "lineas.h"
using namespace std;
template <typename T> 
Operaciones<T>::Operaciones(){
	
}

template <typename T>
void Operaciones<T>::mostrar(ListaDoble<T> *lista){

	int x=190;
 	NodoDoble<T> *aux=lista->getPrimero();
  	while(aux){
  		cout<<" ["<<aux->getObjeto()<<"] " ;
  		letras(aux->getObjeto(),x, 550);
  		x+=25;
  		aux=aux->getSiguiente();
  	}
	cout<<endl;
}


template <typename T> 
void Operaciones<T>::uniones(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	uniones1();
	NodoDoble<T> *aux=lista1->getPrimero();
	while(aux!=NULL){
		lista3->insertarPorCola(aux->getObjeto());
		aux=aux->getSiguiente();
	}
	aux=lista2->getPrimero();
	while(aux!=NULL){
		lista3->insertarPorCola(aux->getObjeto());
		aux=aux->getSiguiente();
	}
	lista3->repetidos();
	graficarBigTiempoLineal();
	ejes();
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
}

template <typename T> 
void Operaciones<T>::interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	dibujarInterseccion();
	lista1->repetidos();
	lista2->repetidos();
	NodoDoble<T> *aux=lista1->getPrimero();
	while(aux!=NULL){
		NodoDoble<T> *aux1=lista2->getPrimero();
		while(aux1!=NULL){
			if(aux->getObjeto()==aux1->getObjeto()){
				lista3->insertarPorCola(aux->getObjeto());
			}
			aux1 = aux1->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
	ejes();
	dibujarBigOExponecialAzul();
	
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
//	lista3->mostrarPorCabeza();
}

template <typename T> 
void Operaciones<T>::complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	NodoDoble<T> *aux=lista1->getPrimero();
	NodoDoble<T> *aux1=lista3->getPrimero();
	if (comparar(lista3,lista1)==true || comparar(lista3,lista2)==true){
		cout<<"El conjunto A o B no estan dentro del conjutno universal"<<endl;
	}else{
		cout<<"Conjunto "<<endl;
		while(aux1!=NULL){
			aux=lista1->getPrimero();
			while (aux!=NULL){
				if(aux->getObjeto()==aux1->getObjeto()){	
					lista3->eliminarPorValor(aux1->getObjeto());
				}
				aux=aux->getSiguiente();
			}
			aux1=aux1->getSiguiente();
		}	
	}
	dibujarBigOExponecialAzul();
	ejes();
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
//	lista3->mostrarPorCabeza();
	
}

template <typename T> 
bool Operaciones<T>::comparar(ListaDoble<T> *lista1, ListaDoble<T> *lista2){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	NodoDoble<T> *aux;
	NodoDoble<T> *aux1=lista2->getPrimero();
	bool val=false;
	int cont;
	while(aux1!=NULL){
		cont=0;
		aux=lista1->getPrimero();
		while (aux!=NULL){
			if(aux->getObjeto()==aux1->getObjeto()){
				cont+=1;	
				break;
			}
			aux=aux->getSiguiente();
		}
		if(cont==0){
			val=true;
			break;
		}
		aux1=aux1->getSiguiente();
	}
	ejes();
	dibujarBigOExponecialAzul();
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;	
	return val;
}
template <typename T> 
void Operaciones<T>::diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2, ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	lista1->repetidos();
	lista2->repetidos();
	copiar(lista1,lista3);
	NodoDoble<T> *aux2;
	
	NodoDoble<T> *aux=lista3->getPrimero();
	while(aux!=NULL){
		aux2=lista2->getPrimero();
		while(aux2!=NULL){
			if(aux->getObjeto()==aux2->getObjeto()){
				lista3->eliminarPorValor(aux->getObjeto());
			}
			aux2 = aux2->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
}

template <typename T> 
void Operaciones<T>::diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	
	lista1->repetidos();
	lista2->repetidos();
	ListaDoble<T> *obj= new ListaDoble<T>();
	interseccion(lista1,lista2,obj);
	uniones(lista1,lista2,lista3);
	cleardevice();
	diferenciaSimetrica1();
	NodoDoble<T> *aux=obj->getPrimero();
	NodoDoble<T> *aux1=lista3->getPrimero();
	while(aux!=NULL){
		aux1=lista3->getPrimero();
		while(aux1!=NULL){
			if(aux->getObjeto()==aux1->getObjeto()){
				lista3->eliminarPorValor(aux->getObjeto());
			}
			aux1=aux1->getSiguiente();
		}
		aux=aux->getSiguiente();				
	}
	ejes();
	dibujarBigOExponecialAzul();
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
//	lista3->mostrarPorCabeza();
}
template <typename T>
ListaDoble<T> Operaciones<T>:: copiar(ListaDoble<T> *lis1,ListaDoble<T> *lis2){
	long inicio = obtenerTiempo();
	double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
	NodoDoble<T> *aux = lis1->getPrimero();
	while(aux!=NULL){
		lis2->insertarPorCabeza(aux->getObjeto());
		aux=aux->getSiguiente();
	}

	graficarBigTiempoLineal();
	
	long final = obtenerTiempo();
	tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<"El tiempo de ejecucion en microsegundos es: "<<tiempoEnMicrosegundos<<endl<<endl;
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl<<endl;
	return *lis2;
}
template <typename T>
long Operaciones<T>:: obtenerTiempo(){
    struct timeval inicio;
    gettimeofday(&inicio, NULL);
    return inicio.tv_sec*1000000+inicio.tv_usec;
}