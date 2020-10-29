#include "nodo_cubeta_hija.h"


void nodo_cubeta_hija::agregar(int i){
	T=new nodo_cubeta;
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

void nodo_cubeta_hija::presentar_I(){
		cout<<"presentar"<<endl;
	T=I;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->sig;
	}
}

void nodo_cubeta_hija::presentar_F(){
	T=F;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->ant;
	}
}
