/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include "ListaCircularDoble.cpp"
#include "ValidacionDatos.cpp"

bool verificarCedula(const string &cedula);
int main() {
	ListaCircularDoble<Persona> lst;
	ValidacionDatos objValidar;
	bool vCedula=true,vNombre=true,vApellido=true;
	int opc,contador,pos, num, cantidad,tamNombre=0,tamApellido=0;
	char datoEntero[10],posC[10];
	char nombreC[30],apellidoC[30],cedulaC[30];
    string nombre,apellido,cargo,cedulaS;
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar los elemntos de la lista " << endl;
        cout << "\t[2]  Ingresar los elemntos por cabeza " << endl;
        cout << "\t[3]  Mostrar lista " << endl;
        cout << "\t[4]  Buscar elemento" << endl;
        cout << "\t[5]  Eliminar elemento por cedula" << endl;
        cout << "\t[6]  Eliminar elemento por cabeza" << endl;
        cout << "\t[7]  Eliminar elemento por cola" << endl;
        cout << "\t[8]  ordenar cedula" << endl;
        cout << "\t[9]  ordenar apellido" << endl;
        cout << "\t[0]  Salir" << endl;
        cout << " " << endl;
        str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc)
		{
			case 1:
					{
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
							Persona *p = new Persona(cedulaS,nombre,apellido);	
						
					lst.insertarPoCola(p);
				cout<<endl;
				system("PAUSE");
				break;}
			case 2:
				{
					system("cls");
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
							Persona *p = new Persona(cedulaS,nombre,apellido);	
				lst.insertarPoCabeza(p);
				cout<<endl;
				system("PAUSE");
				break;}
				
			case 3:
			//	lst.mostrarLista();
				cout<<endl;
				lst.mostrarLista();
				system("PAUSE");
				break;
			case 4:
				cout<<endl;	
				lst.buscar();
				cout<<endl;
				cout<<endl;
				system("PAUSE");
				break;
			case 5:
				cout<<endl;
				lst.eliminar();
				cout<<endl;
				system("PAUSE");
				break;
			case 6:
				cout<<endl;
				lst.eliminarCabeza();
				cout<<endl;
				system("PAUSE");
				break;
			case 7:
				cout<<endl;
				lst.eliminarCola();
				cout<<endl;
				system("PAUSE");
				break;
			case 8:
				cout<<endl;
				lst.mostrarLista();
				cout<<"Odenar datos cedula"<<endl;
				cout<<endl;
				lst.ordenarCedula();
				lst.mostrarLista();
				system("PAUSE");
				break;
			case 9:
				cout<<endl;
				lst.mostrarLista();
				cout<<"Odenar datos apellido"<<endl;
				cout<<endl;
                lst.ordenarApellido();
				lst.mostrarLista();
				system("PAUSE");
				break;
			case 0:
				system("cls");
            	cout << "Gracias por utilizar este programa." << endl;
            	
            	system("PAUSE");
            	exit(0);
				break;
		}

	}while(opc != 1 || opc != 2|| opc != 3 || opc != 4||opc != 0 );
	return 0;
}
bool verificarCedula(const string &cedula){
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
