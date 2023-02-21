
#include "Postfija.cpp"

using namespace std;


int main()
{

	Post cambiante;
	
	string s = "tgh(sqrt(45/9))";
	//string s = "2^(3)";
	
	cout<<"Infija: "<<s<<endl;
	
	
	string* po = cambiante.inAPost(s);
	
	for(int i=0;i<cambiante.getPosi();i++)
	{
		cout<<po[i];
	}
	
	cout<<"\nEl resultado es: "<<cambiante.resuelve(s)<<endl;
	
	return 0;
}
