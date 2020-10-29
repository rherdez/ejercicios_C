#include "cubeta.h"

void cubeta::agregar(int i){
	T=new nodo_cubeta_conh();
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

void cubeta::presentar_I(){
	T=I;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->sig;
	}
}

void cubeta::presentar_F(){
	T=F;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		T=T->ant;
	}
}

void cubeta::presentar_h(){
	T=I;
	while(T!=NULL){
		cout<<"ID"<<T->id<<endl;
		cout<<"Inicio Hijos"<<endl;
		T->h.presentar_I();
		cout<<"Fin Hijos"<<endl;
		T=T->sig;
	}
}


