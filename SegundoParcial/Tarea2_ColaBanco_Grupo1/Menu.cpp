/*********
UFA - ESPE
AUTORES: Mat�as Padr�n,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACI�N: 19/12/2022
FECHA DE MODIFICACI�N: 21/12/2022
Grupo1-Gesti�n banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
�*********/

#include "Menu.h"
#include "Cola.cpp"
#include "ValidacionDatos.cpp"
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13
using namespace std;

void Menu::menuPrincipal(){
	int cedula,horas,opcMP=0, opcMR=0,tamNombre=0,tamApellido=0;
	bool repetir=true,repetir2=true,vCedula=true,vNombre=true,vApellido;
    ValidacionDatos objValidar;
    char nombreC[30],apellidoC[30],cedulaC[30];
    string nombre,apellido,cargo,cedulaS;
    Cola<Persona> objCola;
	const char *titulo="BIENVENIDO AL APLICATIVO GESTION BANCO";
    const char *opciones[]={"Registrar clientes.","Generar tabla tiempos.","Cerrar aplicativo."};
    const char *titulo2="REGISTRO CLIENTE";
    const char *opciones2[]={"Ingresar cliente.","Eliminar cliente.","Mostrar clientes registrados.","Retornar al menu principal"};
          	
	do{
    	opcMP = menu(titulo,opciones,3);
    	switch(opcMP){
    		case 1:{
    			system("cls");
					do{											
					opcMR=menu(titulo2,opciones2,4);
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
							Fecha *f = new Fecha();
							cout<<"\nINGRESO FECHA NACIMIENTO"<<endl;
							f->ingresarFecha();
							Persona *persona = new Persona(cedulaS,nombre,apellido,f);
							objCola.push(persona);
							
							system("pause");
							break;
						}
						case 2:{
							system("cls");
							objCola.pop();
							cout<<"\nSe ha eliminado correctamente."<<endl;
							system("pause");
							break;
						}
						case 3:{
							system("cls");
							objCola.mostrar();
							system("pause");
							break;
						}
						case 4:{
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
    			
    			cout<<"\n\tGENERACION TABLA TIEMPOS"<<endl;
    			Fecha *f = new Fecha();
				Persona *per= new Persona(cedulaS,nombre,apellido,f);
    			objCola.mostrarTabla(per);
				system("pause");
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

