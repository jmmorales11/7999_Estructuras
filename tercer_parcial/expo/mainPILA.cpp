#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Pila {
public:
    Pila() : tope(NULL) {}
    void push(int valor) {
        Nodo* nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = tope;
        tope = nuevo;
    }
    int pop() {
        int valor = tope->dato;
        Nodo* eliminar = tope;
        tope = tope->siguiente;
        delete eliminar;
        return valor;
    }
    bool estaVacia() {
        return (tope == NULL);
    }
    int verTope() {
        return tope->dato;
    }
    void mostrarPila() {
        mostrarPilaRecursivo(tope);
    }
private:
    Nodo* tope;
    void mostrarPilaRecursivo(Nodo* actual) {
        if (actual == NULL) {
            return;
        }
        mostrarPilaRecursivo(actual->siguiente);
        cout << actual->dato << " ";
    }
};

int main() {
    Pila pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    cout<<"\n\nMostrar la pila"<<endl;
    cout<<"   ";
    pila.mostrarPila(); // muestra "3 2 1"

    return 0;
}
