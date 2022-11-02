#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Sobrecarga
{
	private:
		int a,b;
	public:
		Sobrecarga(int a, int b){
			this->a=a;
			this->b=b;
		}
		int getB(void);
   		int getA(void);
   		void setA(int newA);
   		void setB(int newB);
		void imprimir(Sobrecarga obj);
		Sobrecarga operator % (const Sobrecarga opr);
		Sobrecarga operator != (const Sobrecarga opr);
}; 
int Sobrecarga::getA(void)
{
   return a;
}

void Sobrecarga::setA(int newA)
{
   a = newA;
}

int Sobrecarga::getB(void)
{
   return b;
}

void Sobrecarga::imprimir(Sobrecarga obj)
{
   cout<<obj.a<<" "<<obj.b<<endl;
   //cout<<obj.b<<" "<<obj.a<endl;
}
Sobrecarga Sobrecarga::operator % (const Sobrecarga opr)
{
	
	this->a = a%opr.a;
	this->b =b%opr.b;
	//this->getA()%getB();
	//this->a %= opr.a;
	//this->b %= opr.b;
	return *this;
}

void usarSobrecarga(void)
{
	
}
int main(int argc, char** argv){
	Sobrecarga obj(4,5);
	Sobrecarga obj1(4,3);
	Sobrecarga obj2=obj%obj1;
	//obj2.operator %(obj2);
	obj2.imprimir(obj2);
	
	return 0;
}
