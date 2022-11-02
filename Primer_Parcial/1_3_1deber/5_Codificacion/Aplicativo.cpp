#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Sobrecarga.cpp"
using namespace std;
int main(int argc, char** argv){
	Sobrecarga obj(4,7);
	Sobrecarga obj1(3,4);
	Sobrecarga obj2=obj%obj1;
	//obj2.operator %(obj2);
	obj2.imprimir(obj2);
	cout<<"Objeto 1: ("<<obj.getA()<<","<<obj.getB()<<") \n";
	cout<<"Objeto 2: ("<<obj1.getA()<<","<<obj1.getB()<<") \n";
	if(obj.getA() != obj1.getA() || obj.getB() != obj1.getB()){
		cout<<"El objeto 1 y el objeto 2 son diferentes."<<"\n";
	}

	
	return 0;
}
