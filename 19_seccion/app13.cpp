#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

#include "nodo1.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo1 *I,*F, *T, *A;
void agregar(int,string);
void presentar();
void buscar(int);
void modificar();
void eliminar();
void guardar();
void leer();
int op,x;
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
				cout<<"Ingrese un ID: "<<endl;
				cin>>x;
				cout<<"Ingrese un Nombre: "<<endl;
				cin>>nom;
				agregar(x,nom);
				break;
			case 2:
				presentar();
				break;
			case 3:
				cout<<"Ingrese codigo a Buscar"<<endl;
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
				leer();
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
		cout<<"Nombre: "<<T->nombre<<endl;
		T=T->sig;
	}
}
void buscar(int x){
	bool encontrado=false;
	T=I;
	A=T;
	while(T!=NULL && !encontrado){
		if(T->id==x ){
			cout<<"Codigo Encontrado"<<endl;
			cout<<"ID: "<<T->id<<endl;		
			cout<<"Nombre: "<<T->nombre<<endl;	
			encontrado=true;
		}
		else{
			A=T;
			T=T->sig;		
		}		
	}
	if(!encontrado){
		cout<<"Codigo No fue Encontrado"<<endl;
	}	
}
void modificar(){
	cout<<"Ingrese el codigo a Modificar"<<endl;
	cin>>x;
	buscar(x);
	if(T!=NULL){
		cout<<"Ingrese el nuevo codigo"<<endl;
		cin>>x;
		T->id=x;
	}
}
void eliminar(){
		cout<<"Ingrese el codigo a Eliminar"<<endl;
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
	ofstream fs("miprueba.txt");
	T=I;
	while(T!=NULL){
		fs<<T->id<<endl;
		T=T->sig;
	}
	fs.close();		
}
void leer(){
	char linea[25];
	int x;
	ifstream fi("C:\\textos\\ejemplo_mil.txt");
	while(!fi.eof()){
		fi>>linea;
		fi>>nom;
		if(!fi.eof()){
			x=atoi(linea);
			agregar(x,nom);
		}
	}
}
