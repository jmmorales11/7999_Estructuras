#pragma once
#include "FuncionesParaValidar.cpp"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstring>
#include <windows.h>
using namespace std;
class MenuCalc{
	public: 
	int menuCursor(const char *titulo, const char *opciones[], int n);
	int menuCursorCalc(const char *titulo, const char *opciones[], int n,const char *ecuacion[],int auxEcuacion,int auxPos);
	void gotoxy(int, int );
	void presentarMenu();
	bool exprValidaOperadores(const char *ecuacion[],int auxEcuacion);
	bool exprValidaPunto(const char *ecuacion[],int auxEcuacion);
	bool exprValidaPotencia(const char *ecuacion[],int auxEcuacion);
	bool validarPunto(const char *ecuacion[],int);
	bool validarParentesis(const char *ecuacion[],int pos);
};