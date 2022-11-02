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
 * @brief 
 *  
 * 
 * @return int 
 */
   int getA(void);
   void setA(int newA);
   Sobrecarga(int a, int b);
   ~Sobrecarga();
   void imprimir(Sobrecarga obj);
   int getB(void);
   void setB(int newB);
   	Sobrecarga operator % (const Sobrecarga opr);
	Sobrecarga operator != (const Sobrecarga opr);

protected:
private:
   int a;
   int b;


};

#endif
