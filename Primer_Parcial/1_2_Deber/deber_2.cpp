#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
int exponente(int base, int exponent);
int funcion_atoi(char *str,tamaño)
char *ingresarDatosEnteros(char const *msj);

//Funcion pow
int exponente(int base, int exponent){
	if (exponent == 0) {
    return 1;
  } else {
    int result = base;
    for (int i = 1; i < exponent; i++) {
      result *= base;
    }
    return result;
  }
}
//Funcion atoi
int funcion_atoi(char *str,size_t len){
	int i;
  int res;
  int signo;

  i = 0;
  res = 0;
  signo = 1;
  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
  {
    i++;
  }
  if(str[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if(str[i] == '+')
  {
    signo = 1;
    i++;
  }

  int j = i-1;
  i = len;
  while (str[i] < '0' || str[i] > '9') {
      i--;
  }
  int num_final = i;

  while(i > j)
  {
    if (str[i] >= '0' && str[i] <= '9') {
      res += exponente(10, num_final-i) * (str[i] - '0');
    } else {
      num_final--;
    }

    i--;
  }
  return(res * signo);
}
//Funcion ingreso de datos
char *ingresarDatosEnteros(char const *msj){
	char*dato=new char[10];
	char c;
	int i=0;
	printf("%\n",msj);
	while((c=getch())!=13){
		if(c>='0'&&c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}	 
	dato[i]='\0';
	return dato;
}

template<typename T>
class Datos{
	public:
		void setData(T d);
		T getData() const;
	private:
		T data;
}
template<typename T>
	void Datos<T>::setData(T d){
		this->data=d;
	}
template<typename T>
	T Datos<T>::getData()const{
		return this->data;
	}
		
int main(int argc, char** argv) {
	Datos<int> entero;
	Datos<float> flotante;
	Datos<char> caracter;
	Datos<double> real;
	
	return 0;
}