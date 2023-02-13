#include <iostream>
#include "FuncionesHexa_Dec.cpp"
#include "FuncionesHexa_Bin.cpp"
#include <math.h>
using namespace std;
int main(){
//	FuncionesHexa_Dec *Obj= new FuncionesHexa_Dec();
//	Obj->Transformar();
	FuncionesHexa_Bin *Obj1= new FuncionesHexa_Bin();
	Obj1->Transformar();
	return 0;
}