#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"

using namespace std;
int main(int arg, char** argv){
	informacion *obj=new informacion("Jeimy",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	//informacion *obj1=new informacion("Camilo",1754146676,144.0,12,12,1200.0,300.0,120.0,120.0,45.0,12);
	Lista *lis=new Lista();
	//cout<<"Aquie"<<endl;
	lis->insertar(obj);
	//cout<<"Aquie"<<endl;
//	lis->insertar(obj1);
	//cout<<"Aquie"<<endl;
	cout<<lis->toString()<<endl;
	//cout<<"Aquie"<<endl;

}
