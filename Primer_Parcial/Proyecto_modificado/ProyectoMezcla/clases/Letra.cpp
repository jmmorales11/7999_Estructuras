#include <string.h>
#include <iostream>
using namespace std;
char Letra(char* palabra);
char letraPrimera(string str);

char Letra(char* palabra){
	return palabra[0];
}

char letraPrimera(string str){
	return str.at(0);
	
}


