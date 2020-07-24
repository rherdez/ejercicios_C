#include <iostream>
#include "nodo.h"
#include "nodo_c.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include "clase_lista_simple.h"
#include "clase_lista_comp.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
unsigned t0,t1,t20,t21;
nodo temp;
nodo_c temp2;

clase_lista_simple lss;
clase_lista_comp   lsc;

int op;
double tiempo,tiempo2;
int main(int argc, char** argv) {
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Modificar"<<endl;
		cout<<"5) Eliminar"<<endl;
		cout<<"6) Guardar"<<endl;
		cout<<"7) Abrir"<<endl;
		cout<<"8) Ordenar"<<endl;
		cout<<"==========Lista Compuesta================"<<endl;
		cout<<"10) Agregar"<<endl;
		cout<<"20) Presentar"<<endl;
		cout<<"30) Buscar"<<endl;
		cout<<"70) Abrir"<<endl;
		cout<<"80) Ordenar"<<endl;
		
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 10:
				cout<<"Ingrese un numero: "<<endl;
				cin>>temp2.id;
				cout<<"Ingrese un nombre: "<<endl;
				cin>>temp2.nombre;
				cout<<"Ingrese sueldo: "<<endl;
				cin>>temp2.sueldo;
				
				lsc.temp=temp2;
				lsc.agregar();
				break;
			case 20:
			
					lsc.presentar();
			
			
				break;
			case 30:
				
						cout<<"Ingrese el ID a Buscar: "<<endl;
						cin>>temp.id;
						
					t0=clock();
						lss.buscar(temp.id);
						if(lss.T!=NULL){
							cout<<"Registro Encontrado"<<endl;
							lss.registro();
						}
					t1=clock();
					t20=clock();
						lsc.buscar(temp.id);
						if(lsc.T!=NULL){
							cout<<"Registro Encontrado"<<endl;
							lsc.registro();
						}
					t21=clock();
					
					
					
					
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					tiempo2 =(double(t21-t20)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo Simple: "<<tiempo<<endl;
					cout<<"\t\t "<<" Tiempo Compuesto: "<<tiempo2<<endl;
			case 70:
					t0=clock();
						lsc.abrir();
						cout<<"Datos Recuperados"	<<endl;
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
					break;	
			case 80:
					lss.ordenar();
					cout<<"Terminado"<<endl;
					lsc.ordenar();
					cout<<"Terminado"<<endl;
					break;
				// lista simple
			case 1:
				cout<<"Ingrese un numero: "<<endl;
				cin>>temp.id;
				cout<<"Ingrese un nombre: "<<endl;
				cin>>temp.nombre;
				cout<<"Ingrese sueldo: "<<endl;
				cin>>temp.sueldo;
				
				lss.temp=temp;
				lss.agregar();
				break;
			case 2:
				t0=clock();
					lss.presentar();
				t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
			
				break;
				
			case 3:
					cout<<"Ingrese el ID a Buscar: "<<endl;
					cin>>temp.id;
					lss.buscar(temp.id);
					if(lss.T!=NULL){
						cout<<"Registro Encontrado"<<endl;
						lss.registro();
					}
			case 4:
					cout<<"Ingrese el ID a Modificar: "<<endl;
					cin>>temp.id;
					lss.buscar(temp.id);
					if(lss.T!=NULL){
						lss.registro();
						cout<<"Ingrese los nuevos valores:"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Ingrese un nombre: "<<endl;
						cin>>lss.T->nombre;
						cout<<"Ingrese sueldo: "<<endl;
						cin>>lss.T->sueldo;																		
					}
				case 5:
					cout<<"Ingrese el ID a Buscar: "<<endl;
					cin>>temp.id;
					lss.buscar(temp.id);
					if(lss.T!=NULL){
						cout<<"Registro Eliminado"<<endl;
						lss.registro();
						lss.eliminar();
					}
				case 6:
					lss.guardar();
					cout<<"Datos Guardados"	<<endl;
					break;
				case 7:
					t0=clock();
						lss.abrir();
						cout<<"Datos Recuperados"	<<endl;
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
					break;
				case 8:
						t0=clock();
					lss.ordenar();
					cout<<"Datos Ordenados"<<endl;
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
					break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
			
		}
		
	}while(op!=0);
	
	/*
	srand(time(NULL));
	for(int i=1;i<10;i++){
		agregar(rand()%90);
	}
	presentar();*/
	
	return 0;
}

