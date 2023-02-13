#include <iostream>
#include "FuncionesHexa_Dec.cpp"
#include "FuncionesHexa_Bin.cpp"
#include "FuncionesBin.cpp"
#include <math.h>
#include "FuncionesDec.cpp"
#include "FuncionesOct.cpp"
using namespace std;
int main(){
	Hex_Bin *obj;
	FuncionesBin *Obj2;
	FuncionesHexa_Bin *Obj1;
	FuncionesHexa_Dec *Obj;
	FuncionesOct *obj1;
	string hex, bin, aux, aux1;
	int opcion;
	char datoEntero[10], datoCaracter[100];
	FuncionesDEC *obj2;
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Binario " << endl;
        cout << "\t[2]  Hexadecimal " << endl;
        cout << "\t[3]  Octal " << endl;
        cout << "\t[4]  Decimal " << endl;
		cout << "\t[0]  Salir " << endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
        opcion = funcion_atoi(datoEntero,strlen(datoEntero));
        cout<<"\n";
        switch(opcion){
        	case 1:
        		obj = new Hex_Bin();
        		Obj2= new FuncionesBin();
        		str_cpy(datoCaracter,ingresarBinario("\n\tIngrese el numero en binario "));
        		bin = datoCaracter;
        		obj->setBin(bin);
				aux1 = obj->getBin();
        		obj->setDec(Obj2->bin_dec(aux1));
				cout<<"\nEl numero en decimal es: "<<obj->getDec()<<endl;
				obj->setHex(Obj2->bin_hex(aux1));
				cout<<"\nEl numero en hexadecimal es: "<<obj->getHex()<<endl;
				obj->setOct(Obj2->bin_octal(aux1));
				cout<<"\nEl numero en octal: "<<obj->getOct()<<endl;
				system("PAUSE");
        		break;
        	case 2:
        		obj = new Hex_Bin();
        		Obj= new FuncionesHexa_Dec();
        		Obj1= new FuncionesHexa_Bin();
        		str_cpy(datoCaracter,ingresoHexadecimales("\n\tIngrese el numero en hexadecimal "));
        		hex = datoCaracter;
        		obj->setHex(hex);
				aux = obj->getHex();
				Obj->Transformar(aux);
				obj->setBin(Obj1->Transformar(aux));
				cout<<"\nEl numero en binario es: "<<obj->getBin()<<endl;
				Obj1->bin_octal(obj->getBin());
				system("PAUSE");
        		break;
        	case 3:
        		obj1->ingresar();
        		system("PAUSE");
        		break;
        	case 4:
        		obj2= new FuncionesDEC();
				obj2->ingresar();
				system("PAUSE");
        		break;
        	case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
	}while (opcion!=1|| opcion!=2||opcion !=3||opcion !=4||opcion !=0);
}