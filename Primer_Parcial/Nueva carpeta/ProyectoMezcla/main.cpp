#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"
///SIRVE
using namespace std;
int main(int arg, char** argv){
	int cedula,h100,h50,n;
	//informacion *obj=new informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
	//informacion *obj1=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	//informacion *obj2=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	Lista *lis=new Lista();
	while (n<3){
		informacion *obj=new informacion("Jeimy",1754146676,144.0,0,12,1200.0,300.0,120.0,120.0,45.0,12,13,12.0,12.0);
		obj->ingresarInformacion(obj);
		lis->insertar(obj);
		n++;
	}
	
	cout<<lis->toString()<<endl;
	//cout<<"Aquie"<<endl;

}
