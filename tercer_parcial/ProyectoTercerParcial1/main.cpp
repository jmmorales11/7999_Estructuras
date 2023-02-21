#include <iostream>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	int opc, opc1, opc2, opc3, entero, numeroVal;
	char datoEntero[100], datoCaracter[100];
	Operaciones<string> *op;
	Operaciones<int> *op1;
	ListaDoble<string> *lis;
	ListaDoble<string> *lis1;
	ListaDoble<string> *lis2;
	ListaDoble<int> *lis3;
	ListaDoble<int> *lis4;
	ListaDoble<int> *lis5;
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
				do{
					system("cls");
			        cout << "-----------------------NUMEROS-----------------------" << endl
			             << endl; 
			        cout << "\t[1]  Ingresar datos Conjunto A" << endl;
			        cout << "\t[2]  Ingresar datos Conjunto B" << endl;
			        cout << "\t[3]  Ingresar datos Conjunto Universal" << endl;
					cout << "\t[4]  Operaciones" << endl;
					cout << "\t[0]  Regresar" << endl;
					cout << " " << endl;
					str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
					opc1=funcion_atoi(datoEntero,strlen(datoEntero));
					cout<<endl;
					switch(opc1){
						case 1:
							do{
								str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero un conjunto A: "));
								entero=funcion_atoi(datoEntero,strlen(datoEntero));
								lis3 = new ListaDoble<int>();
								lis3->insertarPorCola(entero);
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										repetir=false;
									}
							}while(repetir == true);
							system("pause");
							break;
						case 2:
							do{
								str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero al conjunto B: "));
								entero=funcion_atoi(datoEntero,strlen(datoEntero));
								lis4 = new ListaDoble<int>();
								lis4->insertarPorCola(entero);
								
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto B (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										repetir=false;
									}	
							}while(repetir == true);
							system("pause");
							break;
						case 3:
							do{
								str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero al conjunto Universal: "));
								entero=funcion_atoi(datoEntero,strlen(datoEntero));
								lis5 = new ListaDoble<int>();
								lis5->insertarPorCola(entero);
									str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto Universal (1 = si/0 = no): "));
									cout<<"\n";
									numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
									if(numeroVal==1){
										repetir=true;
									}
									if(numeroVal==0){
										repetir=false;
									}	
							}while(repetir == true);
							system("pause");
							break;
						case 4:
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
										lis5 = new ListaDoble<int>();
										op1->uniones(lis3, lis4, lis5);
										lis5->mostrarPorCabeza();	
										system("pause");
										break;
									case 2:
										lis5 = new ListaDoble<int>();
										op1->interseccion(lis3, lis4, lis5);
										lis5->mostrarPorCabeza();	
										system("pause");
										break;
									case 3:
										op1->complemento(lis3, lis4, lis5);
										lis5->mostrarPorCabeza();	
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
													lis5 = new ListaDoble<int>();
													op1->diferencia(lis3, lis4, lis5);
													system("pause");
													break;
												case 2:
													lis5 = new ListaDoble<int>();
													op1->diferencia(lis4, lis3, lis5);
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
										lis5 = new ListaDoble<int>();
										op1->diferenciaSimetrica(lis3, lis4, lis5);
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
							system("pause");
								
				}
				if(opc1==5){
					break;
				}
			}while(opc1!= 1 || opc1 != 2|| opc1 != 3|| opc1 != 4|| opc1 != 0);
			system("pause");
			break;
			case 2:
						do{
							system("cls");
					        cout << "-----------------------LETRAS-----------------------" << endl
					             << endl; 
					        cout << "\t[1]  Ingresar datos Conjunto A" << endl;
					        cout << "\t[2]  Ingresar datos Conjunto B" << endl;
					        cout << "\t[3]  Ingresar datos Conjunto Universal" << endl;
							cout << "\t[4]  Operaciones" << endl;
							cout << "\t[0]  Regresar" << endl;
							cout << " " << endl;
							str_cpy(datoEntero,ingresarDatosEnteros("\nSelecciona: "));
							opc1=funcion_atoi(datoEntero,strlen(datoEntero));
							cout<<endl;
							switch(opc1){
								case 1:
									do{
										str_cpy(datoCaracter,ingresocaracteres("\nIngrese una letra un conjunto A: "));
										lis = new ListaDoble<string>();
										lis->insertarPorCola(datoCaracter);
											str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otra letra al conjunto A (1 = si/0 = no): "));
											cout<<"\n";
											numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
											if(numeroVal==1){
												repetir=true;
											}
											if(numeroVal==0){
												repetir=false;
											}
									}while(repetir == true);
									system("pause");
									break;
								case 2:
									do{
										str_cpy(datoCaracter,ingresocaracteres("\nIngrese una letra un conjunto B: "));
										lis1 = new ListaDoble<string>();
										lis1->insertarPorCola(datoEntero);
										
											str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otra letra al conjunto B (1 = si/0 = no): "));
											cout<<"\n";
											numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
											if(numeroVal==1){
												repetir=true;
											}
											if(numeroVal==0){
												repetir=false;
											}	
									}while(repetir == true);
									system("pause");
									break;
								case 3:
									do{
										str_cpy(datoCaracter,ingresocaracteres("\nIngrese una letra un conjunto Universal: "));
										lis2 = new ListaDoble<string>();
										lis2->insertarPorCola(datoCaracter);
											str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otra letra al conjunto Universal (1 = si/0 = no): "));
											cout<<"\n";
											numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
											if(numeroVal==1){
												repetir=true;
											}
											if(numeroVal==0){
												repetir=false;
											}	
									}while(repetir == true);
									system("pause");
									break;
								case 4:
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
												lis2 = new ListaDoble<string>();
												op->uniones(lis, lis1, lis2);
												lis2->mostrarPorCabeza();	
												system("pause");
												break;
											case 2:
												lis2 = new ListaDoble<string>();
												op->interseccion(lis, lis1, lis2);
												lis2->mostrarPorCabeza();	
												system("pause");
												break;
											case 3:
												op->complemento(lis, lis1, lis2);
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
															lis2 = new ListaDoble<string>();
															op->diferencia(lis, lis1, lis2);
															system("pause");
															break;
														case 2:
															lis2 = new ListaDoble<string>();
															op->diferencia(lis1, lis, lis2);
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
												lis2 = new ListaDoble<string>();
												op->diferenciaSimetrica(lis, lis1, lis2);
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
									system("pause");
										
						}
						if(opc1==5){
							break;
						}
			}while(opc1!= 1 || opc1 != 2|| opc1 != 3|| opc1 != 4|| opc1 != 0);
			system("pause");
			break;
			case 0:
				system("cls");
		    	cout << "Gracias por utilizar este programa." << endl;
		    	system("PAUSE");
		        exit(0);
				break;
		}
		}while(opc!= 1 || opc != 2||opc != 0 );
		

	//COMPLEMENTO
/*	//Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("i");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->eliminarPorValor("a");
	obj->mostrarPorCabeza();
//	ListaDoble<string> *obj1= new ListaDoble<string>();
//	obj1->insertarPorCola("e");
//	obj1->insertarPorCola("a");
//	obj1->insertarPorCola("y");
//	ListaDoble<string> *obj2= new ListaDoble<string>();
//	obj2->insertarPorCola("e");
//	obj2->insertarPorCola("a");
//	op->complemento(obj2,obj1,obj);*/
	
//DIFERNCIA
/*	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->insertarPorCola("y");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("e");
	obj1->insertarPorCola("a");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	op->interseccion(obj,obj1,obj2);
	*/
/*	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->insertarPorCola("y");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("i");
	obj1->insertarPorCola("a");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	op->interseccion(obj,obj1,obj2);
	*/
/*	
	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->insertarPorCola("y");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("e");
	obj1->insertarPorCola("a");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	op->diferenciaSimetrica(obj,obj1,obj2);*/
	return 0;
}