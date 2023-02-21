

#if !defined(__Class_Diagram_1_FuncionesParaValidar_h)
#define __Class_Diagram_1_FuncionesParaValidar_h

#include<iostream>
using namespace std;

class FuncionesParaValidar
{
public:
   char* ingresarDatos(const char* msj,int);
   char* ingresarDatosReales(const char* msj);
   char* validarNombre(const char* msj);
};

#endif
