#include <iostream>
#include "ListaDoble.cpp"

using namespace std;
void combinaciones(int valor, int num, ListaDoble<int> *lis){
	if(valor==0){
		NodoDoble<int> *aux=lis->getPrimero();
		while (aux!=NULL){
			cout<<aux->getObjeto();
			if(aux->getSiguiente()!=NULL){
				cout<<" + ";
			}
			aux=aux->getSiguiente();
		}
		cout<<endl;
	}
	for(int i = num; i <= valor; i++) {
		lis->insertarPorCola(i);
        combinaciones(valor - i, i,lis);
        lis->eliminarPorCola();
    }	
}
int main(){
	
	ListaDoble<int> *obj= new ListaDoble<int>();
	combinaciones(4,1,obj);
	return 0;
}