#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include "nodo1.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo1 *I, *T, *F, *A;
void agregar(int,string);
void presentar();
void buscar(int);
void modificar();
void eliminar();
void guardar();
void abrir();
int op, x;
string nom;
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
		
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese Codigo: "<<endl;
				cin>>x;
				cout<<"Ingrese Nombre: "<<endl;
				cin>>nom;
				agregar(x,nom);
				break;
			case 2:
				presentar();
				break;
			case 3:
				cout<<"Ingrese Codigo a Buscar: "<<endl;
				cin>>x;
				buscar(x);
				break;
			case 4:
				modificar();
				break;
			case 5:
				eliminar();
				break;
			case 6:
				guardar();
				break;
			case 7:
				abrir();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
		
	
	return 0;
}

void agregar(int x,string nom){
	T=new nodo1();
	T->id=x;
	T->nombre=nom;
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
		cout<<"Nombre:"<<T->nombre<<endl;
		T=T->sig;
	}
	
}
void buscar(int x){
		bool encontro=false;
		T=I;
		A=T;
	while(T!=NULL && !encontro){
		if(T->id==x){
			cout<<"Id Encontrado"<<endl;
			cout<<"ID: "<<T->id<<endl;
			cout<<"Nombre:"<<T->nombre<<endl;
			encontro=true;
		}
		else{
			A=T;
			T=T->sig;
		}
		
	}
	
	if(!encontro){
		cout<<"ID no encontrado"<<endl;
	}
}

void modificar(){
	int x;
	cout<<"Ingrese el numero a modificar"<<endl;
	cin>>x;
	buscar(x);
	if(T!=NULL){
		cout<<"Ingrese el nuevo valor"<<endl;
		cin>>x;	
		T->id=x;
	}			
}
void eliminar(){
	int x;
	cout<<"Ingrese el numero a Eliminar"<<endl;
	cin>>x;
	buscar(x);
	if(T!=NULL){
		if(I==T){
			I=T->sig;			
		}
		else if(T==F){
			A->sig=NULL;
			F=A;
		}
		else{
			A->sig=T->sig;
		}
		T=NULL;
			
	}		
}
void guardar(){
	
	ofstream fs("C:\\textos\\mibase.txt");
	T=I;
	while(T!=NULL){
		fs<<T->id<<endl;
		fs<<T->nombre<<endl;
		T=T->sig;
	}
	fs.close();
}
void abrir(){
	char linea[25];
	char nombre[50];
	int x;
	ifstream fi("C:\\textos\\ejemplo_mil.txt");
	while(!fi.eof()){
		fi>>linea;
		fi>>nombre;
		if(!fi.eof()){
			x=atoi(linea);
			agregar(x,nombre);
		}
	}
}
