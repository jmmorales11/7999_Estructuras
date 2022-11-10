/***********************************************************************
 * Module:  Funcion.h
 * Author:  camilo
 * Modified: jueves, 10 de noviembre de 2022 1:20:46
 * Purpose: Declaration of the class Funcion
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Funcion_h)
#define __Class_Diagram_1_Funcion_h

class Funcion
{
public:
   void ingresarMatriz(int *matriz[100][100], int filas, int columnas);
   Funcion(int *matriz[100][100], int filas, int columnas);
   ~Funcion();
   void encerarMatriz(int *matriz[100][100], int filas, int columnas);
   void imprimirMatriz(int *matriz[100][100],int filas, int columnas);
   void suma(void);
   void multiplicacion(void);
   int getFilas(void);
   void setFilas(int newFilas);
   int getColumnas(void);
   void setColumnas(int newColumnas);

protected:
private:
   int filas;
   int columnas;


};

#endif