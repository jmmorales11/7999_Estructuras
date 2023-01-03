/*********
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 19/12/2022
FECHA DE MODIFICACIÓN: 21/12/2022
Grupo1-Gestión banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
 *********/
 #include <iostream>
#include <cstdlib>
#include <conio.h>

#include <windows.h>
using namespace std;
class Menu{
	public:
		void menuPrincipal();
		int menu(const char *titulo,const char *opciones[],int n);
		void gotoxy(int x,int y);
		//int validarCedula(char *cedulaC);
		static bool verificarCedula(const string &cedula);
};
