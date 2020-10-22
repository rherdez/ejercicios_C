#include <iostream>
#include "nodo2.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo2 *I, *F,*T;

void agregar(int);
void presentar_I();
void presentar_F();

int op,x;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar "<<endl;
		cout<<"2) Presentar I"<<endl;
		cout<<"3) Presentar F"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un valor"<<endl;
				cin>>x;
				agregar(x);
				break;
			case 2:
				presentar_I();
				break;
			case 3:
				presentar_F();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
	}while(op!=0);

	
	return 0;
}

void agregar(int i){
	T=new nodo2;
	T->id=i;
	T->ant=NULL;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;		
	}
	else{
		F->sig=T;
		T->ant=F;		
	}
	F=T;
}

void presentar_I(){
	T=I;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->sig;
	}
}

void presentar_F(){
	T=F;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->ant;
	}
}

