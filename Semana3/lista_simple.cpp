#include <iostream>
#include "nodo.h"
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo *I,*F,*T,*A;
nodo temp;
void agregar();
void presentar();
void buscar(int);
void registro();
void eliminar();
int op;
int main(int argc, char** argv) {
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Modificar"<<endl;
		cout<<"5) Eliminar"<<endl;
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
				presentar();
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
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;
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
