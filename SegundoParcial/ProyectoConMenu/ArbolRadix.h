#include "Nodo.cpp"

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
    void recorrer(Nodo *nodo, int x, int y);
    void tamPantalla(int& ancho, int& altura);
};