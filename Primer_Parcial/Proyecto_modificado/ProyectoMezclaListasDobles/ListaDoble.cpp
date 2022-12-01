#include "ListaDoble.h"
ListaDoble::ListaDoble(){
	this->primero=NULL;
	this->ultimo=NULL;
}
void ListaDoble::insertar(informacion *obj){
	Nodo *nuevo = new Nodo(obj);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->siguiente=NULL;
		this->primero->anterior=NULL;
		this->ultimo=this->primero;
		
	}else{
		this->ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->anterior=this->ultimo;
		this->ultimo=nuevo;
	}
}
string ListaDoble::toString(){
	stringstream s;
	Nodo *p=this-> primero;
	while (p!=NULL){
		s<<p->obtenerInformacion()->toString()<<endl;
		p=p->siguiente;
	}
	return s.str();
}

bool ListaDoble::buscarObj(int cedula){
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
void ListaDoble::eliminar(int elemento){
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
void ListaDoble::insertarCola(informacion *obj){//Camilo
	Nodo *nuevo=new Nodo(obj);
	
	nuevo->siguiente=NULL;
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->siguiente=NULL;
		this->primero->anterior=NULL;
		this->ultimo=this->primero;
	}
	else{
		Nodo *aux= this->primero;
		while(aux->siguiente !=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	
}
/*
void ListaDoble::mostrarLista(){
	Nodo *aux = this->primero;
	int posicion=1;
	if(aux !=NULL){
		while(aux!=NULL){
			cout<<posicion<<"-> "<<aux->obtenerInformacion()<<"\n";
			aux = aux->siguiente;
			posicion++;
		}
	}else{
		cout<<"La lista esta vacia\n";
	}
}
void ListaDoble::buscar(int elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	while(actual !=NULL&&afirmar!= true){
		cont++;
		if(actual->valor==elementoBuscar){
			afirmar=true;
			veces++;
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
		}
		actual=actual->siguiente;
		
	}
	if(afirmar==true){
		if(veces==1){
			cout<<"Se encontro "<<veces<<" vez"<<endl;	
		}else{
			cout<<"Se encontro "<<veces<<" veces"<<endl;	
		}	
	}
	else {
		cout<<"El elemento "<<elementoBuscar<<" No se encuentra en la lista"<<endl;
	}
	
	
}
void ListaDoble::eliminar(int elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	while(actual !=NULL&&afirmar!= true){
		cont++;
		if(actual->valor==elementoBuscar){
			cout<<"\nEl elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = NULL;
			}else if(actual==this->ultimo){
				
				this->ultimo->siguiente=NULL;
				this->ultimo = antes;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}

int ListaDoble::minimoMultiplo(ListaDoble lis){
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

int ListaDoble::maximoDivisor(ListaDoble lis){
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
*/
