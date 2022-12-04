/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Miercoles, 30 de nombiebre de 2022 21:17:59
 * Purpose: ROL DE PAGO
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
 ///SIRVE
#include "Lista.h"
#include "Letra.cpp"
using namespace std;
Lista::Lista(){
	this->primero=NULL;
	this->actual=NULL;
}

void Lista::insertar(informacion *obj){
	Nodo *nuevo=new Nodo(obj);
	if (listaVacia()){
		this->primero=nuevo;
	}
	else{
		this->actual->siguiente=nuevo;
	}
	this->actual=nuevo;
}
string Lista::toString(){
	stringstream s;
	Nodo *p=this-> primero;
	while (p!=NULL){
		s<<p->obtenerInformacion()->toString()<<endl;
		p=p->siguiente;
	}
	return s.str();
}

bool Lista::buscarObj(int cedula){
	bool afirmar=false;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	while(actual!=NULL ){
		cont++;
		if(actual->obtenerInformacion()->getId()==cedula){
			afirmar=true;
			cout<<actual->obtenerInformacion()->toString()<<endl;
			break;
		}
		actual=actual->siguiente;	
	}

	if(afirmar==true){
		printf("Persona encontrada\n");	
		return true;
	}
	else {
		//cout<<"El elemento No se encuentra en la lista"<<endl;
		return false;
	}

}

void Lista::eliminar(int elemento){
	//if (!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la lista
		while (aux_borrar !=NULL && aux_borrar->obtenerInformacion()->getId() !=elemento){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		//No existe el elemento
		if(aux_borrar==NULL){
			cout<<"\nEl elemento no ha sido encontrado"<<endl;
		}else if (anterior==NULL){
			primero=primero->siguiente;
			delete aux_borrar;
		}else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
}

void Lista::eliminarApellidos(char elemento){
	//if (!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la lista
		while (aux_borrar !=NULL ){
			cout<<"Aqui"<<endl;
			if(aux_borrar != NULL && letraPrimera( aux_borrar->obtenerInformacion()->getNombre())==elemento){
				cout<<"Encontrado"<<endl;
				if (anterior==NULL){
					primero=primero->siguiente;
					delete aux_borrar;
					cout<<"Borrar"<<endl;
				}else{
					anterior->siguiente=aux_borrar->siguiente;
					delete aux_borrar;
					cout<<"Borrar 2"<<endl;
				}	
			}else{
				anterior=aux_borrar;
				aux_borrar=aux_borrar->siguiente;
				cout<<"Nada"<<endl;
			}
						
		}
		//No existe el elemento
		if(aux_borrar==NULL){
			cout<<"\nEl elemento no ha sido encontrado"<<endl;
		}
}
bool Lista::eliminarApell(string elemento){
	//
	Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la lista
		while (aux_borrar !=NULL && aux_borrar->obtenerInformacion()->getApellido() !=elemento){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		//No existe el elemento
		if(aux_borrar==NULL){
			return false;
			cout<<"\nEl elemento no ha sido encontrado"<<endl;
		}else if (anterior==NULL){

			primero=primero->siguiente;
			delete aux_borrar;
		}else{

			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
}
void Lista::buscarApellido(string apellido){
	//
	bool afirmar=false;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	while(actual!=NULL ){
		
		if(actual->obtenerInformacion()->getApellido()==apellido){
			afirmar=true;
			cont++;
			cout<<actual->obtenerInformacion()->toString()<<endl;
			break;
		}
		actual=actual->siguiente;	
	}

	if(afirmar==true){
		printf("Persona encontrada\n");	
	//	return true;
	}
	else {
		//cout<<"El elemento No se encuentra en la lista"<<endl;
	//	return false;
	}

}
void Lista::apellidosEliminar(string elemento){
	bool confirmar;
	do{
		confirmar=this->eliminarApell(elemento);
	}while(confirmar==true);
}

void Lista::imprimirCola(Lista lis,int tam){//Camilo
	Nodo *actual;
	actual = this->primero;
	cout<<"\nNULL-->";
	int cont=0;
	Lista list;
	while(cont<tam){
		lis.buscarElemento(tam);
		tam= tam-1;;
		//cout<<"TAM "<<tam<<" AQUI"<<endl;
	}
	cout<<actual->obtenerInformacion()<<" ";
}

void Lista::insertarCola(informacion *obj){//Camilo
	Nodo *nuevo=new Nodo(obj);
	
	nuevo->siguiente=NULL;
	if(listaVacia()){
		this->primero=nuevo;
	}
	else{
		Nodo *aux= this->primero;
		while(aux->siguiente !=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	
}

void Lista::buscarElemento(int pos){
	Nodo *actual;
	bool afirmar=false;
	actual = this->primero;
	int cont=0;
	while(actual !=NULL  ){
		
		if(cont==pos){
			afirmar=true;
			cout<<actual->obtenerInformacion();
		}
		cont++;
		actual=actual->siguiente;	
	}
	
}
/*
void Lista::eliminar(int cedula){
	bool afirmar=false;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	while(actual!=NULL ){
		cont++;
		if(actual->obtenerInformacion()->getId()==cedula){
			afirmar=true;
			delete actual;
		}
		actual=actual->siguiente;	
	}
	if(afirmar==true){
		printf("Persona eliminada\n");	
	}
	else {
		cout<<"El elemento No se encuentra en la lista"<<endl;

	}
}*/
/*
void Lista::mostrarLista(){
	Nodo *tmp=this->primero;
	while(tmp){
		cout<<tmp->valor<<"-->";
		tmp=tmp->siguiente;
	}
	cout<<"NULL";





/*


void Lista::buscarElemento(int pos){
	Nodo *actual;
	bool afirmar=false;
	actual = this->primero;
	int cont=0;
	while(actual !=NULL  ){
		
		if(cont==pos){
			afirmar=true;
			cout<<actual->valor<<" --> ";
		}
		cont++;
		actual=actual->siguiente;	
	}
	
}

int Lista::minimoMultiplo(Lista lis){
	long int  mcm1=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	while(num2 != NULL){
		
		
		num2->valor=mcm(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcm1=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}
	return mcm1;
}	

int Lista::maximoDivisor(Lista lis){
	long int  mcd=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	while(num2 != NULL){
		num2->valor=MaxCDiv(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcd=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}
	return mcd;
}	

Lista Lista::copiarLista(Lista  lis){
	
}*/
