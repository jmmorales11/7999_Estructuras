/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/


#include "Menu.h"
#include "ListaDoble.cpp"
#include "ValidacionDatos.cpp"
#include "TablaCerradaEnteros.cpp"
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13

using namespace std;

void Menu::menuPrincipal(){
	int cedula,horas,opcMP=0, opcMR=0,opcMB=0,opcTR=0,valor=0;
	bool repetir=true,repetir2=true,repetir3=true,repetir4=true;
    ValidacionDatos objValidar;
    char enteroC[10];
    int entero;
	const char *titulo="BIENVENIDO AL APLICATIVO METODOS DE BUSQUEDA";
    const char *opciones[]={"Registrar Datos.","Metodos Busqueda.","Cerrar aplicativo."};
    const char *titulo2="REGISTRO DATOS";
    const char *opciones2[]={"Insertar dato por cabeza.","Insertar dato por cola.","Insertar dato entre.","Eliminar dato por cabeza."
	,"Eliminar dato por cola.","Eliminar dato entre.","Mostrar datos.","Retornar al menu principal."};
    const char *titulo3="METODOS BUSQUEDA";
    const char *opciones3[]={"Busqueda Secuencial.","Busqueda Binaria.","Busqueda Hash.","Retornar al menu principal."};
    const char *titulo4="TIPOS DE REGISTRO";
	const char *opciones4[]={"Ingresar Por Lista.","Ingresar Por Tabla","Retornar al menu principal."};
    /*
	const char *opcionesRNS[]={"Actualizar Registro","Registrar manualmente","Registrar por archivo de texto plano","Retornar"};
	const char *tituloH="El empleado realizo horas extra durante su jornada laboral?";


	const char *opcionesND[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar apellidos iguales","Mostrar empleados","Retornar"};
    const char *tituloNC="REGISTRO NOMINA CIRCULAR";
    const char *opcionesNC[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar posicion","Mostrar empleados","Retornar"};*/
    ListaDoble<int> objLista;
	TablaCerradaEnteros objHash;
	
	do{
    	opcMP = menu(titulo,opciones,3);
    	switch(opcMP){
    		case 1:{
    			system("cls");
    				do{
    					opcTR=menu(titulo4,opciones4,3);
    					switch(opcTR){
    						case 1:{
    							system("cls");
    							do{
						
					
					opcMR=menu(titulo2,opciones2,8);
					switch(opcMR){
						case 1:{
							system("cls");
							entero=objValidar.casteoEnteros(enteroC,"\nIngrese el dato-> ");
							objLista.insertarPorCabeza(entero);
							system("pause");
							break;
						}
						case 2:{
							system("cls");
							entero=objValidar.casteoEnteros(enteroC,"\nIngrese el dato-> ");
							objLista.insertarPorCola(entero);
							system("pause");
							break;
						}
						case 3:{
							system("cls");
							entero=objValidar.casteoEnteros(enteroC,"\nIngrese el dato-> ");
							cout<<"\n";
							objLista.mostrarPorCabeza();
							objLista.insertarEntre(entero);
							system("pause");
							break;
						}
						case 4:{
							system("cls");
							objLista.eliminarPorCabeza();
							system("pause");
							break;
						}
						case 5:{
							system("cls");
							objLista.eliminarPorCola();
							system("pause");
							break;
						}
						case 6:{
							system("cls");
							char posC[10];
							int pos;
							objLista.mostrarPorCabeza();
							pos=objValidar.casteoEnteros(posC,"\nIngrese el nodo a eliminar-> ");
							objLista.eliminarEntre(pos);
							system("pause");
							break;
						}
						case 7:{
							system("cls");
							cout<<"\nMostrar"<<endl;
							objLista.mostrarPorCabeza();
							system("pause");
							break;
						}
		
						case 8:{
							repetir2=false; 
							break;
						}
					}
					}while(repetir2);
					repetir2=true;
								break;
							}
							case 2:{
								system("cls");
								entero=objValidar.casteoEnteros(enteroC,"\nIngrese el dato-> ");
								objHash.insertar(entero);
								cout << "\nDato Ingresado" << endl;
								objHash.imprimir();
								system("pause");
								break;
							}
							case 3:{
								repetir4=false;
								break;
							}
						}
					}while(repetir4);
					repetir4=true;
					
				
				break;
			}
			
    		case 2:{
    			system("cls"); 			
    			do{
    			opcMB=menu(titulo3,opciones3,4);
    			
    				switch(opcMB){
    					case 1:{
    						system("cls");
    						int valor=objValidar.casteoEnteros(enteroC,"\nIngrese el valor a buscar-> ");
							objLista.busquedaSecuencial(valor);
							cout<<"\n";
							cout<<"\n";
							objLista.mostrarPorCabeza();
							system("pause");
							break;
						}
						case 2:{
							system("cls");
							objLista.ordenamientoBurbuja();
							bool encontrado=false;
							valor=objValidar.casteoEnteros(enteroC,"\nIngrese el valor a buscar-> ");
							encontrado=objLista.busquedaBinaria(valor);
							if(encontrado==true)
								cout<<"\nValor encontrado"<<endl;
							else
								cout<<"\nValor NO encontrado"<<endl;
								
							cout<<"\n";
							cout<<"\n";
							objLista.mostrarPorCabeza();
    						system("pause");
							break;
						}
						case 3:{
							system("cls");
							valor=objValidar.casteoEnteros(enteroC,"\nIngrese el valor a buscar-> ");
							objHash.buscar(valor);
    						system("pause");
							break;
						}
						case 4:{
							repetir3=false;
							break;
						}
					}
    				
				}while(repetir3);
    			repetir3=true;
				break;
			}
							
    		case 3:{
    			system("cls");
    			cout<<"\n\t  HASTA PRONTO";
                repetir=false; 
                break;
			}
		}
	}while(repetir);
}

/**
 * Muestra un menú con un título y una lista de opciones, y devuelve el número de la opción
 * seleccionada por el usuario
 * 
 * @param titulo El título del menú.
 * @param opciones es una matriz de cadenas que contiene las opciones que se mostrarán en el menú.
 * @param n número de opciones
 * 
 * @return La opción seleccionada por el usuario.
 */
int Menu::menu(const char *titulo,const char *opciones[],int n){
    int opcSeleccionada=1;
    int tecla;
    bool repetir=true;
    do{
        system("cls");
        gotoxy(5,3+opcSeleccionada); cout<<"-->";
        gotoxy(15,2); cout<<titulo;
        for(int i=0;i<n;i++){
            gotoxy(10,4+i); cout<<i+1<<"."<<opciones[i];
        }

        do{
            tecla=getch();
        }while(tecla!=Tecla_Arriba && tecla!=Tecla_Abajo && tecla!=Enter);
        
        switch (tecla)
        {
        case Tecla_Arriba:
            opcSeleccionada--;
            if(opcSeleccionada<1){
               opcSeleccionada=n;
            }
            break;
        case Tecla_Abajo:
            opcSeleccionada++;
            if(opcSeleccionada>n){
               opcSeleccionada=1;
            }
            break;
        case Enter:
            repetir=false;
            break;
        }
    }while(repetir);


    return opcSeleccionada;

}

/**
 * Mueve el cursor a la posición especificada
 * 
 * @param x La coordenada x del cursor.
 * @param y La coordenada y del cursor.
 */
void Menu::gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
 
/**
 * Valida el número de DNI de una persona.
 * 
 * @param cedulaC es una matriz de caracteres que contiene la entrada del usuario.
 * 
 * @return el valor de la variable cédula.
 */
/*int Menu::validarCedula(char *cedulaC){
	ValidacionDatos objValidaciones;
	int cedula=0;
	int cifras=0;
	string cedulaS;

	do{
		try{
		cedula=objValidaciones.casteoEnteros(cedulaC,"\nIngrese una cedula correcta");
		cedulaS=cedulaC;
		cifras=cedulaS.size();
		if(cifras!=10){
			throw "Cedula incorrecta, ingrese una cedula de 10 digitos";
		}
		if(cifras==10){
			//cout<<"\nCedula correcta"<<endl;
			break;
		}
		}catch(const char* s){
			cout<<"\nCatch:"<<s<<endl;
		}
	}while(cifras!=10);
	
	return cedula;
}*/

bool Menu::verificarCedula(const string &cedula){
	    int sumaAntigua{};

    for (int i{}; i < 9; i += 2) {
        int valorDetectar = (cedula[i] - '0') * 2;

        if (valorDetectar > 9)
            valorDetectar -= 9;

        sumaAntigua += valorDetectar;
    }

    int sumaNueva{};
    
    for (int i{1}; i < 8; i += 2) {
        sumaNueva += (cedula[i] - '0');
    }

    int digitoVerificar = ((sumaAntigua + sumaNueva) % 10 != 0) ? 10 - (sumaAntigua + sumaNueva) % 10 : 0;

    return digitoVerificar == (cedula[9] - '0');
	
}

