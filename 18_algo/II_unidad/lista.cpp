#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include "nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo *I,*T,*F,*A,*T2;
void llenar();
void ordenar();
void agregar(int x, string y);
void agregar(char[], char[]);
void presentar();
void buscar(int);
void modificar(int);
void eliminar(int);
void guardar();
void leer();
void limpiar();
int op,x;
string y;
int main(int argc, char** argv) {
	srand(time(NULL));
	llenar();
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Modificar"<<endl;
		cout<<"5) Eliminar"<<endl;
		cout<<"6) Guardar"<<endl;
		cout<<"7) Leer"<<endl;
		cout<<"8) Ordenar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>x;
				cout<<"Ingrese un nombre"<<endl;
				cin>>y;
				agregar(x,y);
				break;
			case 2:
				presentar();
				break;
			case 3:
				cout<<"Ingrese el ID a buscar:"<<endl;
				cin>>x;
				buscar(x);
				break;
			case 4:
				cout<<"Ingrese el ID a Modificar:"<<endl;
				cin>>x;
				modificar(x);
				break;
			case 5:
				cout<<"Ingrese el ID a Eliminar:"<<endl;
				cin>>x;
				eliminar(x);
				break;
			case 6:
				guardar();
				break;
			case 7:
				leer();
				break;
			case 8:
				ordenar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}

void agregar(int x, string y){
	T=new nodo();
	T->id=x;
	T->nombre=y;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
	}
	else{
		F->sig=T;		
	}
	F=T;	
}
void agregar(char x[128], char y[128]){
	T=new nodo();
	T->id=atoi(x);
	T->nombre=y;
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
		cout<<"====================="<<endl;
		T=T->sig;
	}
}

void buscar(int x){
	bool encontrado=false;
	T=I;
	A=T;
	while(T!=NULL&& !encontrado){
		if(T->id==x){
			cout<<"ID: "<<T->id<<endl;
			cout<<"Nombre: "<<T->nombre<<endl;
			cout<<"====================="<<endl;			
			encontrado=true;	
		}
		else{
			A=T;
			T=T->sig;
		}
		
	}
	if(!encontrado){
		cout<<"El ID no fue encontrado"<<endl;
	}
}

void modificar(int x){
	buscar(x);
	if(T!=NULL){
			cout<<"Ingrese el nuevo ID"<<endl;
			cin>>x;
			cout<<"Ingrese el nuevo nombre"<<endl;
			cin>>y;
			
			T->id=x;
			T->nombre=y;
				
				
	}
}

void eliminar(int x){
	buscar(x);
	if(T!=NULL){
		if(T==I){
			I=I->sig;
			if(F==T){
				F=I;
			}
		}
		else if(T==F){
			T=A;
			T->sig=NULL;
			F=T;			
		}
		else{
			A->sig=T->sig;
		}								
	}
}
void limpiar(){
	T=NULL;
	F=NULL;
	A=NULL;
	I=NULL;
}
void guardar(){
	ofstream archivo;
	archivo.open("C:/textos/barcelona.txt");
		T=I;
	while(T!=NULL){
		archivo<<T->id<<"\n";
		archivo<<T->nombre<<"\n";
		
		T=T->sig;
	}			
	archivo.close();		
}

void leer(){
	char cadena1[128];
	char cadena2[128];
	limpiar();
	ifstream archivo("C:/textos/barcelona.txt");
	while(!archivo.eof()){
		archivo>>cadena1;
		archivo>>cadena2;
		
		if(cadena1!=cadena2 && !archivo.eof()){
			agregar(cadena1,cadena2);			
		}
		
	}
	archivo.close();
}
void llenar(){
	for(int i=0;i<10;i++){
		agregar(rand()%50,"abc");
	}
}
void ordenar(){
	T2=I;
	nodo temp;
	while(T2!=NULL){
		T=I;
		A=T;
		while(T!=NULL){
			if(T->id > A->id){
				temp.id=T->id;
				temp.nombre=T->nombre;
				
				T->id=A->id;
				T->nombre=A->nombre;
				
				A->id=temp.id;
				A->nombre=temp.nombre;
				
			}
			A=T;
			T=T->sig;
		}
		
		T2=T2->sig;
	}
}
