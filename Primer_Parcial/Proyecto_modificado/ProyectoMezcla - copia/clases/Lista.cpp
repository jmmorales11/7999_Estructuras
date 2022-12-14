/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Miercoles, 30 de nombiebre de 2022 21:17:59
 * Purpose: ROL DE PAGO
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
 ///SIRVE
#include "Lista.h"
#include "Archivos.cpp"
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
void Lista::Cargar(){
	ifstream archivo;
	string apellido,nombre,id;
	int horas100,horas50,diasTrabajados,prestamo,sueldoBase;
	float vhoras100,vhoras50,totalIngreso,IESS,vprestamoMensual,totalEgresos,totalEntrega;
	
	archivo.open("Rol_PagoAux.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		
	}
	while (!archivo.eof()){
		informacion *obj=new informacion("Morales","Jeimy","1754146676",12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
	
		archivo>>apellido>>nombre>>id>>totalEntrega>>horas100>>horas50>>diasTrabajados>>prestamo>>sueldoBase>>vhoras100>>vhoras50>>totalIngreso>>IESS>>vprestamoMensual>>totalEgresos;
	//	archivo1<<apellido<<nombre<<id<<totalEntrega<<horas100<<horas50<<diasTrabajados<<prestamo<<sueldoBase<<vhoras100<<vhoras50<<<totalIngreso<<IESS<<vprestamoMensual <<totalEgresos<<"\n";

		obj->setApellido(apellido);
		obj->setNombre(nombre);
		obj->setId(id);
		obj->setHoras100(horas100);
		obj->setHoras50(horas50);
		obj->setDiasTrabajados(diasTrabajados);
		obj->setPrestamo(prestamo);
		obj->setSueldoBase(sueldoBase);
		obj->setVhoras100(vhoras100);
		obj->setVhoras50(vhoras50);
		obj->setIESS(IESS);
		obj->setVprestamoMensual(vprestamoMensual);
		obj->setTotalEntrega(totalEntrega);
		obj->setTotalIngreso(totalIngreso);
		obj->setTotalEgreso(totalEgresos);
		Nodo *nuevo=new Nodo(obj);
		if (!archivo.eof()){
			
			if (listaVacia()){
			this->primero=nuevo;
		}
		else{
			this->actual->siguiente=nuevo;
		}
			this->actual=nuevo;
		}
	}
	archivo.close();
	}

string Lista::toString(){
	stringstream s;
	Nodo *p=this-> primero;
	p->obtenerInformacion()->actualizar();
	while (p!=NULL){
		s<<p->obtenerInformacion()->toString()<<endl;
		p=p->siguiente;
	}
	return s.str();
}
int Lista::buscarProvincia(string codigo){
	
	char* auxcedula;
	Nodo *actual =this->primero;
	int cont=0;
	string numero;
	while(actual !=NULL){
		
		numero=letraPrimera(actual->obtenerInformacion()->getId());
		cout<<"Objeto  "<<numero<<endl;
		cout<<"Codigo "<<codigo<<endl;
		if(numero==codigo){
			cont++;
		}
		actual=actual->siguiente;
	}	
    return cont;
}

void Lista::contarProvincia(){
	Nodo *actual= this->primero;
	string num, cod;
	int cont,i=0;
	while(i<25){
		i++;
		cont=0;
		while(actual !=NULL){
			num=numeros(i);
			cod=letraPrimera(actual->obtenerInformacion()->getId());
			if(cod==num){
				cont++;
			}
			actual=actual->siguiente;
		}
		if(cont>=1){
			cout<<"----------------------------------------------"<<endl;
			cout<<"El codigo de la provincia de ";
			provincias(i);
			cout<<" se repite "<< cont<<" veces "<<endl;
			cout<<"----------------------------------------------"<<endl;
		}
		
		actual=this->primero;		
	}
	
	
/*	
	
	
	
	
	
	for(int i=0;i<25;i++){
		cont=0;
		num=numeros(i);
		cont=this->buscarProvincia(num);
		if(cont>0){
			provincias(i);
			cout<<" se repite "<<cont<<endl;
		}else{
			
		}
		
	}	*/
		
}


bool Lista::buscarObj(string cedula){
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

void Lista::eliminar(string elemento){
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
