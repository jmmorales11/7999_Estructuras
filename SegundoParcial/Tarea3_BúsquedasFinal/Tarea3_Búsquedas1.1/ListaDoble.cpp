/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include "ListaDoble.h"
#define Nombre_Archivo "empleados.txt"

template <typename T> 
ListaDoble<T>::ListaDoble()
{
	this->primero=NULL;
	this->actual=NULL;
	this->numNodos=0;
}
 
/**
 * Devuelve verdadero si la lista está vacía, falso en caso contrario.
 * 
 * @return un valor booleano.
 */
template <typename T>
bool ListaDoble<T>::getListaVacia()
{
	return (this->primero==NULL);
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param first El primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::setPrimero(NodoDoble<T> *first)
{
	primero = first;
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void ListaDoble<T>::setActual(NodoDoble<T> *now)
{
	actual = now;
}
  
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoDoble<T> *ListaDoble<T>::getPrimero()
{
	return primero;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El nodo real.
 */
template <typename T>
NodoDoble<T> *ListaDoble<T>::getActual()
{
	return actual;
}

/**
 * Devuelve el número de nodos de la lista.
 * 
 * @return El número de nodos en la lista.
 */
template <typename T>
int ListaDoble<T>::getNumNodos() {
	return this->numNodos;
}
//metodos de orden de la ListaDoble
  
/**
 * Inserta un nuevo nodo al principio de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCabeza(T objT)
{

  	
	NodoDoble<T> *nuevoNody=new NodoDoble<T>(objT,NULL,NULL);
	if(getListaVacia()){	
	nuevoNody->setSiguiente(this->primero);
	setPrimero(nuevoNody);
	setActual(nuevoNody);
	this->numNodos++;
	}else{	
	nuevoNody->setSiguiente(this->primero);
	this->primero->setAnterior(nuevoNody);
	setPrimero(nuevoNody);
	this->numNodos++;
	}

}
  
/**
 * Inserta un empleado al final de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCola(T objT)
{

  	
	 
	NodoDoble<T> *nuevoNody=new NodoDoble<T>(objT,NULL,NULL);
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{	
		this->actual->setSiguiente(nuevoNody);	
		nuevoNody->setAnterior(getActual());
		setActual(nuevoNody);
		this->numNodos++;
	}

}

 
/**
 * Inserta un nodo entre dos nodos.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarEntre(T objT){
	

  
	  
	NodoDoble<T> *nuevoNody=new NodoDoble<T>(objT,NULL,NULL);
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{
	    pos=objValidar.casteoEnteros(posC,"\nIngrese N del Nodo debajo del cual desea ingresar el dato: ");
		int i=1;
		NodoDoble<T> *aux=this->primero;
		while(aux!=NULL)
		{
			if(pos==0){
			cout<<"\nLa posicion no corresponde al numero nodos "<<endl;
			
			break;
			
			}else if(pos==numNodos){
				insertarPorCola(objT);
				
				break;
			}
			else if (pos>numNodos)
			{
			cout<<"\nLa posicion excede el numero de nodos "<<endl;
			break;
			}			
			else if(pos==i)
			{
				this->numNodos++;
				nuevoNody->setSiguiente(aux->getSiguiente()); 
				aux->getSiguiente()->setAnterior(nuevoNody);
				nuevoNody->setAnterior(aux); 
				aux->setSiguiente(nuevoNody);
				break;
			}
			aux=aux->getSiguiente();
			
			i++;	
		}
	}

}
  
/**
 * Elimina el primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCabeza(){
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoDoble<T> *nodoAuxiliar = this->primero->getSiguiente();
		
		primero=NULL;
		this->numNodos--;
		setPrimero(nodoAuxiliar);
	}
	
}

/**
 * Elimina el último nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCola(){
	
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else if(numNodos==1){
		eliminarPorCabeza();
		}else{
		NodoDoble<T> *nodoAuxiliar = this->primero;
		NodoDoble<T> *nodoAnterior = NULL; 
		while(nodoAuxiliar->getSiguiente()!=NULL)
        {
				nodoAnterior=nodoAuxiliar;
                nodoAuxiliar = nodoAuxiliar->getSiguiente();
        }
		actual=NULL;
		this->numNodos--;
		nodoAnterior->setSiguiente(NULL);
		setActual(nodoAnterior);
	}
	
}
 
/**
 * Elimina un nodo de la lista, pero no funciona
 * 
 * @param pos posición del nodo a eliminar
 */
template <typename T>
void ListaDoble<T>::eliminarEntre(T objT){

	if(getListaVacia())
	{
		printf("\nNo se puede eliminar debido a que la lista esta vacia");
				
	}
	else
	{

		int i=1;
		NodoDoble<T> *aux=this->primero;
		while(aux)
		{
			
			if(objT==1){
		     eliminarPorCabeza();
			break;
			}else if(objT==numNodos){
				this->eliminarPorCola();
				break;
			}else if(objT==0){
			cout<<"\nLa posicion no corresponde al numero de nodos "<<endl;
			break;
			}
			else if (objT>numNodos)
			{
			cout<<"\nLa posicion excede el numero de nodos "<<endl;
			break;
			}
			else if(objT==i)
			{
				aux->getAnterior()->setSiguiente(aux->getSiguiente());
				aux->getSiguiente()->setAnterior(aux->getAnterior());
				aux=NULL;
				numNodos--;
				break;
				
			}
			aux=aux->getSiguiente();
			
			i++;	
		}
	}
}
  
/**
 * Es una función que imprime la información de los empleados en la lista
 */
template <typename T>
void ListaDoble<T>::mostrarPorCabeza()
{
	int i=1;
 	NodoDoble<T> *aux=this->primero;
  	while(aux){
  	cout<<"\n\tNodo[ "<<i<<" ]: "<<aux->getObjetoT()<<endl;
  	
  	aux=aux->getSiguiente();
  	i++;
  	}
	
}

template <typename T>
T ListaDoble<T>::getPos(T objT){
		int i=1;
		NodoDoble<T> *aux=this->primero;		
		while(aux)		
		{
			
			if(objT==i)
			{
			return aux->getObjetoT();
			break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
return 0;
}

template <typename T>
T ListaDoble<T>::getPosNodo(T objT){
		int i=1;
		NodoDoble<T> *aux=this->primero;		
		while(aux)		
		{
			
			if(objT==aux->getObjetoT())
			{
			return i;
			break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
return 0;
}

template <typename T>
void ListaDoble<T>::ordenamientoBurbuja(){
	NodoDoble<T> *nNodo = this->primero;
	NodoDoble<T> *aux = this->primero;
	int numAux;
	while(nNodo!=NULL){
		aux = nNodo->getSiguiente();
		while(aux!=NULL){
			if(nNodo->getObjetoT()>aux->getObjetoT()){
				numAux = aux->getObjetoT();
				aux->setObjT(nNodo->getObjetoT());
				nNodo->setObjT(numAux);
			}
			aux = aux->getSiguiente();
		}
		nNodo = nNodo->getSiguiente();
	}
}

template <typename T>
bool ListaDoble<T>::busquedaBinaria(T objT){
	NodoDoble<T> *inicio = this->primero;
	NodoDoble<T> *final = this->primero;
	while(final){
		final=final->getSiguiente();
	}
	
	while(inicio != final){
		NodoDoble<T> *medio = inicio;
		if(medio!=NULL && medio->getObjetoT()== objT){
			cout<<"Valor: "<<medio->getObjetoT()<<endl;
			cout<<"Posicion: "<<getPosNodo(medio->getObjetoT())<<endl; 
			return true;
		}
			
		if(medio!=NULL && medio->getObjetoT()>objT){
			final=medio->getAnterior();
			break;
		}
		else
			inicio=medio->getSiguiente();
					
	}
	return false;	
} 

template <typename T>
 void ListaDoble<T>::busquedaSecuencial(T objT){
 	
	 if(getListaVacia())
	{
		printf("\nNo se puede buscar debido a que la lista esta vacia");		
	}
	else
	{
		int i=1;
		bool encontrado = false;
		NodoDoble<T> *aux=this->primero;		
		while(aux)		
		{
			
			if(aux->getObjetoT()==objT)
			{
				printf("\nLa posicion en la que se encontro es-> %d",i);	
				encontrado=true;
				break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
		if(encontrado==false){
			printf("\nNo se ha encontrado el valor ingresado\n");
		}
	}
	
 }