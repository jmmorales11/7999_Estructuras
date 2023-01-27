#include "Nodo.h"

class ArbolRadix {
	public:
	Nodo* raiz;
	public:
	
  	ArbolRadix();
  	void insertar(string palabra);
  	bool buscar(string palabra);
  	void imprimir(Nodo* nodo, string prefijo);
    void imprimirDife(Nodo* nodo, string prefijo, int nivel);
    bool eliminar(Nodo* nodo, string palabra, int nivel);
    void NI(Nodo* nodo, int nivel);
    void recorrer(Nodo *nodo, int x, int y, int);
    void tamPantalla(int& ancho, int& altura);
    const int anch = 800;
    const int altu = 60;
};