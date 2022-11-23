#include <iostream>
#include "Logo.cpp"
#include <ctime>
#include "Lista.cpp"
using namespace std;
int main(int arg, char** argv){
	Lista lst;
	lst.ingresarobjeto(lst);
	lst.mostrarLista();
	mostrarLogo();
	
}
