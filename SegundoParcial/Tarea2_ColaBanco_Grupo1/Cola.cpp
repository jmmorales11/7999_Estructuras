/*********
UFA - ESPE
AUTORES: MatÃ­as PadrÃ³n,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÃ“N: 19/12/2022
FECHA DE MODIFICACIÃ“N: 19/12/2022
Grupo1-GestiÃ³n banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
 *********/

#include "Cola.h"
#include <iomanip>
using namespace std;

template <typename T> 
Cola<T>::Cola()
{
	this->primero=NULL;
	this->actual=NULL;
	this->numNodos=0;

}

template <typename T> 
Cola<T>::~Cola()
{
   // TODO : implement
}
template <typename T> 
void Cola<T>::push(Persona *persona){

	NodoSimple *aux=this->primero;
	bool comprobar =true;
	while(aux){
	if(aux->getObjP()->getCedula()==persona->getCedula()){
	comprobar=false;
	break;
	}
	aux = aux->getSiguiente();
  	}
	if(comprobar){
	NodoSimple *nuevo=new NodoSimple(persona,NULL);
	if(getListaVacia())
	{
		setPrimero(nuevo);
	}
	else
	{
		this->actual->setSiguiente(nuevo);
	}
	setActual(nuevo);
	this->numNodos++;
	}else{
		cout<<"\nError: el cliente ya existe en el registro, vuelva a intentar."<<endl;
		
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Cola::eliminarPorCabeza()
// Purpose:    Implementation of Cola::eliminarPorCabeza()
// Return:     int
////////////////////////////////////////////////////////////////////////
 template <typename T> 
void Cola<T>::pop()
{
   	if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoSimple*nodoAuxiliar =  this->primero->getSiguiente();
		this->primero=NULL;
		this->numNodos--;
		setPrimero(nodoAuxiliar);
	}
}


template <typename T> 
void Cola<T>::mostrar(){
	int i=1;
 	NodoSimple *aux=this->primero;
  	cout<<"\n\tCLIENTES ALMACENADOS "<<endl;
  	while(aux){
    cout<<"\n||||||||||||"<<"N("<<i<<")"<<"||||||||||||"<<endl;
  	cout<<"\nNombre: "<<aux->getObjP()->getNombre()<<endl;
  	cout<<"Apellido: "<<aux->getObjP()->getApellido()<<endl;
  	cout<<"Cedula: "<<aux->getObjP()->getCedula()<<endl;
	cout<<"Edad:"<<aux->getObjP()->calcularEdad()<<endl;
  	aux=aux->getSiguiente();
  	i++;
  	}
}

template <typename T> 
void Cola<T>::toString(){
	stringstream s;
	NodoSimple *p=this-> primero;
	while (p!=NULL){
		cout<<p->getObjP()->toString()<<endl;
		p=p->getSiguiente();
	}

}

template <typename T> 
void Cola<T>::mostrarTabla(Persona *p){

 	NodoSimple *aux=this->primero;
 	float i=0,suma=0,sumaNoCajero=0,sumaSer=0,sumaEntre=0;
 	int cont=0,llegadasig, llegada=p->generarTiempoRandom(1), tiempoEspera=0, nCajero=0, tServicio=p->generarTiempoRandom(0), tSalida, tELlegada=llegada;
 	cout<<"\nN°\tT llegada\t T espera\t T no trabaja el cajero \tT Servicio \t T Salida\tT entre llegada"<<endl;
  	
  	while(aux!=NULL){
  		cont+=1;
  		sumaNoCajero=nCajero+sumaNoCajero;
		sumaSer=sumaSer+tServicio;
		sumaEntre=sumaEntre+tELlegada;
		suma=suma+tiempoEspera;
  		llegadasig=+llegada+p->generarTiempoRandom(llegada);
  		tSalida=p->tiempoSalida(llegada,tiempoEspera,tServicio);
  		if(tiempoEspera>=1)i++;
  		cout<<cont<<"\t  "<<llegada<<"\t\t   "<<tiempoEspera<<"\t\t\t "<<nCajero<<"\t\t\t   "<<tServicio<<"\t\t  "<<tSalida<<"\t\t  "<<tELlegada<<endl;
  		tELlegada=p->tiempoEntreLlegada(llegada,llegadasig);
		llegada=llegadasig;
  		tiempoEspera=p->calcularTSalidaTEntrada(llegadasig,tSalida);
  		nCajero=p->timpoCajero(llegadasig,tSalida);
		tServicio=p->generarTiempoRandom(1);
  		aux=aux->getSiguiente();
  		
  	}
  	cout<<"___________________________________________________________________________________________________________________"<<endl;
  	
  	cout<<"\t\t\t  "<<fixed<<setprecision(2)<<suma/cont<<"\t\t\t"<<sumaNoCajero/cont<<"\t\t\t"<<sumaSer/cont<<"\t\t\t\t  "<<sumaEntre/cont<<endl;
  	cout<<"Usuarios que esperan "<<fixed<<setprecision(0)<<i<<endl;
}

/*
template <typename T> 
void ListaSimple<T>::buscar(int cedula){
	NodoSimple *nodoAuxiliar = primero;
	bool encontrado=false;
	for(int x=0;x<=numNodos;x++)
    {
		if(nodoAuxiliar->getObjEmpleado()->getCedula()==cedula)
		{
			encontrado=true;
			break;
		}
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
    }
	if(encontrado)
	{
		cout<<"\nEl empleado es: "<<nodoAuxiliar->getObjEmpleado()->getNombre()<<" "<<nodoAuxiliar->getObjEmpleado()->getApellido()<<endl;
	} else
	{
		cout<<"\nNo se ha encontrado el valor ingresado."<<endl;
	}
}
*/

template <typename T>
NodoSimple *Cola<T>::getPrimero(void)
{
   return this->primero;
}


template <typename T>
void Cola<T>::setPrimero(NodoSimple *newPrimero)
{
   this->primero = newPrimero;
}


template <typename T>
NodoSimple *Cola<T>::getActual(void)
{
   return this->actual;
}


template <typename T>
void Cola<T>::setActual(NodoSimple *newActual)
{
   this->actual = newActual;
}


template <typename T>
bool Cola<T>::getListaVacia(void)
{
  return (this->primero==NULL);
}
template <typename T>
int Cola<T>::getNumNodos(){
	return numNodos;
}