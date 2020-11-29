#include "lista.h"
void lista::agregar(int x){
	T=new nodo_lista();
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

void lista::presentar(){
	T=I;
	while(T!=NULL){
		cout<<"\t"<<T->id<<endl;
		T=T->sig;
	}
}
