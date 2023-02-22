#include <iostream>
#include <graphics.h>

using namespace std;
void uniones1();
void complemento1();
void diferenciaSimetrica1();
void letras(string letra, int x, int y);

void uniones1(){
	setcolor(3);
	settextstyle(6,0,6);
	outtextxy(400,1,"Union");
	settextstyle(7,HORIZ_DIR,1);
	setcolor(15);
	outtextxy(200,650,"Morales Jeimy");
	outtextxy(550,650,"Orrico Camilo");
	setfillstyle(1, 0);
	bar(200,100,800,500);
	rectangle(200,100,800,500);
	setcolor(15);
	setfillstyle(1, 3);
	fillellipse(385,300, 140, 140);
	setfillstyle(1, 3);
	fillellipse(575,300, 140, 140);
	arc(385,300,270,90, 140);
}
void complemento1(){
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
	settextstyle(6,0,1);

}


void letras(string letra, int x, int y){
	char buffer[100];
	strcpy(buffer,letra.c_str());
	outtextxy(x,y,buffer);
}
/*
int main(){
	int gd = DETECT;
	int gm;
	//initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1100,700); 

	letras("Hola", 50, 550);
	diferenciaSimetrica1();
	
	
	system("pause");return 0;
}*/