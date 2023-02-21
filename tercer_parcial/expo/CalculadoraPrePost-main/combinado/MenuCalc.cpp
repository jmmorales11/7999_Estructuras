
#include"MenuCalc.h"
#include "Postfija.cpp"
#include "Prefija.cpp"
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define TECLA_DERECHA 77
#define TECLA_IZQUIERDA 75
#define ENTER 13
#define color SetConsoleTextAttribute
#include <iostream>
using namespace std;

void MenuCalc::presentarMenu(){
	FuncionesParaValidar objFunVal;	
	const char *tituloMP = "MENU CALCULADORA";
	const char *opcionesMP[] = {" + "," 9 "," 6 "," 3 "," pi"," -"," 7"," 5"," 2"," e"," *"," 8"," 4"," 1"," 0","   /   ","  sin  "," arcsin","  sinh ","   ^   ",
	"   (   ","  cos  "," arccos","  cosh ","  raiz ","   )   ","  tan  "," arctan","  tanh ","    .  ","   <-  ","    =  "};	
	//,"x","y","z"
	const char *tituloMOP = "BIENVENIDOS AL PROGRAMA DE NOTACION POLACA INVERSA";
	const char *opcionesMOP[] = {"Ingresar Nueva Ecuacion.","Solucion Prefija.","Solucion Posfija.","Salir."};	
	string auxEc;
	string auxEc1;
	bool ecValida=false;
	string probe=auxEc;
	string *pe;
	string pe1;
	float resultado;
	
	int op=0,op2=0,posC=0,validar,nMP=32,nMOP=4,auxEcuacion=0;	
	do{	 
	    
		op=menuCursor(tituloMOP,opcionesMOP,nMOP);
		switch(op){
			case 1:{
				auxEc="";
				const char *ecuacion[100];
				if(auxEcuacion!=0)
				{
					auxEcuacion=0;
				}
				int auxPos=1;
			  	do{
			  		op2=menuCursorCalc(tituloMP,opcionesMP,nMP,ecuacion,auxEcuacion,auxPos);
			  		auxPos=op2;
			  		switch(op2){
				  			case 1:{ //suma +
				  				ecuacion[auxEcuacion]="+";
				  				break;	
							}
							case 2:{ //nueve 9
								ecuacion[auxEcuacion]="9";
				  				break;	
							}
							case 3:{ //seis 6
								ecuacion[auxEcuacion]="6";
				  				break;	
							}
							case 4:{//tres 3
								ecuacion[auxEcuacion]="3";
				  				break;	
							}
							case 5:{//pi
								ecuacion[auxEcuacion]="pi";
				  				break;	
							}
							case 6:{//menos -
								ecuacion[auxEcuacion]="-";
				  				break;	
							}
							case 7:{//siete 7
								ecuacion[auxEcuacion]="7";
				  				break;	
							}
							case 8:{//cinco 5
								ecuacion[auxEcuacion]="5";
				  				break;	
							}
							case 9:{//dos 2
								ecuacion[auxEcuacion]="2";
				  				break;	
							}
							case 10:{//euler e
								ecuacion[auxEcuacion]="e";
				  				break;	
							}
							case 11:{//multiplicacion *
								ecuacion[auxEcuacion]="*";
				  				break;	
							}
							case 12:{//ocho 8
								ecuacion[auxEcuacion]="8";
				  				break;	
							}
							case 13:{//cuatro 4
								ecuacion[auxEcuacion]="4";
				  				break;	
							}
							case 14:{//uno 1
								ecuacion[auxEcuacion]="1";
				  				break;	
							}
							case 15:{//cero 0
								ecuacion[auxEcuacion]="0";
				  				break;	
							}
							case 16:{//division /
								ecuacion[auxEcuacion]="/";
				  				break;	
							}
							case 17:{//seno sin
								ecuacion[auxEcuacion]="sin(";
				  				break;	
							}
							case 18:{//arcoseno arcsin
								ecuacion[auxEcuacion]="arcsin(";
				  				break;	
							}
							case 19:{//seno hiperbolico sinh
								ecuacion[auxEcuacion]="senh(";
				  				break;	
							}
							case 20:{//potencia ^
								ecuacion[auxEcuacion]="^(";
				  				break;	
							}
							case 21:{// (
								ecuacion[auxEcuacion]="(";
				  				break;	
							}
							case 22:{//coseno cos
								ecuacion[auxEcuacion]="cos(";
				  				break;	
							}
							case 23:{//arcocoseno arccos
								ecuacion[auxEcuacion]="arccos(";
				  				break;	
							}
							case 24:{//coseno hiperbolico cosh
								ecuacion[auxEcuacion]="csh(";
				  				break;	
							}
							case 25:{//raiz
								ecuacion[auxEcuacion]="sqrt(";
				  				break;	// 4 5 + 8 9 * sqrt( 4 )
							}
							case 26:{// )
								ecuacion[auxEcuacion]=")";
				  				break;	
							}
							case 27:{//tangente tan
								ecuacion[auxEcuacion]="tan(";
			  					break;	
							}
							case 28:{//arcotangente arctan
								ecuacion[auxEcuacion]="arctan(";
			  					break;	
							}
							case 29:{//tangente hiperbolica tanh
								ecuacion[auxEcuacion]="tgh(";
			  					break;	
							}
							case 30:{//punto decimal .
								ecuacion[auxEcuacion]=".";
			  					break;	
							}
							case 31:{//borrar
								ecuacion[auxEcuacion-1]=" ";
								auxEcuacion--;
								auxEcuacion--;
			  					break;	
							}
						}
						if(op2!=32)
						{
							auxEcuacion++;
						}
					
				  	}while(op2!=32);
				  	
				  	if(exprValidaOperadores(ecuacion,auxEcuacion)==true && exprValidaPotencia(ecuacion,auxEcuacion)==true && validarParentesis(ecuacion,auxEcuacion)==true && validarPunto(ecuacion,auxEcuacion)==true/*&& exprValidaPunto(ecuacion,auxEcuacion)==true&&validarPuntos(ecuacion,auxEcuacion)==true*/ ){
						for(int a=0;a<auxEcuacion;a++)
						{
							auxEc+=ecuacion[a];
						}
						ecValida=true;
						cout<<endl;				
					}else{
						cout<<"\nError de escritura "<<endl;
						ecValida=false;
					}
					system("pause");
				break;
			}
			case 2: {
				if(ecValida==true)
				{
					 if(auxEc1 !=auxEc )
						{
							pe1="";
							resultado=0;
						 	probe=auxEc;
							Prefija cambio;
							
							pe= cambio.inAPre(probe);
							
							for(int h=0;h<=cambio.getPosi();h++)
							{
								
							pe1+=pe[h];   
							
							}
							cout<<"\n\tInfija: "<<auxEc<<endl;
							cout<<"\tPrefija: "<<pe1;
							resultado=cambio.resuelve(probe);	
							cout<<"\n\tEl resultado es: "<<cambio.resuelve(probe)<<endl;
							auxEc1=auxEc;
							system("pause");							
							
						}
						else
						{
							string probe=auxEc;
							cout<<"\n\tInfija: "<<auxEc<<endl;
							Prefija cambio;
							cout<<"\tPrefija: "<<pe1<<endl;
							cout<<"\tEl resultado es: "<<resultado<<endl;
							system("pause");
						}
				}else{
					cout<<"\n\tPor favor, ingrese una ecuacion valida."<<endl;
					system("pause");
				}
				break;
			}
			case 3:
			{	
			if(ecValida==true)
				{
					string probanding=auxEc;
					Postfija cambiante;
					cout<<"\n\tInfija: "<<probanding<<endl;
					string *po= cambiante.inAPost(probanding);
					int contador=0;
					for(int h=0;h<cambiante.getPosi();h++)
					{
						if(contador==0){
							cout<<"\t"<<po[h];
							contador++;
						}else {
							cout<<po[h];
						}
						
					}
					
					cout<<"\n\tEl resultado es: "<<cambiante.resuelve(probanding)<<endl;
					system("pause");
				}else{
					cout<<"\nPor favor, ingrese una ecuacion valida."<<endl;
					system("pause");
				}				
							
			    break;
			}
			case 4:{
				cout<<"\nGracias por usar nuestro programa."<<endl;
				//exit(EXIT_SUCCESS);
				break;
			}				
		}
	}while(op!=4);
}
int MenuCalc::menuCursorCalc(const char *titulo, const char *opciones[], int n,const char *ecuacion[],int auxEcuacion,int auxPos){
	
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	
	int opcionSeleccionada = auxPos;
	int aux1=1;
	int aux2=1;
	int tecla;
	bool repite = true;
	
	do
	{
		system("cls"); 
		color(hConsole,7);
		gotoxy(15,2); 

		for(int p=0;p<auxEcuacion;p++)
		{
			cout << ecuacion[p];
		}
	    //Imprime el título
	    gotoxy(15,4); 
		cout << titulo;
	    
	    //Imprime las opciones
	    int i,i2=0,i3=0,i4=0,i5=0,i6=0;
	    
	    for((i=0);(i<n);(i++))
	    {
	    	if(i==opcionSeleccionada-1)
			{
				color(hConsole,4);
			}else
			{
				color(hConsole,7);
			}
	    	if(i<5)
	    	{
	    		gotoxy(10, 6 + i); 
				cout << "||" << opciones[i]<<" ||";
			}else if(i2<5){
				gotoxy(20, 6 + i2); 
				cout << "||" << opciones[i]<<" ||";
				i2++;
			}else if(i3<5){
				gotoxy(30, 6 + i3); 
				cout << "||" << opciones[i]<<" ||";
				i3++;
			}else if(i4<5){
				gotoxy(40, 6 + i4); 
				cout << "||" << opciones[i]<<" ||";
				i4++;
			}else if(i5<5){
				gotoxy(55, 6 + i5); 
				cout << "||" << opciones[i]<<" ||";
				i5++;
			}else if(i6<7){
				gotoxy(70, 6 + i6); 
				cout << "||" << opciones[i]<<" ||";
				i6++;
			}	
			
		}
	    
		do
		{
			tecla = getch();
		}
		while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER && tecla != TECLA_DERECHA && tecla != TECLA_IZQUIERDA);
		
		switch(tecla)
		{
			case TECLA_ARRIBA:
				opcionSeleccionada --;
				
				if (opcionSeleccionada < 1)
				{
					opcionSeleccionada = n;
				}
				
				break;
			
			case TECLA_ABAJO:
				opcionSeleccionada ++;
				
				if (opcionSeleccionada > n)
				{
					opcionSeleccionada = 1;
				}
				
				break;
				
			case TECLA_DERECHA:
				opcionSeleccionada+=5;
				
				if (opcionSeleccionada > n)
				{
					opcionSeleccionada = 1;
				}
				
				break;
				
			case TECLA_IZQUIERDA:
				opcionSeleccionada-=5;
				
				if (opcionSeleccionada < 1)
				{
					opcionSeleccionada = n;
				}
				
				break;
					
			case ENTER:
				repite = false;
				color(hConsole,7);
				break;
		}
    }while(repite);
	
	return opcionSeleccionada;	
}
int MenuCalc::menuCursor(const char *titulo, const char *opciones[], int n){
	
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;
	
	do
	{
		color(hConsole,7);
		system("cls");
	    //Imprime el título
	    gotoxy(15,2); cout << titulo;
	    
	    //Imprime las opciones
	    int i;
	    
	    for((i=0);(i<n);(i++))
	    {
	    	if(i==opcionSeleccionada-1)
			{
				color(hConsole,4);
			}else
			{
				color(hConsole,7);
			}
	    	gotoxy(10, 4 + i); cout << i+1 << ") " << opciones[i];
		}
		
		do
		{
			tecla = getch();
		}
		while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);
		
		switch(tecla)
		{
			case TECLA_ARRIBA:
				opcionSeleccionada --;
				
				if (opcionSeleccionada < 1)
				{
					opcionSeleccionada = n;
				}
				
				break;
			
			case TECLA_ABAJO:
				opcionSeleccionada ++;
				
				if (opcionSeleccionada > n)
				{
					opcionSeleccionada = 1;
				}
				
				break;
				
			case ENTER:
				repite = false;
				color(hConsole,7);
				break;
		}
    }
    while(repite);
	
	return opcionSeleccionada;	
	
}
void MenuCalc::gotoxy(int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	
	SetConsoleCursorPosition(hCon, dwPos);
}
bool MenuCalc::exprValidaOperadores(const char *ecuacion[],int auxEcuacion){
	
	bool valida=true;
	const char *c1;
	const char *c2;
	for(int p=0;p<auxEcuacion;p++)
	{
		c1 = ecuacion[p];
		c2 = ecuacion[p+1];
		if (c1=="+"||c1=="-"||c1=="*"||c1=="/"||c1=="^(")
		{
			if (c2=="+"||c2=="-"||c2=="*"||c2=="/"||c2=="^(")
			{
				valida=false;
				break;
			}			
		}
	}
	return valida;
}

bool MenuCalc::exprValidaPunto(const char *ecuacion[],int auxEcuacion){
	
	bool valida=false;
	const char *c1;
	const char *c2;
	
	for(int p=0;p<auxEcuacion;p++)
	{
		c1 = ecuacion[p];
		c2 = ecuacion[p+1];
		if (c1==".")
		{
			
			if (c2=="0"||c2=="1"||c2=="2"||c2=="3"||c2=="4"||c2=="5"||c2=="6"||c2=="7"||c2=="8"||c2=="9")
			{
				valida=true;
				break;
			}			
		}
	}
	return valida;
}
bool MenuCalc::validarPunto(const char *ecuacion[],int n){
	bool valida=true;
	for(int i=0;i<10;i++)
	{
		if((ecuacion[i]==".")&&(ecuacion[i+1]==".")){	
			return valida=false;
		}else if((ecuacion[i]==".")&&(ecuacion[i+2]==".")){	
			return valida=false;
		}
    }
    return valida;
    
}
bool MenuCalc::exprValidaPotencia(const char *ecuacion[],int auxEcuacion){
	
	bool valida=true;
	const char *c1;
	const char *c2;
	
	for(int p=0;p<auxEcuacion;p++)
	{
		c1 = ecuacion[p];
		c2 = ecuacion[p+1];
		if (c1=="^(")
		{
			
			if (c2=="+"||c2=="-"||c2=="*"||c2=="/"||c2=="^("||c2==".")
			{
				valida=false;
				break;
			}			
		}
	}
	return valida;
}
bool MenuCalc::validarParentesis(const char *ecuacion[],int pos){
	int abre=0;
	int cierra=0;
	 
	for(int a=0;a<pos;a++)
	{
		if(ecuacion[a]=="(" || ecuacion[a]=="sin(" || ecuacion[a]=="cos(" || ecuacion[a]=="tanh(" || ecuacion[a]=="arctan(" || ecuacion[a]=="tan(" || ecuacion[a]=="sqrt(" || ecuacion[a]=="cosh("||ecuacion[a]=="arccos(" || ecuacion[a]=="^("||ecuacion[a]=="sinh(" || ecuacion[a]=="arcsin("){
			abre++;
		}else if(ecuacion[a]==")"){
			cierra++;
		}
	}
	if(abre==cierra){
	  return true;
	}else{
		return false;	
	}	
	 
}
