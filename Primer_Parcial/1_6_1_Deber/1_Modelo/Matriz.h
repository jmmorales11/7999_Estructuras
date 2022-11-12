/***********************************************************************
 * Module:  Matriz.h sirve
 * Author:  Jeimy
 * Modified: jueves, 10 de noviembre de 2022 22:09:11
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h
#define TAM 5
#define TAM1 5

class Matriz
{
public:
   Matriz();
   ~Matriz();
   void ingresarMatriz(int matriz[][TAM1],int filas,int columnas);
   void sumaMatriz(int matriz1[][TAM1] ,int filas,int columnas,int matriz2[][TAM1]);
   void multiplicarMatriz(int matriz[][TAM1],int matriz1[][TAM1],int fA, int cA, int fB,int cB);
   void imprimirMatriz(int matriz[][TAM1] ,int filas,int columnas);

protected:
private:

};

#endif
