#include "Nodo.h"

class ArbolRadix {
	public:
	Nodo* raiz;
	public:
	
  	ArbolRadix();
  	void insertar(string palabra);
  	bool buscar(string palabra);
  	void imprimir(Nodo* nodo, string prefijo);
    void imprimir2();
    void imprimir3(Nodo* nodo, string prefijo, int nivel) ;
    void imprimirDife(Nodo* nodo, string prefijo, int nivel);
    bool eliminar(Nodo* nodo, string palabra, int nivel);
    void NI(Nodo* nodo, int nivel);
    void dibujarCirculos(Nodo* nodo, int x, int y, string prefijo,int nivel  );
};