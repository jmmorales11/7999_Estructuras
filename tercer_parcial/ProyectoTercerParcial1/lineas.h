#include <graphics.h>	
#include <math.h>
void LineaRoja();
void LineaA();
void graficarBigHoraSuperLineal();
void graficarBigTiempoLineal();
void dibujarBigOExponecialCeleste();
void dibujarBigOExponecialAzul();
void dibujarBigOExponecialNaranja();
void ejes();
using namespace std;
void tiempo(long tiempo);
////
	void LineaRoja(){
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		setcolor(4);
		outtextxy(1100,373,"O(log n )");
		line(850,399,1100,396);
	}
	void LineaA(){
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		setcolor(3);
		outtextxy(1100,390,"O(1)");
		line(850,399,1100,398);
	}
	
	void graficarBigHoraSuperLineal(){
	setcolor(GREEN);
	line(850,400,1100,225);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(WHITE);
//	outtextxy(950,200,nombreFuncion);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(GREEN);
	outtextxy(1100,225,"O(nlogn)");
}
void graficarBigTiempoLineal(){
	setcolor(MAGENTA);
	line(850,400,1100,350);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(WHITE);
//	outtextxy(950,390,nombreFuncion);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(MAGENTA);
	outtextxy(1100,350,"O(n)");
}

void dibujarBigOExponecialCeleste(){
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		int x, y;
	    double a = 20;
	    for (x = 0; x <= 38; x++)
	    {
	        y = 415 - a * pow(2, x / 10.0);
	        putpixel(x+850, y, CYAN);
	    }
	    setcolor(CYAN);
		outtextxy(838,120,"O(n!)");
	}
	void dibujarBigOExponecialAzul(){
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		int x2, y2;
	    double c = 8;
	    for (x2 = 0; x2 <=100; x2++)
	    {
	        y2 = 400 - c * pow(2, x2 / 20.0);
	        putpixel(x2+850, y2, BLUE);
	    }
	    setcolor(BLUE);
		outtextxy(970,150,"O(n^2)");
	}
	void dibujarBigOExponecialNaranja(){
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		int x1, y1;
	    double b = 15;
	    for (x1 = 0; x1 <= 54; x1++)
	    {
	        y1 = 414 - b * pow(2, x1 / 13.0);
	        putpixel(x1+850, y1, 6);
	    }setcolor(6);
		outtextxy(888,125,"O(2^n)");

	}
	
	void ejes(){
		setcolor(15);
		settextstyle(3,0,1);
		outtextxy(890,435,"Elementos");
		settextstyle(3,1,1);
		outtextxy(810,180,"O");
		outtextxy(810,200,"p");
		outtextxy(810,220,"e");
		outtextxy(810,240,"r");
		outtextxy(810,260,"a");
		outtextxy(810,280,"c");
		outtextxy(810,300,"i");
		outtextxy(810,320,"o");
		outtextxy(810,340,"n");
		outtextxy(810,360,"e");
		outtextxy(810,380,"s");
		line(850,400,850,150);
		line(850,400,1100,400);
	}
	
	void tiempo(long tiempo){
		string numStr = to_string(tiempo);
		char buffer[100];
		outtextxy(890,100,"Complejidad del Algoritmo");
		strcpy(buffer,numStr.c_str());
		outtextxy(890,460,"Tiempo del algortimo");
		outtextxy(890,485,"Microsegundos");
		outtextxy(890,510,buffer);
	}