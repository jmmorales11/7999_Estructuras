#include "FuncionesBin.h"
#include <string>
#include <math.h>
using namespace std;
FuncionesBin::FuncionesBin(){
	this->lis=new ListaDoble<string>();
	this->lis1=new ListaDoble<string>();
	this->lisHex();
}

string FuncionesBin::bin_hex(string bin){
	string hexadecimal = "";
    string temp = "";
    int contador = 0;
    int decimal = 0;
    for (int i = bin.length() - 1; i >= 0; i--) {
        temp = bin[i] + temp;
        contador++;
        if (contador == 4 || i == 0) {
            decimal = 0;
            for (int j = 0; j < temp.length(); j++) {
                if (temp[j] == '1') {
                    decimal += pow(2, temp.length() - 1 - j);
                }
            }
            if (decimal < 10) {
                hexadecimal = to_string(decimal) + hexadecimal;
            } else {
                char hex = (char) (decimal + 55);
                hexadecimal = hex + hexadecimal;
            }
            temp = "";
            contador = 0;
        }
    }
    return hexadecimal;
}

string FuncionesBin::bin_octal(string bin){
	string octal = "";
    string temp = "";
    int contador = 0;
    int decimal = 0;
    for (int i = bin.length() - 1; i >= 0; i--) {
        temp = bin[i] + temp;
        contador++;
        if (contador == 3 || i == 0) {
            decimal = 0;
            for (int j = 0; j < temp.length(); j++) {
                if (temp[j] == '1') {
                    decimal += pow(2, temp.length() - 1 - j);
                }
            }
            octal = to_string(decimal) + octal;
            temp = "";
            contador = 0;
        }
    }
    return octal;
}

int FuncionesBin::bin_dec(string bin){
	int decimal = 0;
    for (int i = 0; i < bin.length(); i++) {
        if (bin[i] == '1') {
            decimal += pow(2, bin.length() - 1 - i);
        }
    }
    return decimal;
}

void FuncionesBin::lisHex(){
   this->lis->insertarPorCola("0");
   this->lis->insertarPorCola("1");
   this->lis->insertarPorCola("2");
   this->lis->insertarPorCola("3");
   this->lis->insertarPorCola("4");
   this->lis->insertarPorCola("5");
   this->lis->insertarPorCola("6");
   this->lis->insertarPorCola("7");
   this->lis->insertarPorCola("8");
   this->lis->insertarPorCola("9");
   this->lis->insertarPorCola("A");
   this->lis->insertarPorCola("B");
   this->lis->insertarPorCola("C");
   this->lis->insertarPorCola("D");
   this->lis->insertarPorCola("E");
   this->lis->insertarPorCola("F");
   
   this->lis1->insertarPorCola("0000");
   this->lis1->insertarPorCola("0001");
   this->lis1->insertarPorCola("0010");
   this->lis1->insertarPorCola("0011");
   this->lis1->insertarPorCola("0100");
   this->lis1->insertarPorCola("0101");
   this->lis1->insertarPorCola("0110");
   this->lis1->insertarPorCola("0111");
   this->lis1->insertarPorCola("1000");
   this->lis1->insertarPorCola("1001");
   this->lis1->insertarPorCola("1010");
   this->lis1->insertarPorCola("1011");
   this->lis1->insertarPorCola("1100");
   this->lis1->insertarPorCola("1101");
   this->lis1->insertarPorCola("1110");
   this->lis1->insertarPorCola("1111");
}