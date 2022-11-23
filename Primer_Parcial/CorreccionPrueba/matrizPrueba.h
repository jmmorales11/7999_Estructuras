/***********************************************************************
 * Module:  matrizPrueba.h
 * Author:  Jeimy
 * Modified: domingo, 20 de noviembre de 2022 18:38:43
 * Purpose: Declaration of the class matrizPrueba
 ***********************************************************************/

#if !defined(__matrizPrueba_matrizPrueba_h)
#define __matrizPrueba_matrizPrueba_h
template <typename T>
class matrizPrueba{
public:
   T** getMatriz(void);
   void setmatriz(T **newmatriz);
   T getFila(void);
   void setFila(T newFila);
   T getColumna(void);
   void setColumna(T newColumna);
   matrizPrueba(T **matriz, T fila, T columna);
   ~matrizPrueba();
   matrizPrueba ingresarMatriz(matrizPrueba matriz);
   matrizPrueba mostrarMatriz(matrizPrueba matriz);

protected:
private:
   T **matriz;
   T fila;
   T columna;


};

#endif
