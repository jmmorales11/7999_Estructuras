
#include "FuncionesParaValidar.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////
// Name:       FuncionesParaValidar::ingresarDatos(const char* msj)
// Purpose:    Implementation of FuncionesParaValidar::ingresarDatos()
// Parameters:
// - msj
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* FuncionesParaValidar::ingresarDatos(const char* msj,int a)
{
   	char c;
	int i=0,aux=0;
	int pos=0,k=0;
	string aux1;
	printf("%s",msj);	
	while((c=getch())!=13)
	{	
			if((c>='0' && c<='9')&&aux<=a)
			{
            	aux1.push_back(c);
            	cout<<c;
            	aux++;
        	}
        	else if ((aux1.length()>0) && c==8)
			{
            	cout<<"\b \b";
            	aux1=aux1.substr(0, aux1.length()-1);  
            	aux--;
        	}        
			else if (c==73&&(aux<=a))
			{
				printf("\b");
				pos++;
				k =i-pos;
			}
			else if(c==77&&(aux<=a))
			{	
				printf("\b");
				pos++;
				k =i-pos;
			}	
	}
	aux=0;
    char *dato = new char[aux1.length() + 1];
    memmove(dato, aux1.c_str(), aux1.length()+1);
	return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       FuncionesParaValidar::ingresarDatosReales(const char* msj)
// Purpose:    Implementation of FuncionesParaValidar::ingresarDatosReales()
// Parameters:
// - msj
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* FuncionesParaValidar::ingresarDatosReales(const char* msj)
{
	char c;
	int i=0;
	bool present;
	int pos=0,k=0;
	string aux1;
	printf("%s",msj);	
	while((c=getch())!=13)
	{
		if((c>='0' && c<='9')||c=='.')
		{
			if(c=='.'&& !present)
			{
				printf("%c",c);
				present=true;
			}else if(c>='0' && c<='9'){
				printf("%c",c);
			}
            aux1.push_back(c);
            cout<<c;
        }
        else if (aux1.length()>0)
		{
            cout<<"\b \b";
            aux1=aux1.substr(0, aux1.length()-1);  
        }
		else if (c==75)
		{
			printf("\b");
			pos++;
			k =i-pos;
		}
		else if(c==77)
		{	
			printf("\b");
			pos++;
			k =i-pos;
		}	
	}
    char *dato = new char[aux1.length() + 1];
    memmove(dato, aux1.c_str(), aux1.length()+1);
	return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       FuncionesParaValidar::validarNombre(const char* msj)
// Purpose:    Implementation of FuncionesParaValidar::validarNombre(const char* msj)
// Parameters:
// - c[]
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* FuncionesParaValidar::validarNombre(const char* msj)
{
   	int i;
   	char c;
   	printf("%s",msj);
   	string aux1;
	while((c=getch())!=13)
	{
	 	if((c>=65 && c<=90 ||c>=97 && c<=122||c==32))
	 	{
	 		aux1.push_back(c);
            cout<<c;
	 	}else if (aux1.length()>0)
		{
            cout<<"\b \b";
            aux1=aux1.substr(0, aux1.length()-1);  
        }
	}
	char *dato = new char[aux1.length() + 1];
    memmove(dato, aux1.c_str(), aux1.length()+1);
	return dato;
}