/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "Ingreso.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ingresoflotantes(char *msj)
{
    char *dato=new char[8];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if ((c>='0'&&c<='9') || c=='.'){
			if (i<=8){
				printf("%c",c);
			    dato[i++]=c;
			}
			
		}
	}
	dato[i]='\0';//fin del while
	return dato;
}
char *ingresoDoubles(char *msj)
{
    char *dato=new char[15];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if ((c>='0'&&c<='9') || c=='.'){
			if (i<=15){
				printf("%c",c);
			    dato[i++]=c;
			}
			
		}
	}
	dato[i]='\0';//fin del while
	return dato;
}
char *ingresocaracteres(char *msj)
{
    char *dato=new char[8];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if (isalpha(c)!=0){
			printf("%c",c);
			dato[i++]=c;
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
	printf("%s\n",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}
/*
char Ingreso::ingresoflotantes(char msj)
{
    char *dato=new char[8];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if ((c>='0'&&c<='9') || c=='.'){
			if (i<=8){
				printf("%c",c);
			    dato[i++]=c;
			}
			
		}
	}
	dato[i]='\0';//fin del while
	return *dato;
}


char Ingreso::ingresoDouble(char msj)
{
   char *dato=new char[15];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if ((c>='0'&&c<='9') || c=='.'){
			if (i<=15){
				printf("%c",c);
			    dato[i++]=c;
			}
			
		}
	}
	dato[i]='\0';//fin del while
	return *dato;
}


char Ingreso::ingresoChar(char msj)
{
   char *dato=new char[8];
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())!=13){
		if (isalpha(c)){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';//fin del while
	return *dato;
}*/
