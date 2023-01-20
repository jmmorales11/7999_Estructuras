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
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13
using namespace std;

void Menu::menuPrincipal(){
	int cedula,horas,opcMP=0, opcMR=0,opcMB=0,opcML=0,opcOL=0,tamNombre=0,tamApellido=0;
	bool repetir=true,repetir2=true,repetir3=true,repetir1=true,repetir4=true,vCedula=true,vNombre=true,vApellido=true;
    ValidacionDatos objValidar;
    char enteroC[10];
    char nombreC[30],apellidoC[30],cedulaC[30];
    string nombre,apellido,cargo,cedulaS;
    int entero;
	const char *titulo="BIENVENIDO AL APLICATIVO ORDENAMIENTO BURBUJA CON LISTAS";
    const char *opciones[]={"Registrar datos en listas.","Ordenar datos en listas.","Cerrar aplicativo."};
    const char *titulo1="REGISTRO LISTAS";
    const char *opciones1[]={"Ingresar en lista simple.","Ingresar en lista doble.","Ingresar en lista circular.","Cerrar aplicativo."};
    const char *titulo2="REGISTRO DATOS";
    const char *opciones2[]={"Insertar dato por cabeza.","Insertar dato por cola.","Insertar dato entre.","Eliminar dato por cabeza."
	,"Eliminar dato por cola.","Eliminar dato entre.","Mostrar datos.","Retornar al menu principal."};
    const char *titulo3="ORDENAMIENTO BURBUJA CON LISTAS";
    const char *opciones3[]={"Ordenar para lista simple.","Ordenar para lista doble.","Ordenar para lista circular.","Retornar al menu principal."};
    const char *titulo4="DE QUE MANERA DESEA ORDENAR?";
	const char *opciones4[]={"Ordenar por cedula.","Ordenar por apellido","Retornar al menu principal."};
	
	/*
	const char *opcionesH[]={"SI.","NO"};
	const char *tituloND="REGISTRO NOMINA DOBLE";
	const char *opcionesND[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar apellidos iguales","Mostrar empleados","Retornar"};
    const char *tituloNC="REGISTRO NOMINA CIRCULAR";
    const char *opcionesNC[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar posicion","Mostrar empleados","Retornar"};*/
    ListaDoble<Persona> objLista;
	
	do{
    	opcMP = menu(titulo,opciones,3);
    	switch(opcMP){
    		case 1:{
    			system("cls");
    			do{
    				opcML=menu(titulo1,opciones1,4);
    				switch(opcML){
    					case 1:{
    						system("cls");
    						cout<<"Aqui la lista simple";
    						system("pause");
							break;
						}
						case 2:{
							do{					
								opcMR=menu(titulo2,opciones2,8);
									switch(opcMR){
										case 1:{
										system("cls");
										//
							do{
    					    nombre=objValidar.lecturaTexto("\nIngrese el nombre del cliente-> ");
    					    tamNombre=nombre.size();
    					    if(tamNombre==0){
    					    vNombre=true;
    					    cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
							}else{
							vNombre=false;
							}
							}while(vNombre);
							vNombre=true;
							//
							
							//
							do{
    					    apellido=objValidar.lecturaTexto("\nIngrese el apellido del cliente-> ");	
    					    tamApellido=apellido.size();
    					    if(tamApellido==0){
    					    vApellido=true;
    					    cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
							}else{
							vApellido=false;
							}
							}while(vApellido);
							vApellido=true;
							//
							do{
    						cedulaS=objValidar.lecturaTextoNumerico("\nIngrese una cedula->");
    						vCedula=verificarCedula(cedulaS);
							if(vCedula==false){
							cout<<"\nError: la cedula no es la adecuada, ingrese nuevamente"<<endl;
							}
							}while(!vCedula);
							Persona *persona = new Persona(cedulaS,nombre,apellido);			
							objLista.insertarPorCabeza(persona);
										system("pause");
										break;
										}
										case 2:{
										system("cls");
																				//
							do{
    					    nombre=objValidar.lecturaTexto("\nIngrese el nombre del cliente-> ");
    					    tamNombre=nombre.size();
    					    if(tamNombre==0){
    					    vNombre=true;
    					    cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
							}else{
							vNombre=false;
							}
							}while(vNombre);
							vNombre=true;
							//
							
							//
							do{
    					    apellido=objValidar.lecturaTexto("\nIngrese el apellido del cliente-> ");	
    					    tamApellido=apellido.size();
    					    if(tamApellido==0){
    					    vApellido=true;
    					    cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
							}else{
							vApellido=false;
							}
							}while(vApellido);
							vApellido=true;
							//
							do{
    						cedulaS=objValidar.lecturaTextoNumerico("\nIngrese una cedula->");
    						vCedula=verificarCedula(cedulaS);
							if(vCedula==false){
							cout<<"\nError: la cedula no es la adecuada, ingrese nuevamente"<<endl;
							}
							}while(!vCedula);
							Persona *persona = new Persona(cedulaS,nombre,apellido);	
										objLista.insertarPorCola(persona);
										system("pause");
										break;
										}
										case 3:{
										system("cls");
																							//
							do{
    					    nombre=objValidar.lecturaTexto("\nIngrese el nombre del cliente-> ");
    					    tamNombre=nombre.size();
    					    if(tamNombre==0){
    					    vNombre=true;
    					    cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
							}else{
							vNombre=false;
							}
							}while(vNombre);
							vNombre=true;
							//
							
							//
							do{
    					    apellido=objValidar.lecturaTexto("\nIngrese el apellido del cliente-> ");	
    					    tamApellido=apellido.size();
    					    if(tamApellido==0){
    					    vApellido=true;
    					    cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
							}else{
							vApellido=false;
							}
							}while(vApellido);
							vApellido=true;
							//
							do{
    						cedulaS=objValidar.lecturaTextoNumerico("\nIngrese una cedula->");
    						vCedula=verificarCedula(cedulaS);
							if(vCedula==false){
							cout<<"\nError: la cedula no es la adecuada, ingrese nuevamente"<<endl;
							}
							}while(!vCedula);
							Persona *persona = new Persona(cedulaS,nombre,apellido);	
										cout<<"\n";
										objLista.mostrarPorCabeza();
										objLista.insertarEntre(persona);
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
						case 3:{
							system("cls");
    						cout<<"Aqui la lista circular";
    						system("pause");
							break;
						}
						case 4:{
							repetir1=false;
							break;
						}
					}
    				
				}while(repetir1);
				repetir1=true;
			
				
				break;
			}
			
    		case 2:{
    			system("cls");
    			
    			cout<<"\n\tAqui los metodos"<<endl;
    			
    			do{
    			opcMB=menu(titulo3,opciones3,4);
    			
    				switch(opcMB){
    					case 1:{
    						system("cls");
    						cout<<"Aqui ordenamiento en lista simple"<<endl;
    						do{
    							opcOL=menu(titulo4,opciones4,3);
    							switch(opcOL){
    								case 1:{
    									system("cls");
    									cout<<"Aqui ordenar por cedula"<<endl;
    									system("pause");
										break;
									}
									case 2:{
										system("cls");
										cout<<"Aqui ordenar por apellido"<<endl;
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
							cout<<"Aqui ordenamiento en lista doble"<<endl;
							    do{
    							opcOL=menu(titulo4,opciones4,3);
    							switch(opcOL){
    								case 1:{
    									system("cls");
    									cout<<"Aqui ordenar por cedula"<<endl;
    									system("pause");
										break;
									}
									case 2:{
										system("cls");
										cout<<"Aqui ordenar por apellido"<<endl;
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
						case 3:{
							system("cls");
							cout<<"Aqui ordenamiento en lista circular"<<endl;
							    do{
    							opcOL=menu(titulo4,opciones4,3);
    							switch(opcOL){
    								case 1:{
    									system("cls");
    									cout<<"Aqui ordenar por cedula"<<endl;
    									system("pause");
										break;
									}
									case 2:{
										system("cls");
										cout<<"Aqui ordenar por apellido"<<endl;
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

