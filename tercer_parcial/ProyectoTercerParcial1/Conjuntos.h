/***********************************************************************
 * Module:  Conjuntos.h
 * Author:  Jeimy
 * Modified: lunes, 20 de febrero de 2023 9:59:41
 * Purpose: Declaration of the class Conjuntos
 ***********************************************************************/
/**
 * @file Conjuntos.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#if !defined(__Conjuntos_Conjuntos_h)
#define __Conjuntos_Conjuntos_h

class Conjuntos
{
public:
   virtual void uniones()=0;
   virtual void interseccion()=0;
   virtual void complemento()=0;
   virtual void diferencia()=0;
   virtual void diferenciaSimetrica()=0;

protected:
private:

};

#endif