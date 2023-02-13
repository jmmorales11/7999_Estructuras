#include "FuncionesHexa_Bin.h"
#include <string>
#include <math.h>
using namespace std;
FuncionesHexa_Bin::FuncionesHexa_Bin(){
	this->lis=new ListaDoble<string>();
	this->lis1=new ListaDoble<string>();
	this->lisHex();
}
string FuncionesHexa_Bin::Transformar(string hex){
	char aux[100];
	int centinela=0;
	string str=hex,caracter, listaBin, bin;
	int tam = str.length();
	for(int i=0; i<tam;i++){
		caracter = str[i];
		centinela = lis->buscar(caracter);
		listaBin = lis1->buscarPosicion(centinela+1);
		bin.append(aux).append(listaBin.c_str());
	}
	return bin;
}

string FuncionesHexa_Bin::bin_octal(string binario){
	Hex_Bin *obj = new Hex_Bin();
	string octal = "";
	string temp = "";
	int contador = 0;
	int decimal = 0;
	int tam = binario.length();
	for (int i = tam - 1; i >= 0; i--) {
        temp = binario[i] + temp;
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
    obj->setOct(octal);
    cout<<"\nEl numero en octal es: "<<obj->getOct()<<endl;
    return obj->getOct();
}

void FuncionesHexa_Bin::lisHex(void){
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