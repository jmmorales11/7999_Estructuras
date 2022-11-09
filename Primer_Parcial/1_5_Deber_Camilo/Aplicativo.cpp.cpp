/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: martes, 8 de noviembre de 2022 18:55:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "Area.cpp"

int main(int argc, char** argv) 
{
	double lado, base;
	float altura, radio1, radio2;
	Area *obj= new Area(lado, base, altura, radio1, radio2);
   obj->ingresar();

	return 0;	
}