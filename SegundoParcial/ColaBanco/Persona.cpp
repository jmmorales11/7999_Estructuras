/***********************************************************************
 * Module:  Persona.cpp
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:55:32
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
#include "validar.h"

Persona::Persona(std::string ced,std::string nom,std::string apell,Fecha *eda)
{

}


Persona::~Persona()
{
   // TODO : implement
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


std::string Persona::getNombre(void)
{
   return nombre;
}


void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}



void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}


Fecha* Persona::getEdad(void)
{
   return edad;
}


void Persona::setEdad(Fecha *newEdad)
{
   edad = newEdad;
}

void Persona::ingresoDatos(Persona *obj){
	Fecha *f;
	char datoEntero[10],datoReal[20],datoCaracter[30];
   	str_cpy(datoCaracter,ingresocaracteres("\nIngrese el apellido del trabajador: "));
   	obj->setApellido(datoCaracter);
   	str_cpy(datoCaracter,ingresocaracteres("\nIngrese el nombre del trabajador: "));
   	obj->setNombre(datoCaracter);
	obj->edad->cacularEdad(f);
}
float Persona::calcularTSalidaTEntrada(int TEntrada, int TSalida){
   		if( TEntrada>TSalida) return TEntrada-TEntrada;
   		else return TSalida-TEntrada;
   }
float Persona::tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio){
   		return tiempoLlegada+tiempoEspera+tiempoServicio;
   }
float Persona::tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior){
   		return tiempoLlegadaAnterior-tiempoLLegadaActual;
   }
float Persona::timpoCajero(int tiempoLlegada, int tiempoSalida){
   	if(tiempoLlegada>tiempoSalida) return tiempoLlegada-tiempoSalida;
   	else return  tiempoSalida-tiempoSalida;
   }
int Persona::generarTiempoRandom(int min, int max, int anterior){
   	 return anterior+rand()%(26);
   }
