#include <iostream>
#include <ctime>
#include <sstream>
#include <string>
using namespace std;
string mostrarLogo();

string mostrarLogo(){
	stringstream s;
	int a=0;
	time_t t;
	t=time(NULL);
	struct tm *fecha;
	fecha= localtime(&t);
	s<<"                                         "<<fecha->tm_mday;
	s<<" / "<<fecha->tm_mon+1;
	s<<" / "<<fecha->tm_year+1900<<endl;
	return s.str();
}
