

#include "Prefija.cpp"

using namespace std;


int main()
{

	Pre cambiante;
	
	string s = "78*(sqrt(10)+9)";
	//string s = "3+4";
	
	cout<<"Infija: "<<s<<endl;
	
	
	string* po = cambiante.inAPre(s);
	
	for(int i=0;i<=cambiante.getPosi();i++)
	{
		cout<<po[i];
	}
	
	cout<<"\nEl resultado es: "<<cambiante.resuelve(s)<<endl;
	
	return 0;
}