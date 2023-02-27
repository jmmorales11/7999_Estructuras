#include <iostream>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	int gd = DETECT;
	int gm;
	
//	initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1200,700); 

	char datoEntero[100], datoCaracter[100];
	string dato;
	Operaciones<string> *op;
	Operaciones<int> *op1;
	ListaDoble<string> *lis;
	ListaDoble<string> *lis1;
	ListaDoble<string> *lis2;
	bool repetir;
	
	int opc,opc1, opc2, opc3, entero, numeroVal;
	Caratula();	

	do{
		opc=10;
		opc1=10;
		opc2=10; 
		opc3=10;
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar Numeros" << endl;
        cout << "\t[2]  Ingresar Letras" << endl;
		cout << "\t[0]  Salir" << endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
		opc=funcion_atoi(datoEntero,strlen(datoEntero));
		cout<<endl;
		switch(opc){
			case 1:	
				lis = new ListaDoble<string>();
				lis1 = new ListaDoble<string>();
				lis2 = new ListaDoble<string>();
				do{
					system("cls");
			        cout << "-----------------------NUMEROS-----------------------" << endl
			             << endl; 
			        cout << "\t[1]  Ingresar datos Conjunto A" << endl;
			        cout << "\t[2]  Ingresar datos Conjunto B" << endl;
					cout << "\t[3]  Operaciones" << endl;
					cout << "\t[0]  Regresar" << endl;
					cout << " " << endl;
					str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
					opc1=funcion_atoi(datoEntero,strlen(datoEntero));
					cout<<endl;
					switch(opc1){
						case 1:
							do{
								str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero un conjunto A: "));
								dato=datoEntero;
								lis->insertarPorCola(dato);
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										lis->mostrarPorCabeza();
										repetir=false;
									}
							}while(repetir == true);
							system("pause");
							break;
						case 2:
							do{
								str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero un conjunto B: "));
								dato=datoEntero;
								lis1->insertarPorCola(dato);
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										lis1->mostrarPorCabeza();
										repetir=false;
									}
							}while(repetir == true);
							system("pause");
							break;
						case 3:
							if (lis1->getListaVacia() || lis->getListaVacia()){
								cout<<"Un conjunto esta vacio"<<endl;
							}else{
							
							do{
								cleardevice();
								system("cls");
						        cout << "-----------------------Operaciones-----------------------" << endl
						             << endl; 
						        cout << "\t[1]  Union" << endl;
						        cout << "\t[2]  Interseccion" << endl;
						        cout << "\t[3]  Complemento" << endl;
								cout << "\t[4]  Diferencia" << endl;
								cout << "\t[5]  Diferencia simetrica" << endl;
								cout << "\t[0]  Regresar" << endl;
								str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
								opc2=funcion_atoi(datoEntero,strlen(datoEntero));
								cout<<endl;
								switch(opc2){
									case 1:
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto resultado "<<endl;
										op->uniones(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
										op->dibujar(lis,lis1,290,100);
										system("pause");
									break;
									case 2:
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										lis2 = new ListaDoble<string>();
										op->interseccion(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
										op->dibujar(lis,lis1,290,100);
										op->dibujar(lis,lis1,290,100);
										system("pause");
									break;
									case 3:
										do{
											cleardevice();
											system("cls");
									        cout << "-----------------------Complemento-----------------------" << endl
									             << endl; 
									        cout << "\t[1]  Complemento de A" << endl;
									        cout << "\t[2]  Complemento de B" << endl;
											cout << "\t[0]  Regresar" << endl;
											cout << " " << endl;
											str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
											opc3=funcion_atoi(datoEntero,strlen(datoEntero));
											cout<<endl;
											switch(opc3){
												case 1:
													lis2 = new ListaDoble<string>();
													op->uniones(lis, lis1, lis2);
													cleardevice();
													complementoA();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													cout<<"Conjunto resultado "<<endl;
													op->dibujar(lis,lis1,290,100);
													op->complemento(lis, lis1, lis2);
													op->mostrar(lis2,190,615);
													system("pause");
													break;
												case 2:
													lis2 = new ListaDoble<string>();
													op->uniones(lis, lis1, lis2);
													cleardevice();
													complementoB();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													cout<<"Conjunto resultado "<<endl;
													op->complemento(lis1, lis, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 0:
													opc3 = 3;
											}
											if(opc3==3){
												break;
											}
										}while(opc3!= 1 || opc3 != 2||opc3 != 0 );
									break;
									case 4:
										do{
											cleardevice();
											system("cls");
									        cout << "-----------------------Diferencia-----------------------" << endl
									             << endl; 
									        cout << "\t[1]  A - B" << endl;
									        cout << "\t[2]  B - A" << endl;
											cout << "\t[0]  Regresar" << endl;
											str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
											opc3=funcion_atoi(datoEntero,strlen(datoEntero));
											cout<<endl;
											switch(opc3){
												case 1:
													dibujarDiferenciaAB();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													lis2= new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis, lis1, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 2:
													dibujarDiferenciaBA();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													lis2 = new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis1, lis, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 0:
													opc3 = 3;
											}
											if(opc3==3){
												break;
											}
										}while(opc3!= 1 || opc3 != 2||opc3 != 0 );
										system("pause");
										break;
									case 5:
										
										lis2 = new ListaDoble<string>();
										op->diferenciaSimetrica(lis, lis1, lis2);
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
										op->dibujar(lis,lis1,290,100);
										system("pause");
										break;
									case 0:
										opc2 = 6;
								}
								if(opc2==6){
									break;	
								}
							}while(opc!= 1 || opc != 2 || opc != 3 || opc != 4 || opc != 5||opc != 0 );	
						}
						system("pause");
						break;
					case 0:
						opc2 = 6;
					}
					if(opc2==6){
						break;	
					}
					
				}while(opc!= 1 || opc != 2 || opc != 3||opc != 0 );
				system("pause");
				break;
			case 2:
				lis = new ListaDoble<string>();
				lis1 = new ListaDoble<string>();
				lis2 = new ListaDoble<string>();
				do{
					system("cls");
			        cout << "-----------------------LETRAS-----------------------" << endl
			             << endl; 
			        cout << "\t[1]  Ingresar datos Conjunto A" << endl;
			        cout << "\t[2]  Ingresar datos Conjunto B" << endl;
					cout << "\t[3]  Operaciones" << endl;
					cout << "\t[0]  Regresar" << endl;
					cout << " " << endl;
					str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
					opc1=funcion_atoi(datoEntero,strlen(datoEntero));
					cout<<endl;
					switch(opc1){
						case 1:
							do{
								str_cpy(datoEntero,ingresocaracteres("\nIngrese un numero un conjunto A: "));
								dato=datoEntero;
								lis->insertarPorCola(dato);
								str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										lis->mostrarPorCabeza();
										repetir=false;
									}
							}while(repetir == true);
							system("pause");
							break;
						case 2:
							do{
								str_cpy(datoEntero,ingresocaracteres("\nIngrese un numero un conjunto B: "));
								dato=datoEntero;
								lis1->insertarPorCola(dato);	
								str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										lis1->mostrarPorCabeza();
										repetir=false;
									}
							}while(repetir == true);
							system("pause");
							break;
						case 3:
							if (lis1->getListaVacia() || lis->getListaVacia()){
								cout<<"Un conjunto esta vacio"<<endl;
							}else{
							
							do{
								cleardevice();
								system("cls");
						        cout << "-----------------------Operaciones-----------------------" << endl
						             << endl; 
						        cout << "\t[1]  Union" << endl;
						        cout << "\t[2]  Interseccion" << endl;
						        cout << "\t[3]  Complemento" << endl;
								cout << "\t[4]  Diferencia" << endl;
								cout << "\t[5]  Diferencia simetrica" << endl;
								cout << "\t[0]  Regresar" << endl;
								str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
								opc2=funcion_atoi(datoEntero,strlen(datoEntero));
								cout<<endl;
								switch(opc2){
									case 1:
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto resultado "<<endl;
										op->uniones(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
								//		op->dibujar(lis,lis1,290,100);
										system("pause");
									break;
									case 2:
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										lis2 = new ListaDoble<string>();
										op->interseccion(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
								//		op->dibujar(lis,lis1,290,100);
										system("pause");
									break;
									case 3:
										do{
											cleardevice();
											system("cls");
									        cout << "-----------------------Diferencia-----------------------" << endl
									             << endl; 
									        cout << "\t[1]  Complemento de A" << endl;
									        cout << "\t[2]  Complemento de B" << endl;
											cout << "\t[0]  Regresar" << endl;
											cout << " " << endl;
											str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
											opc3=funcion_atoi(datoEntero,strlen(datoEntero));
											cout<<endl;
											switch(opc3){
												case 1:
													lis2 = new ListaDoble<string>();
													op->uniones(lis, lis1, lis2);
													cleardevice();
													complementoA();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													cout<<"Conjunto resultado "<<endl;
													op->complemento(lis, lis1, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 2:
													lis2 = new ListaDoble<string>();
													op->uniones(lis, lis1, lis2);
													cleardevice();
													complementoB();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													cout<<"Conjunto resultado "<<endl;
													op->complemento(lis1, lis, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 0:
													opc3 = 3;
											}
											if(opc3==3){
												break;
											}
										}while(opc3!= 1 || opc3 != 2||opc3 != 0 );
									break;
									case 4:
										do{
											cleardevice();
											system("cls");
									        cout << "-----------------------Diferencia-----------------------" << endl
									             << endl; 
									        cout << "\t[1]  A - B" << endl;
									        cout << "\t[2]  B - A" << endl;
											cout << "\t[0]  Regresar" << endl;
											str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
											opc3=funcion_atoi(datoEntero,strlen(datoEntero));
											cout<<endl;
											switch(opc3){
												case 1:
													dibujarDiferenciaAB();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													lis2= new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis, lis1, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 2:
													dibujarDiferenciaBA();
													cout<<"Conjunto A "<<endl;
													op->mostrar(lis,190,505);
													cout<<"Conjunto B "<<endl;
													op->mostrar(lis1,190,555);
													lis2 = new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis1, lis, lis2);
													op->mostrar(lis2,190,615);
													op->dibujar(lis,lis1,290,100);
													system("pause");
													break;
												case 0:
													opc3 = 3;
											}
											if(opc3==3){
												break;
											}
										}while(opc3!= 1 || opc3 != 2||opc3 != 0 );
										system("pause");
										break;
									case 5:
										
										lis2 = new ListaDoble<string>();
										op->diferenciaSimetrica(lis, lis1, lis2);
										cout<<"Conjunto A "<<endl;
										op->mostrar(lis,190,505);
										cout<<"Conjunto B "<<endl;
										op->mostrar(lis1,190,555);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2,190,615);
										op->dibujar(lis,lis1,290,100);
										system("pause");
										break;
									case 0:
										opc2 = 6;
								}
								if(opc2==6){
									break;	
								}
							}while(opc!= 1 || opc != 2 || opc != 3 || opc != 4 || opc != 5||opc != 0 );	
						}
						system("pause");
						break;
					case 0:
						opc2 = 6;
					}
					if(opc2==6){
						break;	
					}
					
				}while(opc!= 1 || opc != 2 || opc != 3||opc != 0 );
				system("pause");
				break;
			case 0:
				cout<<"Gracias por utilizar este programa"<<endl;
				opc=3;
		}
		if(opc==3){
			break;
		}
		
	}while(opc!= 1 || opc != 2||opc != 0 );
	
	
}