//Aplicativo
#include <iostream>
#include "Cproceso.cpp"
int main(int arg, char** argv){
	int a=18,b= 3;
	Cproceso *obj1=new  Cproceso(a,b);
	Cproceso *obj2=new  Cproceso(15,5);
	Cproceso *obj3=new  Cproceso(0,0);
	obj3->relacional(*obj1,*obj2);
	obj1->imprimirObj(*obj1);
	obj1->imprimirObj(*obj2);
	obj1->imprimirObj(*obj3);
	return 0;	
	
	
}

