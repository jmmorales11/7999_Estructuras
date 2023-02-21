
#pragma once

#include <string>
#include <iostream>
using namespace std;

class Nodo{
	private:
		string valor;
		Nodo *siguiente;
		int index;
	public:
		Nodo(string _valor, Nodo *);
    	string getValor(void);
    	void setValor(string newValor);
    	int getIndex();
    	void setIndex(int);
    	Nodo *getSiguiente(void);
    	void setSiguiente(Nodo *newSiguiente);
		~Nodo();
	};
