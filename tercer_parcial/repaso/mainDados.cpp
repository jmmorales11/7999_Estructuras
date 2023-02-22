#include <iostream>
#include "ListaDoble.cpp"
#include "validar.h"
using namespace std;
void lanzar_dados(ListaDoble<int> *dados, int suma_actual, int suma_objetivo, int caras_dado, int dado_actual, int num_dados);
void imprimir(ListaDoble<int> *dados, int num_dados);
void imprimir(ListaDoble<int> *dados, int num_dados) {
   NodoDoble<int> *aux = dados->getPrimero();
    while(aux!=NULL){
    	cout<<aux->getObjeto();
    	aux = aux->getSiguiente();
	}
	cout<<endl;
}

void lanzar_dados(ListaDoble<int> *dados, int suma_actual, int suma_objetivo, int caras_dado, int dado_actual, int num_dados) {
    if (dado_actual == num_dados) {
        if (suma_actual >= suma_objetivo) {
            imprimir(dados, num_dados);
        }
    } else {
        for (int i = 1; i <= caras_dado; i++) {
            dados->insertarPorCola(i);
            lanzar_dados(dados, suma_actual + i, suma_objetivo, caras_dado, dado_actual + 1, num_dados);
            dados->eliminarPorCola(); 
			}
    }
}
int main() {
    int num_dados = 3;
    int suma_objetivo;
    int caras_dado = 6;
    char datoEntero[100];
    ListaDoble<int> *dados = new ListaDoble<int>();
    str_cpy(datoEntero, ingresarDatosEnteros("\nIngrese el valor de la suma: "));
    cout<<endl;
    suma_objetivo = funcion_atoi(datoEntero,strlen(datoEntero));
    lanzar_dados(dados, 0, suma_objetivo, caras_dado, 0, num_dados);
    return 0;
}