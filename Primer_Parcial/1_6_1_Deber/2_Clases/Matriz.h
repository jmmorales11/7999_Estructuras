/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa
 * Modificacion: Martes, 10 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
   Matriz();
   ~Matriz();
   void ingresarMatriz(int **matriz, int filas, int columnas);
   void sumaMatriz(int **matriz1, int filas, int columnas, int **matriz2);
   void multiplicarMatriz(int **matrizA, int **matrizB, int fA, int cA, int fB, int cB);
   void imprimirMatriz(int **matriz, int filas, int columnas);
   int sumaRecursivaMatrices(int **matriz1, int **matriz2, int f, int c,Matriz funcion);

protected:
private:

};

#endif
