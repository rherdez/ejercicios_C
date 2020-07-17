#include <iostream>
#include "nodo.h"
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo *I,*F,*T;
nodo temp;
void agregar();
void presentar();
int op;
int main(int argc, char** argv) {
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero: "<<endl;
				cin>>temp.n;
				cout<<"Ingrese un nombre: "<<endl;
				cin>>temp.nombre;
				cout<<"Ingrese sueldo: "<<endl;
				cin>>temp.sueldo;
				
				agregar();
				break;
			case 2:
				presentar();
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

void agregar(){
	T=new nodo();
	T->id=temp.id;
	T->nombre=temp.nombre;
	T->sueldo=temp.sueldo;
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
		T=T->sig;
	}
	
}
