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
	string apellido,nombre;
	int horas100,horas50,diasTrabajados,prestamo,sueldoBase,id;
	float vhoras100,vhoras50,totalIngreso,IESS,vprestamoMensual,totalEgresos,totalEntrega;
	
	archivo.open("Rol_PagoAux.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		
	}
	while (!archivo.eof()){
		informacion *obj=new informacion("Morales","Jeimy",1754146676,12.0,12.0,12.0,12.0,12.0,12.0,12.0,12.0,2,12.0,12.0,12.01);
	
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
string Lista::cifras(informacion *obj){
	int n, i=0, cifra[10];
	n = obj->getId();
	while(n>0){
		cifra[i] = n%10;
		n = n/10;
		i++;
	}
//	if(n==0){
	//	return str_cpy("0",to_string(cifra[i-1]));
//	}else
		return to_string(cifra[i-1]*10+cifra[i-2]);
}


bool Lista::buscar(string elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	while(actual !=NULL){
		cont++;
		if(cifras(actual->obtenerInformacion())==elementoBuscar){
			afirmar=true;
			veces++;
		}
		actual=actual->siguiente;
		
	}
	if(afirmar==true){
		if(veces==1){
			cout<<"Se encontro "<<veces<<" una persona de ";
			return true;	
		}else{
			cout<<"Se encontro "<<veces<<" personas de ";
			return true;	
		}	
	}
	else {
		return false;
	}
	
	
}

void Lista::provincias(){
	if(buscar("01")==true)
	{
		cout<<"Azuay ";
		cout<<"\n";	
	}
	if(buscar("02")==true)
	{
		cout<<"Bolivar ";
		cout<<"\n";	
	}
	if(buscar("03")==true)
	{
		cout<<"Caniar ";
		cout<<"\n";	
	}
	if(buscar("04")==true)
	{
		cout<<"Carchi ";
		cout<<"\n";	
	}
	if(buscar("05")==true)
	{
		cout<<"Cotopaxi ";
		cout<<"\n";	
	}
	if(buscar("06")==true)
	{
		cout<<"Chimborazo ";
		cout<<"\n";	
	}
	if(buscar("07")==true)
	{
		cout<<"El Oro ";
		cout<<"\n";	
	}
	if(buscar("08")==true)
	{
		cout<<"Esmeraldas ";
		cout<<"\n";	
	}
	if(buscar("09")==true)
	{
		cout<<"Guayas ";
		cout<<"\n";	
	}
	if(buscar("10")==true)
	{
		cout<<"Loja ";
		cout<<"\n";	
	}
	if(buscar("11")==true)
	{
		cout<<"Guayas ";
		cout<<"\n";	
	}
	if(buscar("12")==true)
	{
		cout<<"Los Rios ";
		cout<<"\n";	
	}
	if(buscar("13")==true)
	{
		cout<<"Manabi ";
		cout<<"\n";	
	}
	if(buscar("14")==true)
	{
		cout<<"Morona Santiago ";
		cout<<"\n";	
	}
	if(buscar("15")==true)
	{
		cout<<"Napo ";
		cout<<"\n";	
	}
	if(buscar("16")==true)
	{
		cout<<"Pastaza ";
		cout<<"\n";	
	}
	if(buscar("17")==true)
	{
		cout<<"Pichincha ";
		cout<<"\n";	
	}
	if(buscar("18")==true)
	{
		cout<<"Tungurahua ";
		cout<<"\n";	
	}
	if(buscar("19")==true)
	{
		cout<<"Zamora Chinchipe ";
		cout<<"\n";	
	}
	if(buscar("20")==true)
	{
		cout<<"Galapagos ";
		cout<<"\n";	
	}
	if(buscar("21")==true)
	{
		cout<<"Sucumbios ";
		cout<<"\n";	
	}
	if(buscar("22")==true)
	{
		cout<<"Orrellana ";
		cout<<"\n";	
	}
	if(buscar("23")==true)
	{
		cout<<"Santo Domingo de los Tsachilas ";
		cout<<"\n";	
	}
	if(buscar("24")==true)
	{
		cout<<"Santa Elena ";
		cout<<"\n";	
	}
}
/*
int Lista::buscarProvincia(char* cedula){
	
	char* auxcedula;
	Nodo *actual =this->primero;
	int cont=0, veces=0;
	while(actual!=NULL ){
		auxcedula=letraPrimera(actual->obtenerInformacion()->getId());
		auxcedula=letraPrimera(auxcedula);
		cout<<auxcedula<<endl;
		if(auxcedula==cedula){
			cout<<"Cedularepetida"<< cont;	
			cont++;
		}
		actual=actual->siguiente;	
	}
	return cont;	
<<<<<<< HEAD
}*/
/*
=======
}

>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
void Lista::contarProvincia(){
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
	
		
<<<<<<< HEAD
}*/


=======
}
*/

>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
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

<<<<<<< HEAD
=======

>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
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
<<<<<<< HEAD
bool Lista::buscar(string elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	while(actual !=NULL){
		cont++;
		if(cifras(actual->obtenerInformacion())==elementoBuscar){
			afirmar=true;
			veces++;
		}
		actual=actual->siguiente;
		
	}
	if(afirmar==true){
		if(veces==1){
			cout<<"Se encontro "<<veces<<" una persona de ";
			return true;	
		}else{
			cout<<"Se encontro "<<veces<<" personas de ";
			return true;	
		}	
	}
	else {
		return false;
	}
	
	
}
=======


>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
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
