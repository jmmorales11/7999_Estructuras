#include <iostream>
#include <graphics.h>

using namespace std;
void uniones1();
void complementoA();
void diferenciaSimetrica1();
void letras(string letra, int x, int y);
void dibujarDiferenciaAB();
void dibujarDiferenciaBA();
void dibujarInterseccion();
void complementoB();

void dibujarInterseccion(){
	setcolor(3);
	settextstyle(3,HORIZ_DIR,6);
	outtextxy(400,1,"Interseccion");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 0);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(5, 0);
	fillellipse(385,300, 140, 140);
	setfillstyle(6, 0);
	fillellipse(575,300, 140, 140);
	readimagefile("interse.jpg",50,50,1000,600);
	settextstyle(1,0,4);
	readimagefile("interseccion.jpg",55,545,130,600);
	outtextxy(130,550,": {");
}

void dibujarDiferenciaAB(){
	setcolor(3);
	settextstyle(3,HORIZ_DIR,6);
	outtextxy(400,1,"Diferencia");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 0);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(5, 6);
	fillellipse(385,300, 140, 140);
	setfillstyle(6, 0);
	fillellipse(575,300, 140, 140);
	arc(385,300,270,90, 140);
	readimagefile("DiferenciAB.jpg",55,545,130,600);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");
}

void dibujarDiferenciaBA(){
	setcolor(3);
	settextstyle(3,HORIZ_DIR,6);
	outtextxy(400,1,"Diferencia");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 0);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(6, 2);
	fillellipse(575,300, 140, 140);
	setfillstyle(5, 0);
	fillellipse(385,300, 140, 140);
	arc(575,300,270,230, 140);
	readimagefile("DiferenciaB.jpg",55,545,130,600);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");
	system("pause");
}

void uniones1(){
	setcolor(3);
	settextstyle(6,0,6);
	outtextxy(400,1,"Union");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 0);
	bar(200,100,750,450);
	rectangle(200,100,750,450);
	setcolor(15);
	setfillstyle(1, 3);
	fillellipse(385,275, 140, 140);
	setfillstyle(1, 3);
	fillellipse(575,275, 140, 140);
	arc(385,275,270,90, 140);
	readimagefile("Union.jpg",50,535,130,590);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");
}
void complementoA(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(300,1,"Complemento");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 7);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(1, 7);
	fillellipse(575,300, 140, 140);
	arc(385,300,270,90, 140);
	setfillstyle(1, 0);
	fillellipse(385,300, 140, 140);
	arc(575,300,90,270, 140);
	readimagefile("COMA.jpg",50,540,125,600);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");
}

void complementoB(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(300,1,"Complemento");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 7);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(1, 7);
	fillellipse(385,300, 140, 140);
	setfillstyle(1, 0);
	fillellipse(575,300, 140, 140);
	arc(385,300,270,90, 140);
	
	arc(575,300,90,270, 140);
	readimagefile("COMB.jpg",50,540,125,600);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");
}

void diferenciaSimetrica1(){
	setcolor(7);
	settextstyle(6,0,6);
	outtextxy(150,1,"Diferencia Simetrica");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	readimagefile("Ds.jpg",200,100,800,500);
	readimagefile("DiferenciaSime.jpg",50,550,125,600);
	settextstyle(1,0,4);
	outtextxy(130,550,": {");

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
	initwindow(1100,700); 

	complementoB();
	letras("a", 190, 550);
	
	system("pause");return 0;
}*/