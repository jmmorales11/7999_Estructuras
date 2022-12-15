
#include <iostream>
#include <sstream>
#include "Datos1.cpp"
#include "Letra.cpp"

int main()
{	
	Datos1 *obj= new Datos1("Jeimy","Morales","24754146676",0,0,0,0,0);
    std::string convertido = num_string(01);
    std::cout << convertido ;
    string num, cod;
    /*
    for (int i=0;i<25;i++){
    	string num=numeros(i);
    	cod=letraPrimera(obj->getId());
    	if(cod==num){
    		cout<<"Valores iguales "<<cod<<" "<<num<<endl;
			provincias(i)	;
    	}else{
    		cout<<"";
		}
    	
	}*/
    return 0;
}
