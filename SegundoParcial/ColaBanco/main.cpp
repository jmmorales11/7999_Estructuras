#include "Persona.cpp"
#include <iostream>
using namespace std;

int main()
{
	Fecha *f = new Fecha(1,1,2);
	Persona *p= new Persona("12","Juan","M",f);
	p->ingresoDatos(p);
	return 0;
}
