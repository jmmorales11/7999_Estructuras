#include <iostream>
#include "Lista.cpp"
#include "validar.h"
using namespace std;
int main() {
	Lista lst;
	Lista lst1;
	Lista lst2;
	long int mcm,mcd;
	int cantidad, num,contador=0;
	char datoEntero[10];
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cantidad de datos que desea introducir:  "));
	cantidad=funcion_atoi(datoEntero,strlen(datoEntero));
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
		num=funcion_atoi(datoEntero,strlen(datoEntero));
		lst.insertar(num);
		lst1.insertar(num);
		lst2.insertar(num);
		contador++;
	}while (contador<cantidad);
	cout<<endl;
	lst.mostrarLista();
	mcm=lst1.minimoMultiplo(lst1);
	cout<<"\nMinimoComo un multiiplo: "<<mcm<<endl;
	//lst1.mostrarLista();
	mcd=lst2.maximoDivisor(lst2);
	cout<<"\nMaximo como un divisor : "<<mcd<<endl;
	cout<<endl;
	lst.mostrarLista();
	

}
