#include <iostream>
#include "Logo.cpp"
#include <ctime>
#include "Lista.cpp"
#include <stdlib.h>
using namespace std;
int main(int arg, char** argv){
	Lista *lst= new Lista();
	//lst->mostrarLista();
	system("cls");
	mostrarLogo();
	lst->ingresarobjeto(*lst);
}
