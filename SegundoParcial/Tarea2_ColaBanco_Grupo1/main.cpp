#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int anterior=0;
	int suma;
	int numero;
	
	for (int i; i<5;i++){
		numero=rand()%(26);
		suma=anterior+numero;
		cout<<suma<<" "<<anterior<<" + "<<numero<<endl;
	}
	return 0;
}
