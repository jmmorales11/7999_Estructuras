/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Martes, 08 de nombre de 2022 21:17:59
 * Purpose: Areas de las figuras
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <cstring>
#include <sstream>
using namespace std;

int exponente(int base, int exponent);


int funcion_atoi(char const *str,size_t len);
double funcion_strtod(char *s);
char *ingresarDatosEnteros(char const *msj);
char *str_cpy(char *cadena1 ,char *cadena2);//copia la cadena dos en la cadena uno 
char *ingresocaracteres(char *msj);
char *ingresoflotantes(char const *msj);
char *ingresarDatosEnterosId(char const *msj);
int ingresarCedula(char cedula[11]);
bool extraer(char cedula[]);
void borrar(char a[]);
void provincias (string cod);
char* numeros(int num);
std::string enteroACadena(int entero);

void provincias(string cod){
	if(cod=="01")cout<<" Azuay"<<endl;
	if(cod=="02")cout<<" Bolivar"<<endl;
	if(cod=="03")cout<<" Ca�ar"<<endl;
	if(cod=="04")cout<<" Carchi"<<endl;
	if(cod=="05")cout<<" Cotopaxi"<<endl;
	if(cod=="06")cout<<" Chimborazo"<<endl;
	if(cod=="07")cout<<" El Oro"<<endl;
	if(cod=="08")cout<<" Esmeraldas"<<endl;
	if(cod=="09")cout<<" Guayas"<<endl;
	if(cod=="10")cout<<" Imbabura"<<endl;
	if(cod=="11")cout<<" Loja"<<endl;
	if(cod=="12")cout<<" Los Rios"<<endl;
	if(cod=="13")cout<<" Manabi"<<endl;
	if(cod=="14")cout<<" Morona Santiago"<<endl;
	if(cod=="15")cout<<" Napo"<<endl;
	if(cod=="16")cout<<" Pastaza"<<endl;
	if(cod=="17")cout<<" Pichincha"<<endl;
	if(cod=="18")cout<<" Tungurahua"<<endl;
	if(cod=="19")cout<<" Zamora Chinchipe"<<endl;
	if(cod=="20")cout<<" Galapagos"<<endl;
	if(cod=="21")cout<<" Sucumbios"<<endl;
	if(cod=="22")cout<<" Orellana"<<endl;
	if(cod=="23")cout<<" Santo Domingo de los Tsachilas"<<endl;
	if(cod=="24")cout<<" Santa Elena"<<endl;
}
/*
char* numeros(int num){
	char numero[2];
	if(num==0) {
		numero[0]='0';
		numero[1]='0';
	}
	if(num==1) {
		numero[0]='0';
		numero[1]='1';
	}
	if(num==2) {
		numero[0]='0';
		numero[1]='2';
	}
	if(num==3) {
		numero[0]='0';
		numero[1]='3';
	}
	if(num==4) {
		numero[0]='0';
		numero[1]='4';
	}
	if(num==5) {
		numero[0]='0';
		numero[1]='5';
	}if(num==6) {
		numero[0]='0';
		numero[1]='6';
	}
	if(num==7) {
		numero[0]='0';
		numero[1]='7';
	}
	if(num==8) {
		numero[0]='0';
		numero[1]='8';
	}
	if(num==9) {
		numero[0]='0';
		numero[1]='9';
	}
	if(num==10) {
		numero[0]='1';
		numero[1]='0';
	}
	if(num==11) {
		numero[0]='1';
		numero[1]='1';
	}
	if(num==12) {
		numero[0]='1';
		numero[1]='2';
	}
	if(num==13) {
		numero[0]='1';
		numero[1]='3';
	}
	if(num==14) {
		numero[0]='1';
		numero[1]='4';
	}
	if(num==15) {
		numero[0]='1';
		numero[1]='5';
	}
	if(num==16) {
		numero[0]='1';
		numero[1]='6';
	}
	if(num==17) {
		numero[0]='1';
		numero[1]='7';
	}
	if(num==18) {
		numero[0]='1';
		numero[1]='8';
	}
	if(num==19) {
		numero[0]='1';
		numero[1]='9';
	}if(num==20) {
		numero[0]='2';
		numero[1]='0';
	}if(num==21) {
		numero[0]='2';
		numero[1]='1';
	}
	if(num==22) {
		numero[0]='2';
		numero[1]='2';
	}
	if(num==23) {
		numero[0]='2';
		numero[1]='3';
	}
	if(num==24) {
		numero[0]='2';
		numero[1]='4';
	}
	return numero;
}**/
std::string enteroACadena(int entero)
{
    std::string numeroComoCadena = "";
    std::stringstream ss;
    ss << entero;
    ss >> numeroComoCadena;
    return numeroComoCadena;
}

void borrar(char a[]){
	for(int i=0; i<11;i++){
		if (a[i] == '\n')
			a[i] = '\0';
	}
}

bool extraer(char cedula[]){
	int v[10], num, limite, vec[10], suma, ultimo, ultimon;
	limite = strlen(cedula);
	if (limite!=10){
		cout<<"Cedula No valida";
	}
	
	if (limite ==10){
		for (int i=0;i<10;i++)
		{
			num = cedula[i]-48;
  			v[i] = num; 
    	}
    	
	}
	if (v[0] == 1 || v[0] == 2){
		if (v[2] > 0 && v[2] < 6 ){
	
			for (int i=0; i<9; i+=2){
				vec[i] = v[i] *2;
				if (vec[i] >= 10)
					vec[i] -= 9; 
			}
		
			for (int i=1; i<9; i+=2){
				vec[i] = v[i];	
			}
			
			suma= 0;
			for(int i=0; i<10; i++){
				suma = suma + vec[i];
			}
			
			if (suma == 10)
				ultimo = 0;
			else if(suma >10 && suma<20)
				ultimo = 20;
			else if (suma >20 && suma<30)
				ultimo = 30;
			else if (suma >30 && suma<40)
				ultimo = 40;
			else cout << "\nCedula Incorrecta";
			
			
			ultimon = ultimo - suma;
			
			if (ultimon == v[9]){
				cout << "\nCedula VERIFICADA\n";
				return true;
			}
				
			else{
				cout <<"\nCedula NO VERIFICADA\n";	
				return false;
			}
				
			
		}   
		
		else
			cout << "\nCedula incorrecta";  	
	
   }
    

}

int ingresarCedula(char cedula[11]){
	int longitud;
	bool confirmar;
	//do{
	do{
		str_cpy(cedula,ingresarDatosEnteros("\nIngrese la cedula: "));	
		longitud = strlen(cedula);
	//	borrar(cedula);
	//	confirmar=extraer(cedula);
	} while(longitud!=10);
	//}while(confirmar !=true);
	
	return funcion_atoi(cedula,strlen(cedula));	
}
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
//Funcion atoi combierte a entero
int funcion_atoi(char const *str,size_t len){
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
		signo = -1;
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


char *str_cpy(char *cadena1 ,char *cadena2){
	if(cadena1 == NULL) return NULL;
	int i=0;
	while (cadena2[i] !='\0')
	{
		cadena1[i]=cadena2[i];
		i++;
	}
	cadena1[i]='\0';
	return cadena1;
}

double funcion_strtod(char *s)
{
    int count=0;
    int i;
    for(i=0; i<=strlen(s)-1; i++)
    {

        if(s[i]=='.')
        {
            count++;
        }
        if(count==2)
        {
            return -1;
        }

        if( !((s[i]>=48 && s[i]<=57)|| (s[i]=='.')) )
        {
		return -1;
        }
    }

    if(count==0)
    {
        return -1;
    }
    double d;
    sscanf(s,"%lf",&d);
    return d;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char *ingresoflotantes(char const *msj)
{
    char *dato=new char[50];
	char c;
	int	sum=0;
	int i=0;
	printf("%s",msj);
	while (((c=getch())!=13)&& sum<=1){
		if ((c>='0'&&c<='9') || c=='.'){
			printf("%c",c);
			dato[i++]=c;
			if (c=='.'){
				sum++;
				if (sum>=2){
					putchar(8);
					putchar(32);
					putchar(8);	
					sum--;	
				}	
			}
		}else if(c==8){
			dato[i]=0;
			i--;
			putchar(8);
			putchar(32);
			putchar(8);
		}	
	}
	dato[i]='\0';//fin del while
	return dato;
}

char *ingresocaracteres(char const *msj)
{
    char *dato=new char[10];
	char c;
	int i=0;
	printf("%s",msj);
	while ((c=getch())!=13){
		if((c>='a'&& c<='z')||(c>='A'&&c<='Z')||c==' '){
			printf("%c",c);
			dato[i++]=c;
		}else if(c==8){
			dato[i]=0;
			i--;
			putchar(8);
			putchar(32);
			putchar(8);
		}
		
	}
	dato[i]='\0';//fin del while
	return dato;
}
////clase 
char *ingresarDatosEnteros(char const *msj){
	char *dato=new char[10];
	char c;
	int i=0;
	printf("%s",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}else if(c==8){
			dato[i]=0;
			i--;
			putchar(8);
			putchar(32);
			putchar(8);
		}
		
	}
	dato[i]='\0';
	return dato;
}

char *ingresarDatosEnterosId(char const *msj){
	char *dato=new char[10];
	char c;
	int i=0,longitud=0;
	printf("%s",msj);
	longitud = strlen(dato);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'&&longitud<=10){
			
			
				printf("%c",c);
				dato[i++]=c;
			
			printf("%c",c);
			dato[i++]=c;
		}else if(c==8){
			dato[i]=0;
			i--;
			putchar(8);
			putchar(32);
			putchar(8);
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
};
template<typename T>
	void Datos<T>::setData(T d){
		this->data=d;
	}
template<typename T>
	T Datos<T>::getData()const{
		return this->data;
	}
/*
int main(int argc, char** argv) {
	Datos<int> entero;
	Datos<float> flotante;
	Datos<char*> caracter;
	Datos<double> real;
	int valorEntero;
	float valorFlotante;
	double valorReal;
	char datoEntero[10],datoFlotante[10],datoReal[20],datoCaracter[10];
	str_cpy(datoEntero,ingresarDatosEnteros("\n Ingrese el valor entero"));
	valorEntero=funcion_atoi(datoEntero,strlen(datoEntero));
	entero.setData(valorEntero);
	str_cpy(datoReal,ingresoflotantes("\n Ingrese el valor real"));
	valorReal=funcion_strtod(datoReal);
	real.setData(valorReal);
	
	str_cpy(datoCaracter,ingresocaracteres("\n Ingrese el valor caracter"));
	caracter.setData(datoCaracter);
	

	cout<<"\n Numero de tipo int: "<<entero.getData();
	cout<<"\n Numero de tipo double: "<<real.getData();
	cout<<"\n Numero de tipo caracter: "<<caracter.getData()<<"\n";
	system("pause");

	return 0;
}*/
