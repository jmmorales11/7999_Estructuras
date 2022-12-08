#include <string.h>
#include <iostream>

using namespace std;
char *letraPrimera(string str);


char *letraPrimera(string str){
	char codigo[2];
		codigo[0]=str.at(0);
		codigo[1]=str.at(1);
	return codigo;
	
}




