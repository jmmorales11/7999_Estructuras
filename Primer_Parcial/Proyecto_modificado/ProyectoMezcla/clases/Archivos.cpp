#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void escribir(informacion *obj);

void escribir(informacion *obj){
	ofstream archivo;
	archivo.open("Rol_Pago.txt",ios::out| ios::app);//abriendo archivo
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);	
	}
	archivo<<"\n-----------------------------------------------------"<<endl;
//	archivo<<"Fecha"<<mostrarLogo()<<endl;
	archivo<<"\nApellido y nombre          \t\t"<<obj->getApellido()<<" "<<obj->getNombre()<<endl;
	archivo<<"cedula                       \t\t"<<obj->getId()<<endl;
	archivo<<"\n	>> Informativo";		
    archivo<<"\nNumero de horas Extras 100%\t\t"<<obj->getHoras100()<<endl;
    archivo<<"Numero de horas Extras 50%   \t\t"<<obj->getHoras50()<<endl;
    archivo<<"Dias trabajados              \t\t"<<obj->getDiasTrabajados()<<endl;
    archivo<<"Prestamo                     \t\t"<<obj->getPrestamo()<<endl;
    archivo<<"Sueldo base                  \t\t"<<obj->getSueldoBase()<<endl;
    archivo<<"\n	>> Ingreso";
    archivo<<"\nSueldo Ganado              \t\t"<<fixed<<setprecision(2)<<obj->getSueldoBase()<<endl;
    archivo<<"Valor HE 100%                \t\t"<<obj->getVhoras100()<<endl;
    archivo<<"Valor HE 50%                 \t\t"<<obj->getVhoras50()<<endl;
    archivo<<"\n             		Total Ingreso  "<<fixed<<setprecision(2)<<obj->getTotalIngreso()<<endl;
    archivo<<"\n	>> Egreso"<<endl;
    archivo<<"Aporte IESS                  \t\t"<<obj->getIESS()<<endl;
    archivo<<"Prestamo                     \t\t"<<obj->getVprestamoMensual() <<endl;
    archivo<<"\n                        Total Egreso  "<<fixed<<setprecision(2)<<obj->getTotalEgreso()<<endl;
    archivo<<"\n_________________________________________________"<<endl;
    archivo<<"\n Total del Empleado  "<<obj->getNombre()<<"\t"<<fixed<<setprecision(2)<<obj->getTotalEntrega()<<endl;
   archivo<<"\n-----------------------------------------------------\n\n"<<endl;
	archivo.close();
}
