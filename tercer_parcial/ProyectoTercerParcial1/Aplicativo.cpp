#include <iostream>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	int gd = DETECT;
	int gm;
//	initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1100,700); 
	int opc, opc1, opc2, opc3, entero, numeroVal;
	char datoEntero[100], datoCaracter[100];
	Operaciones<string> *op;
	Operaciones<int> *op1;
	ListaDoble<string> *lis;
	ListaDoble<string> *lis1;
	ListaDoble<string> *lis2;
	bool repetir;
	do{
		system("cls");
        cout << "-----------------------MENU-----------------------" << endl
             << endl; 
        cout << "\t[1]  Ingresar Numeros" << endl;
        cout << "\t[2]  Ingresar Letras" << endl;
		cout << "\t[0]  Salir" << endl;
		cout << " " << endl;
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
								lis->insertarPorCola(datoEntero);
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
								lis1->insertarPorCola(datoEntero);
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
								cout << " " << endl;
								str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
								opc2=funcion_atoi(datoEntero,strlen(datoEntero));
								cout<<endl;
								switch(opc2){
									case 1:
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto A "<<endl;
										lis->mostrarPorCabeza();
										cout<<"Conjunto B "<<endl;
										lis1->mostrarPorCabeza();
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto resultado "<<endl;
										op->uniones(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2);
										system("pause");
									break;
									case 2:
										cout<<"Conjunto A "<<endl;
										lis->mostrarPorCabeza();
										cout<<"Conjunto B "<<endl;
										lis1->mostrarPorCabeza();
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto resultado "<<endl;
										op->interseccion(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2);
										system("pause");
									break;
									case 3:
										cout<<"Conjunto A "<<endl;
										lis->mostrarPorCabeza();
										cout<<"Conjunto B "<<endl;
										lis1->mostrarPorCabeza();
										lis2 = new ListaDoble<string>();
										cout<<"Conjunto resultado "<<endl;
										op->complemento(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2);
										system("pause");
									break;
									case 4:
										do{
											system("cls");
									        cout << "-----------------------Diferencia-----------------------" << endl
									             << endl; 
									        cout << "\t[1]  A - B" << endl;
									        cout << "\t[2]  B - A" << endl;
											cout << "\t[0]  Regresar" << endl;
											cout << " " << endl;
											str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
											opc3=funcion_atoi(datoEntero,strlen(datoEntero));
											cout<<endl;
											switch(opc3){
												case 1:
													dibujarDiferenciaAB();
													cout<<"Conjunto A "<<endl;
													lis->mostrarPorCabeza();
													cout<<"Conjunto B "<<endl;
													lis1->mostrarPorCabeza();
													lis2= new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis, lis1, lis2);
													system("pause");
													break;
												case 2:
													dibujarDiferenciaBA();
													cout<<"Conjunto A "<<endl;
													lis->mostrarPorCabeza();
													cout<<"Conjunto B "<<endl;
													lis1->mostrarPorCabeza();
													lis2 = new ListaDoble<string>();
													cout<<"Conjunto resultado "<<endl;
													op->diferencia(lis1, lis, lis2);
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
										cout<<"Conjunto A"<<endl;
										lis->mostrarPorCabeza();
										cout<<"Conjunto B"<<endl;
										lis1->mostrarPorCabeza();
										lis2 = new ListaDoble<string>();
										op->diferenciaSimetrica(lis, lis1, lis2);
										cout<<"Conjunto resultado "<<endl;
										op->mostrar(lis2);
										
										system("pause");
										break;
									case 0:
										opc2 = 6;
										system("pause");
								}
								if(opc2==6){
									break;	
								}
							}while(opc!= 1 || opc != 2 || opc != 3 || opc != 4 || opc != 5||opc != 0 );	
					case 0:
						opc = 6;
						system("pause");
					}
					if(opc2==6){
						break;	
					}
					
				}while(opc!= 1 || opc != 2 || opc != 3||opc != 0 );
			case 2:
					lis = new ListaDoble<string>();
					lis1 = new ListaDoble<string>();
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
									str_cpy(datoCaracter,ingresocaracteres("\nIngrese una letra un conjunto A: "));
									lis->insertarPorCola(datoCaracter);
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otra letra al conjunto A (1 = si/0 = no): "));
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
										str_cpy(datoCaracter,ingresocaracteres("\nIngrese una letra un conjunto B: "));
										lis1->insertarPorCola(datoCaracter);
										
											str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otra letra al conjunto B (1 = si/0 = no): "));
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
									do{
										system("cls");
								        cout << "-----------------------Operaciones-----------------------" << endl
								             << endl; 
								        cout << "\t[1]  Union" << endl;
								        cout << "\t[2]  Interseccion" << endl;
								        cout << "\t[3]  Complemento" << endl;
										cout << "\t[4]  Diferencia" << endl;
										cout << "\t[5]  Diferencia simetrica" << endl;
										cout << "\t[0]  Regresar" << endl;
										cout << " " << endl;
										str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
										opc2=funcion_atoi(datoEntero,strlen(datoEntero));
										cout<<endl;
										switch(opc2){
											case 1:
												cout<<"Conjunto A "<<endl;
												lis->mostrarPorCabeza();
												cout<<"Conjunto B "<<endl;
												lis1->mostrarPorCabeza();
												lis2 = new ListaDoble<string>();
												op->uniones(lis, lis1, lis2);
												cout<<"Conjunto resultante "<<endl;
												
												lis2->mostrarPorCabeza();	
												system("pause");
												break;
											case 2:
												cout<<"Conjunto A "<<endl;
												lis->mostrarPorCabeza();
												cout<<"Conjunto B "<<endl;
												lis1->mostrarPorCabeza();
												lis2 = new ListaDoble<string>();
												op->interseccion(lis, lis1, lis2);
												cout<<"Conjunto resultante "<<endl;
												
												lis2->mostrarPorCabeza();	
												system("pause");
												break;
											case 3:
												cout<<"Conjunto A "<<endl;
												lis->mostrarPorCabeza();
												cout<<"Conjunto B "<<endl;
												lis1->mostrarPorCabeza();
												op->complemento(lis, lis1, lis2);
												cout<<"Conjunto resultante "<<endl;
												
												lis2->mostrarPorCabeza();	
												system("pause");
												break;
											case 4:
												do{
													system("cls");
											        cout << "-----------------------Diferencia-----------------------" << endl
											             << endl; 
											        cout << "\t[1]  A - B" << endl;
											        cout << "\t[2]  B - A" << endl;
													cout << "\t[0]  Regresar" << endl;
													cout << " " << endl;
													str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
													opc3=funcion_atoi(datoEntero,strlen(datoEntero));
													cout<<endl;
													switch(opc3){
														case 1:
															dibujarDiferenciaAB();
															cout<<"Conjunto A "<<endl;
															lis->mostrarPorCabeza();
															cout<<"Conjunto B "<<endl;
															lis1->mostrarPorCabeza();
															lis2 = new ListaDoble<string>();
															op->diferencia(lis, lis1, lis2);
															cout<<"Conjunto resultante "<<endl;
												
															system("pause");
															break;
														case 2:
															dibujarDiferenciaBA();
															cout<<"Conjunto A "<<endl;
															lis->mostrarPorCabeza();
															cout<<"Conjunto B "<<endl;
															lis1->mostrarPorCabeza();
															lis2 = new ListaDoble<string>();
															op->diferencia(lis1, lis, lis2);
															cout<<"Conjunto resultante "<<endl;
												
															system("pause");
															break;
														case 0:
															opc3 = 3;
															system("pause");
													}
													if(opc3==3){
														break;
													}
												}while(opc3!= 1 || opc3 != 2||opc3 != 0 );
												system("pause");
												break;
											case 5:
												cout<<"Conjunto A "<<endl;
												lis->mostrarPorCabeza();
												cout<<"Conjunto B "<<endl;
												lis1->mostrarPorCabeza();
												lis2 = new ListaDoble<string>();
												op->diferenciaSimetrica(lis, lis1, lis2);
												cout<<"Conjunto resultante "<<endl;
												lis2->mostrarPorCabeza();
												system("pause");
												break;
											case 0:
												opc2 = 6;
												system("pause");
										}
										if(opc2==6){
											break;
										}
									}while(opc2!= 1 || opc2 != 2|| opc2 != 3|| opc2 != 4|| opc2 != 5|| opc2 != 0);
									system("pause");
									break;
								case 0:
									opc1=5;
										
						}
						if(opc1==5){
							break;
						}
			}while(opc1!= 1 || opc1 != 2|| opc1 != 3||  opc1 != 0);
			system("pause");
			break;	
				
		}
		
	}while(opc!= 1 || opc != 2||opc != 0 );
	
	
}