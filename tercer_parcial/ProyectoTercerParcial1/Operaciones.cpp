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
void Operaciones<T>::mostrar(ListaDoble<T> *lista, int x, int y ){
	graficarBigTiempoLineal();
 	NodoDoble<T> *aux=lista->getPrimero();//O(1)
  	while(aux){//O(n)
  		cout<<" ["<<aux->getObjeto()<<"] " ;//O(1)
  		letras(aux->getObjeto(),x, y);
  		x+=40;//O(1)
  		aux=aux->getSiguiente();//O(1)
  	}
	cout<<endl;//O(1)
	//O(1)+O(1)+O(n)*(O(1)+O(1))+O(1)=O(n)
}

template <typename T>
void  Operaciones<T>::dibujar(ListaDoble<T> *lista,ListaDoble<T> *lista1, int x, int y){
	ListaDoble<string> *lista3= new ListaDoble<string>() ;
	ListaDoble<string> *lista4= new ListaDoble<string>();
	ListaDoble<string> *listaI= new ListaDoble<string>();
	copiar(lista,lista3);
	copiar(lista1,lista4);
	interseccionSin(lista3,lista4,listaI);
	borrar(lista3,listaI);
	borrar(lista4,listaI);
	settextstyle(1,0,2);
	int cont=0, f=x,c=y;
//	if (lista3->getListaVacia()==false)
//  	{
	NodoDoble<T> *aux=lista3->getPrimero();
	
	
  	while(aux!=NULL){
  		if(cont%2==0){	
  			c+=50;
  			f=x;
		  }
		letras(aux->getObjeto(),f, c);
  		aux=aux->getSiguiente();
  		f+=50;

  		cont+=1;
  	}
//  }
//  	if (lista4->getListaVacia()==false)
//  	{
  	cont=0;
  	int x1=x+210;
  	f=x1;
  	c=y;
  	NodoDoble<T> *aux1=lista4->getPrimero();
  	while(aux1!=NULL){
  		if(cont%2==0){	
  			c+=50;
  			f=x1;
		  }
		letras(aux1->getObjeto(),f, c);
  		aux1=aux1->getSiguiente();
  		f+=50;

  		cont+=1;
  	}
//  }
// 	if (listaI->getListaVacia()==false)
//  	{
  	settextstyle(1,0,1);
  	cont=0;
  	int x2=x+125;
  	f=x2;
  	c=y+75;
  	NodoDoble<T> *aux2=listaI->getPrimero();
  	while(aux2!=NULL){
  		if(cont%2==0){	
  			c+=30;
  			f=x2;
		  }
		letras(aux2->getObjeto(),f, c);
  		aux2=aux2->getSiguiente();
  		f+=30;
  		cont+=1;
 	}
//	}

}
template <typename T>
void  Operaciones<T>::borrar(ListaDoble<T> *lista,ListaDoble<T> *lista1){
	NodoDoble<T> *aux=lista->getPrimero();//O(1)
	NodoDoble<T> *aux1=lista1->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		aux1=lista1->getPrimero();//O(1)
		while(aux1!=NULL){//O(n)
			if(aux->getObjeto()==aux1->getObjeto()){//O(n)
				lista->eliminarPorValor(aux1->getObjeto());//O(1)
			}
			aux1=aux1->getSiguiente();//O(1)
		}
		aux=aux->getSiguiente();//O(1)			
	}
	
}

template <typename T> 
void Operaciones<T>::uniones(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();//O(1)
    long tiempoEnMicrosegundos;//O(1)
	uniones1();
	NodoDoble<T> *aux=lista1->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		lista3->insertarPorCola(aux->getObjeto());//O(1)
		aux=aux->getSiguiente();//O(1)
	}
	aux=lista2->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		lista3->insertarPorCola(aux->getObjeto());//O(1)
		aux=aux->getSiguiente();//O(1)
	}
	lista3->repetidos();//O(1)
	graficarBigTiempoLineal();
	ejes();
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);//O(1)
	//O(1)+O(1)+O(1)+O(n)*(O(1)+O(1))+O(1)+O(n)*(O(1)+O(1))=O(n)
}

template <typename T> 
void Operaciones<T>::interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();//O(1)
	dibujarInterseccion();
	lista1->repetidos();
	lista2->repetidos();
	NodoDoble<T> *aux=lista1->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		NodoDoble<T> *aux1=lista2->getPrimero();//O(1)
		while(aux1!=NULL){//O(n)
			if(aux->getObjeto()==aux1->getObjeto()){//O(n)
				lista3->insertarPorCola(aux->getObjeto());//O(1)
			}
			aux1 = aux1->getSiguiente();//O(1)
		}
		aux = aux->getSiguiente();//O(1)
	}
	ejes();
	dibujarBigOExponecialAzul();
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);
	//O(1)+O(1)+O(n)*O(1)*O(n)*O(1)*O(1)+O(1)=O(n^2)
}
template <typename T> 
void Operaciones<T>::interseccionSin(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	NodoDoble<T> *aux=lista1->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		NodoDoble<T> *aux1=lista2->getPrimero();//O(1)
		while(aux1!=NULL){//O(n)
			if(aux->getObjeto()==aux1->getObjeto()){//O(n)
				lista3->insertarPorCola(aux->getObjeto());//O(1)
			}
			aux1 = aux1->getSiguiente();//O(1)
		}
		aux = aux->getSiguiente();//O(1)
	}
}
template <typename T> 
void Operaciones<T>::complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();//O(1)
	NodoDoble<T> *aux=lista1->getPrimero();//O(1)
	NodoDoble<T> *aux1=lista3->getPrimero();//O(1)
	if (comparar(lista3,lista1)==true || comparar(lista3,lista2)==true){
		cout<<"El conjunto A o B no estan dentro del conjutno universal"<<endl;
	}else{//O(nlog(n))
		cout<<"Conjunto "<<endl;
		while(aux1!=NULL){//O(n)
			aux=lista1->getPrimero();//O(1)
			while (aux!=NULL){//O(n)
				if(aux->getObjeto()==aux1->getObjeto()){//O(n)	
					lista3->eliminarPorValor(aux1->getObjeto());//O(1)
				}
				aux=aux->getSiguiente();//O(1)
			}
			aux1=aux1->getSiguiente();//O(1)
		}	
	}
	dibujarBigOExponecialAzul();
	ejes();
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);
	//O(1)+O(1)+O(1)+O(nlog(n))+O(n)*(O(1)*O(n)*(O(1)*O(1))*O(1))=O(n^2)
}

template <typename T> 
bool Operaciones<T>::comparar(ListaDoble<T> *lista1, ListaDoble<T> *lista2){
	long inicio = obtenerTiempo();//O(1)
	NodoDoble<T> *aux;//O(1)
	NodoDoble<T> *aux1=lista2->getPrimero();//O(1)
	bool val=false;//O(1)
	int cont;//O(1)
	while(aux1!=NULL){//O(n)
		cont=0;//O(1)
		aux=lista1->getPrimero();//O(1)
		while (aux!=NULL){//O(n)
			if(aux->getObjeto()==aux1->getObjeto()){//O(n)
				cont+=1;//O(1)
				break;
			}
			aux=aux->getSiguiente();//O(1)
		}
		if(cont==0){//O(n)
			val=true;//O(1)
			break;
		}
		aux1=aux1->getSiguiente();//O(1)
	}
	ejes();
	dibujarBigOExponecialAzul();
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);
	//O(1)+O(1)+O(1)+O(1)+O(1)+O(n)*(O(1)+O(1))*O(n)*O(1)+O(1)*O(1))+O(1)=O(n^2)
	return val;
}
template <typename T> 
void Operaciones<T>::diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2, ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();//O(1)
	lista1->repetidos();
	lista2->repetidos();
	copiar(lista1,lista3);
	NodoDoble<T> *aux2;//O(1)
	
	NodoDoble<T> *aux=lista3->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		aux2=lista2->getPrimero();//O(1)
		while(aux2!=NULL){//O(n)
			if(aux->getObjeto()==aux2->getObjeto()){//O(n)
				lista3->eliminarPorValor(aux->getObjeto());//O(1)
			}
			aux2 = aux2->getSiguiente();//O(1)
		}
		aux = aux->getSiguiente();//O(1)
	}
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);
	ejes();
	dibujarBigOExponecialAzul();
	//O(1)+O(1)+O(1)+O(n)*O(1)*O(n)*O(1)*O(1))+O(1)=O(n^2)
}

template <typename T> 
void Operaciones<T>::diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	long inicio = obtenerTiempo();//O(1)
	lista1->repetidos();
	lista2->repetidos();
	ListaDoble<T> *obj= new ListaDoble<T>();//O(1)
	interseccion(lista1,lista2,obj);
	uniones(lista1,lista2,lista3);
	cleardevice();
	diferenciaSimetrica1();
	NodoDoble<T> *aux=obj->getPrimero();//O(1)
	NodoDoble<T> *aux1=lista3->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		aux1=lista3->getPrimero();//O(1)
		while(aux1!=NULL){//O(n)
			if(aux->getObjeto()==aux1->getObjeto()){//O(n)
				lista3->eliminarPorValor(aux->getObjeto());//O(1)
			}
			aux1=aux1->getSiguiente();//O(1)
		}
		aux=aux->getSiguiente();//O(1)			
	}
	ejes();
	dibujarBigOExponecialAzul();
	long final = obtenerTiempo();//O(1)
	tiempo( final - inicio);
	//O(1)+O(1)+O(1)+O(1)+O(n)*O(1)*O(n)*O(1)*O(1))+O(1)=O(n^2)
}

template <typename T>
ListaDoble<T> Operaciones<T>:: copiar(ListaDoble<T> *lis1,ListaDoble<T> *lis2){
	NodoDoble<T> *aux = lis1->getPrimero();//O(1)
	while(aux!=NULL){//O(n)
		lis2->insertarPorCabeza(aux->getObjeto());//O(1)
		aux=aux->getSiguiente();//O(1)
	}
	//O(1)+O(n)+O(1)+O(1)=O(n)
	graficarBigTiempoLineal();
	return *lis2;
}
template <typename T>
long Operaciones<T>:: obtenerTiempo(){
	LineaA();
    struct timeval inicio;//O(1)
    gettimeofday(&inicio, NULL);//O(1)
    return inicio.tv_sec*1000000+inicio.tv_usec;//O(1)
    //O(1)+O(1)+O(1)=O(1)
}