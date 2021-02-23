#include <iostream>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo *I,*T,*F;

void agregar(){
	T=new nodo();
	
	cout<<"Ingrese un id"<<endl;
	cin>>T->id;
	cout<<"Ingrese un nombre"<<endl;
	cin>>T->nombre;
	cout<<"Sueldo "<<endl;
	cin>>T->sueldo;
	
	
	
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
		cout<<"Total: "<<T->total()<<endl;
		cout<<"======================================"<<endl;
		T=T->sig;
	}
}
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
	return 0;
}
