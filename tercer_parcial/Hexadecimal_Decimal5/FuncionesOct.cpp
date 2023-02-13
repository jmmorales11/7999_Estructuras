#include "FuncionesOct.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "validar.h"
using namespace std;


void FuncionesOct::ingresar(){
	string octal;
	char datoCaracter[100];
	str_cpy(datoCaracter,ingresarOctales("\n\tIngrese el numero en octal "));
	octal = datoCaracter;
	cout<<"\nDecimal "<<oct_dec(octal)<<endl;
	cout<<"Hexadecimal "<<octal_Hex(octal)<<endl;
	}
int FuncionesOct::oct_dec(const string& octal ){
	int decimal = 0;
    int power = 1;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * power;
        power *= 8;
    }
    return decimal;
}

string FuncionesOct::octal_Hex(const string& octal){
	int decimal = 0;
    int aux = 1;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * aux;
        aux *= 8;
    }
    string hexa = "";
    char hexadecimal[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (decimal > 0) {
        hexa = hexadecimal[decimal % 16] + hexa;
        decimal /= 16;
    }
    return hexa;
}