#include <iostream>
#include <ctime>
using namespace std;
void mostrarLogo();

void mostrarLogo(){
	int a=0;
	time_t t;
	t=time(NULL);
	struct tm *fecha;
	fecha= localtime(&t);
	cout<<"                                         "<<fecha->tm_mday<<" / "<<fecha->tm_mon+1<<" / "<<fecha->tm_year+1900<<endl;
	cout<<"NOMBRE EMPRESA"<<"                           --------------"<<endl;
	while (a<4){
	cout<<"                                         --          --"<<	endl;
	a++;
	}
	cout<<"                                         --------------"<<endl;
}
