
#include "ListaCircularDoble.h"
using namespace std;

void ListaCircularDoble::insertar(informacion *obj){
	Nodo *nuevo = new Nodo(obj);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->siguiente=primero;
		this->primero->anterior=primero;
		this->ultimo=this->primero;
		
	}else{
		this->ultimo->siguiente=nuevo;
		nuevo->siguiente=this->primero;
		nuevo->anterior=this->ultimo;
		this->ultimo=nuevo;
		this->primero->anterior=ultimo;
	}
}

void ListaCircularDoble::Cargar(){
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

string ListaCircularDoble::toString(){
	stringstream s;
	Nodo *p=this-> primero;
	if(this->primero !=NULL){
		do{
		s<<p->obtenerInformacion()->toString()<<endl;
		p=p->siguiente;
		}while (p!=this->primero);
	}else{
		cout<<"La lista esta vacia\n";
	}
	
	return s.str();
}

int ListaCircularDoble::buscarProvincia(char* cedula){
	
	char* auxcedula;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	do{
		auxcedula=letraPrimera(actual->obtenerInformacion()->getId());
		auxcedula=letraPrimera(auxcedula);
		cout<<auxcedula<<endl;
		if(auxcedula==cedula){
			cout<<"Cedularepetida"<< cont;	
			cont++;
		}
		actual=actual->siguiente;	
	}while(actual !=this->primero );
	return cont;	
}

void ListaCircularDoble::contarProvincia(){
	string auxP;
	int i=0, valor;
	char* com;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	while(i<=24){
		com=numeros(i);
		cout<<com<<"   AQUI"<<endl;
		valor=this->buscarProvincia(com);
		if (valor>=1){
			cout<< " La provincia "<< com<< "Se repite "<<valor;
		}else{
			cout<<"";
		}
		i++;	
	}
	
		
}


bool ListaCircularDoble::buscarObj(int cedula){
	bool afirmar=false;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	do{
		cont++;
		if(actual->obtenerInformacion()->getId()==cedula){
			afirmar=true;
			cout<<actual->obtenerInformacion()->toString()<<endl;
			break;
		}
		actual=actual->siguiente;	
	}while(actual !=this->primero && afirmar!= true);

	if(afirmar==true){
		printf("Persona encontrada\n");	
		return true;
	}
	else {
		//cout<<"La cedula no esta registrada"<<endl;
		return false;
	}

}

void ListaCircularDoble::eliminar(string elemento){
	//if (!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la ListaCircularDoble
		do{
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}while (aux_borrar !=this->primero && aux_borrar->obtenerInformacion()->getId() ==elemento);
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

bool ListaCircularDoble::eliminarApell(string elemento){
	//
	Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la ListaCircularDoble
		do{
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}while (aux_borrar !=this->primero && aux_borrar->obtenerInformacion()->getApellido() ==elemento);
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
void ListaCircularDoble::buscarApellido(string apellido){
	//
	bool afirmar=false;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	do{
		
		if(actual->obtenerInformacion()->getApellido()==apellido){
			afirmar=true;
			cont++;
			cout<<actual->obtenerInformacion()->toString()<<endl;
			break;
		}
		actual=actual->siguiente;	
	}while(actual!=this->primero )

	if(afirmar==true){
		printf("Persona encontrada\n");	
	//	return true;
	}
	else {
		//cout<<"El elemento No se encuentra en la ListaCircularDoble"<<endl;
	//	return false;
	}

}
void ListaCircularDoble::apellidosEliminar(string elemento){
	bool confirmar;
	do{
		confirmar=this->eliminarApell(elemento);
	}while(confirmar==true);
}

void ListaCircularDoble::imprimirCola(ListaCircularDoble lis,int tam){//Camilo
	Nodo *actual;
	actual = this->primero;
	cout<<"\nNULL-->";
	int cont=0;
	ListaCircularDoble list;
	while(cont<tam){
		lis.buscarElemento(tam);
		tam= tam-1;;
		//cout<<"TAM "<<tam<<" AQUI"<<endl;
	}
	cout<<actual->obtenerInformacion()<<" ";
}

void ListaCircularDoble::insertarCola(informacion *obj){//Camilo
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

void ListaCircularDoble::buscarElemento(int pos){
	Nodo *actual;
	bool afirmar=false;
	actual = this->primero;
	int cont=0;
	do{
		
		if(cont==pos){
			afirmar=true;
			cout<<actual->obtenerInformacion();
		}
		cont++;
		actual=actual->siguiente;	
	}while(actual !=this->primero  );
	
}
/*




void ListaCircularDoble::eliminar(int elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	do{
		cont++;
		if(actual->obtenerInformacion()->getId()==elementoBuscar){
			delete actual;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = this->ultimo;
				this->ultimo->siguiente = this->primero;
			}else if(actual==this->ultimo){
				this->ultimo = antes;
				this->ultimo->siguiente=this->primero;
				this->primero->anterior=this->ultimo;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}while(actual !=this->primero&&afirmar!= true);
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}

void ListaCircularDoble::eliminarApellido(string elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	do{
		cont++;
		if(actual->obtenerInformacion()->getNombre()==elementoBuscar){
			delete actual;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = this->ultimo;
				this->ultimo->siguiente = this->primero;
			}else if(actual==this->ultimo){
				this->ultimo = antes;
				this->ultimo->siguiente=this->primero;
				this->primero->anterior=this->ultimo;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}while(actual !=this->primero);
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}

///////////////////////////////////////////////////////////////////////////
/*void ListaCircularDoble::mostrarLista(){
	Nodo *aux = this->primero;
	int posicion=1;
	if(this->primero !=NULL){
		do{
			cout<<posicion<<"-> "<<aux->valor<<"\n";
			aux = aux->siguiente;
			posicion++;
		}while(aux!=this->primero);
	}else{
		cout<<"La lista esta vacia\n";
	}
}
void ListaCircularDoble::buscar(int elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	do{
		cont++;
		if(actual->valor==elementoBuscar){
			afirmar=true;
			veces++;
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
		}
		actual=actual->siguiente;
		
	}while(actual !=this->primero&&afirmar!= true);
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
void ListaCircularDoble::eliminar(int elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	do{
		cont++;
		if(actual->valor==elementoBuscar){
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = this->ultimo;
				this->ultimo->siguiente = this->primero;
			}else if(actual==this->ultimo){
				this->ultimo = antes;
				this->ultimo->siguiente=this->primero;
				this->primero->anterior=this->ultimo;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}while(actual !=this->primero&&afirmar!= true);
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}*/
