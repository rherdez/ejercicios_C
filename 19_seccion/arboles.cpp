#include <iostream>
#include "nodo3.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

nodo3 *R, *T;

void agregar(nodo3 *);
void presentar(nodo3 *);
void ordenar(nodo3 *);

int op,x;

int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Ordenado"<<endl;
		
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>x;
				T=new nodo3();
				T->id=x;
				T->De=NULL;
				T->Iz=NULL;
				agregar(R);
				break;
			
			case 2:
				presentar(R);
				break;
			case 3:
				ordenar(R);
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}

void agregar(nodo3 *p){
	
	if(R==NULL){
		R=T;
		return;
	}
	else if(T->id>p->id){
		if(p->De==NULL){
			p->De=T;
		}
		else{
			agregar(p->De);
		}
	}
	else{
		if(p->Iz==NULL){
			p->Iz=T;
		}
		else{
			agregar(p->Iz);
		}
		
	}
}

void presentar(nodo3 *p){
	if(p==NULL){
		return;
	}
	else{
		cout<<"Id: "<<p->id<<endl;
		presentar(p->De);
		presentar(p->Iz);
	
	}	
}
void ordenar(nodo3 *p){
		if(p==NULL){
		return;
	}
	else{
		
		ordenar(p->De);
		cout<<"Id: "<<p->id<<endl;
		ordenar(p->Iz);
	
	}	
	
	
}
