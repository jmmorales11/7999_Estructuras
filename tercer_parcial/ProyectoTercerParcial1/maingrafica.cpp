#include <iostream>
#include <graphics.h>
#pragma once
#define R 140
using namespace std;
void uniones1();
void complementoA();
void diferenciaSimetrica1();
void letras(string letra, int x, int y);
void dibujarDiferenciaAB();
void dibujarDiferenciaBA();
void dibujarInterseccion();
void complementoB();
void conjuntos();

void dibujarInterseccion(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(400,1,"Interseccion");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	readimagefile("interse.jpg",190,90,695,470);
	settextstyle(1,0,4);
	readimagefile("interseccion.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
}

void dibujarDiferenciaAB(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(400,1,"Diferencia");
	setcolor(15);
	setfillstyle(1, 0);
	bar(200,100,680,450);
	rectangle(200,100,680,450);
	setcolor(15);
	setfillstyle(5, 6);
	fillellipse(345,275, R, R);
	setfillstyle(6, 0);
	fillellipse(535,275, R, R);
	arc(345,275,270,90, R);
	readimagefile("DiferenciAB.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
}

void dibujarDiferenciaBA(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(400,1,"Diferencia");
	setcolor(15);
	setfillstyle(1, 0);
	bar(200,100,680,450);
	rectangle(200,100,680,450);
	setcolor(15);
	setfillstyle(6, 2);
	fillellipse(535,275, R, R);
	setfillstyle(5, 0);
	fillellipse(345,275, R, R);
	arc(535,275,270,230, R);
	readimagefile("DiferenciaB.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
}

void uniones1(){
	setcolor(3);
	settextstyle(6,0,6);
	outtextxy(400,1,"Union");
	setcolor(15);
	setfillstyle(1, 0);
	bar(200,100,680,450);
	rectangle(200,100,680,450);
	setcolor(15);
	setfillstyle(1, 3);
	fillellipse(345,275, R, R);
	setfillstyle(1, 3);
	fillellipse(535,275, R, R);
	arc(345,275,270,90, R);
	readimagefile("Union.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
	
}
void complementoA(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(300,1,"Complemento");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	setfillstyle(1, 7);
	bar(200,100,680,450);
	rectangle(200,100,680,450);
	setcolor(15);
	setfillstyle(1, 7);
	fillellipse(535,275, R, R);
	arc(345,275,270,90, R);
	setfillstyle(1, 0);
	fillellipse(345,275, R, R);
	arc(535,275,90,270, R);
	readimagefile("COMA.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
}

void complementoB(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(300,1,"Complemento");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	setfillstyle(1, 7);
	bar(200,100,680,450);
	rectangle(200,100,680,450);
	setcolor(15);
	setfillstyle(1, 7);
	fillellipse(345,275, R, R);
	setfillstyle(1, 0);
	fillellipse(535,275, R, R);
	arc(345,275,270,90, R);
	arc(535,275, 90,270, R);
	readimagefile("COMB.jpg",50,600,125,670);
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
	conjuntos();
}

void diferenciaSimetrica1(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(150,1,"Diferencia Simetrica");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	readimagefile("Ds.jpg",200,100,680,450);
	readimagefile("DiferenciaSime.jpg",50,600,125,670);
	conjuntos();
	settextstyle(1,0,4);
	outtextxy(130,610,": {");
}

void conjuntos(){

	settextstyle(1,0,4);
	outtextxy(65,500,"A :  {");
	outtextxy(65,550,"B :  { ");
	outtextxy(220,125,"A");
	outtextxy(610,125,"B");
	outtextxy(110,125,"U");
	
}
void letras(string letra, int x, int y){
	setcolor(15);
	char buffer[100];
	settextstyle(1,0,2);
	strcpy(buffer,letra.c_str());
	outtextxy(x,y,buffer);
}



/*
int main(){
	int gd = DETECT;
	int gm;
	//initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1200,700); 


//	diferenciaSimetrica1();
//	complementoB();
//	complementoA();

//	dibujarDiferenciaBA();
//	dibujarDiferenciaAB();
	dibujarInterseccion();

	letras("a", 190, 615);
	
	system("pause");return 0;
}*/