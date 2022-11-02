#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Sobrecarga.cpp"
using namespace std;
int main(int argc, char** argv){
	Sobrecarga obj(4,5);
	Sobrecarga obj1(4,3);
	Sobrecarga obj2=obj%obj1;
	//obj2.operator %(obj2);
	obj2.imprimir(obj2);
	
	
	return 0;
}
