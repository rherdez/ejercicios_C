#include <iostream>
#include "nodo.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
unsigned t0,t1;
nodo *I,*F,*T,*A,*T2;
nodo temp;
void remover();
void agregar();
void presentar();
void buscar(int);
void registro();
void eliminar();
void guardar();
void abrir();
void ordenar();
int op;
double tiempo;
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
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero: "<<endl;
				cin>>temp.id;
				cout<<"Ingrese un nombre: "<<endl;
				cin>>temp.nombre;
				cout<<"Ingrese sueldo: "<<endl;
				cin>>temp.sueldo;
				
				agregar();
				break;
			case 2:
				t0=clock();
					presentar();
				t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
			
				break;
				
			case 3:
					cout<<"Ingrese el ID a Buscar: "<<endl;
					cin>>temp.id;
					buscar(temp.id);
					if(T!=NULL){
						cout<<"Registro Encontrado"<<endl;
						registro();
					}
			case 4:
					cout<<"Ingrese el ID a Modificar: "<<endl;
					cin>>temp.id;
					buscar(temp.id);
					if(T!=NULL){
						registro();
						cout<<"Ingrese los nuevos valores:"<<endl;
						cout<<"==================================="<<endl;
						cout<<"Ingrese un nombre: "<<endl;
						cin>>T->nombre;
						cout<<"Ingrese sueldo: "<<endl;
						cin>>T->sueldo;																		
					}
				case 5:
					cout<<"Ingrese el ID a Buscar: "<<endl;
					cin>>temp.id;
					buscar(temp.id);
					if(T!=NULL){
						cout<<"Registro Eliminado"<<endl;
						registro();
						eliminar();
					}
				case 6:
					guardar();
					cout<<"Datos Guardados"	<<endl;
					break;
				case 7:
					t0=clock();
						abrir();
						cout<<"Datos Recuperados"	<<endl;
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;
					break;
				case 8:
						t0=clock();
					ordenar();
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
void ordenar(){
	T=I;
	A=I;
	T2=I;
	while(T2!=NULL){
		T=I;
		A=I;
		
		while(T!=NULL){					
			if(A->id > T->id){							
				temp.id=A->id;
				temp.nombre=A->nombre;
				
				A->id=T->id;
				A->nombre=T->nombre;
				
				T->id=temp.id;
				T->nombre=temp.nombre;								
			}			
			A=T;
			T=T->sig;		
		}
		T2=T2->sig;
	}
}

void abrir(){
	remover();
	string linea;
	ifstream fs1("C:\\textos\\ejemplo_24milR.txt",ios::in);
	while(!fs1.eof()){
		fs1>>linea;
		temp.id=stoi(linea);
		fs1>>linea;
		temp.nombre=linea;
	/*	fs1>>linea;
		temp.sueldo=stod(linea);*/
		if(!fs1.eof()){
			agregar();
		}	
		
		
	}
	fs1.close();
}
void remover(){
	T=NULL;
	I=NULL;
	F=NULL;
	A=NULL;
}
void guardar(){
	ofstream fs("C:\\textos\\ejemplo_24milR.txt");
	T=I;
	while(T!=NULL){
		
		fs<<T->id<<"\n";
		fs<<T->nombre<<"\n";
	//	fs<<T->sueldo<<"\n";				
		T=T->sig;
	}
	fs.close();
	
}
void agregar(){
	T=new nodo();
	T->id=temp.id;
	T->nombre=temp.nombre;
//	T->sueldo=temp.sueldo;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;		
	}
	else{
		F->sig=T;
	}
	F=T;
	
}

void presentar(){
	T=I;
	
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
	/*	cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;*/
		T=T->sig;
	}
	
}
void buscar(int codigo){
		bool encontrado=false;
		T=I;
		A=T;
	
	while(T!=NULL && !encontrado){
		if(T->id==codigo){
			encontrado=true;			
		}
		else{
			A=T;
			T=T->sig;
		}
		
	}
	
	if(!encontrado){
		cout<<"Este codigo no existe en nuestra Lista"<<endl;
	}		
}

void registro(){
	cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;	
}
void eliminar(){
	if(T==I){
		I=T->sig;
	}
	else if(T==F){
		F=A;
		A->sig=NULL;
	}
	else{
		A->sig=T->sig;
	}
	
}
