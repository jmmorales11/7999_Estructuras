
/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: jueves, 27 de octubre de 2022 21:17:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Sobrecarga.h
 * @author Marley Morales , Camilo Orrico (jmmorales11@espe.edu.ec, corrico@espe.edu.ec)
 * @brief 
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Class_Diagram_1_Sobrecarga_h)
#define __Class_Diagram_1_Sobrecarga_h

class Sobrecarga
{
public:
   /**
    * @brief Obtener A
    * 
    * @return int 
    */
   int getA(void);
   /**
    * @brief Ingresar A
    * 
    * @param newA 
    */
   void setA(int newA);
   /**
    * @brief Constructor
    * 
    * @param a 
    * @param b 
    */
   Sobrecarga(int a, int b);
   /**
    * @brief Destructor
    * 
    */
   ~Sobrecarga();
   /**
    * @brief Imprimir datos
    * 
    * @param obj 
    */
   void imprimir(Sobrecarga obj);
   /**
    * @brief Obtener b
    * 
    * @return int 
    */
   int getB(void);
   /**
    * @brief Ingresar b
    * 
    * @param newB 
    */
   void setB(int newB);
   /**
    * @brief Sobrecarga del operador %
    * 
    * @param opr 
    * @return Sobrecarga 
    */
   	Sobrecarga operator % (const Sobrecarga opr);
	/**
	 * @brief Sobrecarga del operador !=
	 * 
	 * @param opr 
	 * @return Sobrecarga 
	 */
   Sobrecarga operator != (const Sobrecarga opr);

protected:
private:
   int a;
   int b;


};

#endif
