#include <iostream>
#include "nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo *I,*T,*F;

void agregar(int x);
void presentar();
int op,x;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>x;
				agregar(x);
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

void agregar(int x){
	T=new nodo();
	T->id=x;
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
