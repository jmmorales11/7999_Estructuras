#include "FuncionesDEC.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

FuncionesDEC::FuncionesDEC(){
	this->cad= new char[2];
}	
void FuncionesDEC::ingresar(){
	int num;
	cout<<"Ingrese el numero"<<endl;
	cin>>num;
	cout<<"Binario  ";
	Transformar(num,this->cad);
	cout<<endl;
	cout<<"Hexadecimal "<<dec_Hexadecimal(num)<<endl;
	cout<<"Octal  "<<dec_Octal(num)<<endl;
	}
char* FuncionesDEC::Transformar(int val, char* cad){
	if(val >= 1){
		Transformar((val / 2), cad);
		strcpy(cad, itoa((val % 2), cad, 2));
	}
	strcat(cad, "\0");
	cout << cad;
	return cad;
}

string FuncionesDEC::dec_Hexadecimal(int decimal){
	string hex = "";
    char hexValues[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (decimal > 0) {
        hex = hexValues[decimal % 16] + hex;
        decimal /= 16;
    }
//    cout<<hex<<endl;
    return hex;
}

string FuncionesDEC::dec_Octal(int decimal){
	string octal = "";
    while (decimal > 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
//    cout<<octal<<endl;
    return octal;
}