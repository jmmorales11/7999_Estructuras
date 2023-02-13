#include <iostream>
#include "FuncionesHexa_Dec.cpp"
#include <math.h>
using namespace std;
int main(){
	FuncionesHexa_Dec *Obj= new FuncionesHexa_Dec();
	cout<<pow(16,3)<<endl;
	Obj->Transformar();

}