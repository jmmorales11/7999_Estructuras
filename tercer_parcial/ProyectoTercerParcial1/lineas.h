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
void tiempo();
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
		outtextxy(805,180,"O");
		outtextxy(805,200,"p");
		outtextxy(805,220,"e");
		outtextxy(805,240,"r");
		outtextxy(805,260,"a");
		outtextxy(805,280,"c");
		outtextxy(805,300,"i");
		outtextxy(805,320,"o");
		outtextxy(805,340,"n");
		outtextxy(805,360,"e");
		outtextxy(805,380,"s");
		line(850,400,850,150);
		line(850,400,1100,400);
	}
	
	void tiempo(){
		
		outtextxy(890,435,"Elementos");
	}