#include "ArbolRadix.cpp"
#include "validar.h"
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	initwindow(1000, 1000);
	settextstyle(7,HORIZ_DIR,6);
	outtextxy(350,1,"Arbol radix");
	int opc;
	char datoCaracter[20], datoEntero[10];
	string palabra;
	ArbolRadix r;
	do{
		system("cls");
		cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar " << endl;
        cout << "\t[2]  Mostrar " << endl;
        cout << "\t[3]  Buscar " << endl;
        cout << "\t[4]  Eliminar " << endl;
        cout << "\t[5]  Dibujar " << endl;
		cout << "\t[0]  Salir" << endl;
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"Ingrese la palabra"<<endl;
				cin>>palabra;
				cout<<endl;
				r.insertar(palabra);
				system("PAUSE");
				break;
			case 2:
				r.imprimir(r.raiz ,"");
				cout<<endl;
				r.imprimirDife(r.raiz," ",0);
				system("PAUSE");
				break;
			case 3:
				cout<<"Ingrese una palabra a buscar: "<<endl;
				cin>>palabra;
				r.buscar(palabra);
				system("PAUSE");
				break;
			case 4:
				cout<<"Ingrese una palabra a eliminar: "<<endl;
				cin>>palabra;
				r.eliminar(r.raiz, palabra, 0);
				system("PAUSE");
				break;
			case 5:
				r.recorrer(r.raiz, 100,100);
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	system("PAUSE");
            	exit(0);
				break;
		}
		
	}while(opc != 1 || opc != 2||opc != 3||opc != 4||opc != 0 );
	

	getch();
	closegraph();
	/*r.insertar("romulo");
	r.insertar("romero");
	r.insertar("roma");
	r.insertar("remo");
	r.insertar("regreso");
	r.insertar("rememorar");
	r.insertar("romantico");
	r.insertar("rama");
	r.imprimir2();
	cout<<endl;
	r.imprimir(r.raiz ,"");
	cout<<endl;
	r.imprimir3(r.raiz ,"",0);
	r.eliminar(r.raiz, "remo", 0);
	r.imprimir3(r.raiz ,"",0);
	cout<<endl;
	r.imprimir2();
//	r.draw(r.raiz, getmaxx() / 2, 30);
	r.dibujarCirculos(r.raiz, 100 ,100,"",0);
	getch();
	closegraph();*/
    return 0;
}