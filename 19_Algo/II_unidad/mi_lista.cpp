#include "mi_lista.h"

void mi_lista::agregar(int x){
	T=new nodo_doble();
	T->id=x;
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

void mi_lista::presentar(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}
void mi_lista::presentar_F(){
		T=F;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->ant;
	}
}

void mi_lista::buscar(int x){
	bool encontrado=false;
	if(I!=NULL){
		if(x<(F->id/2)){
			T=I;
			while(T!=NULL && !encontrado){
				
				if(T->id==x){
					cout<<"Encontrado"<<endl;
					encontrado=true;
				}
				else{
					T=T->sig;
				}
				
			}
		}
		else{
			T=F;
			while(T!=NULL && !encontrado){
				
				if(T->id==x){
					cout<<"Encontrado"<<endl;
					encontrado=true;
				}
				else{
					T=T->ant;
				}				
			}
		}
		
	}		
}

void mi_lista::borrar(int x){
		buscar(x);
		if(T!=NULL){
			if(I==T){
				if(I==F){
					I=NULL;
					F=NULL;
					T=NULL;
				}
				else{
					I=I->sig;
					I->ant=NULL;
					T=NULL;
				}
			}
			else if(F==T){
				if(I==F){
					I=NULL;
					F=NULL;
					T=NULL;
				}
				else{
					F=F->ant;
					F->sig=NULL;
					T=NULL;
				}
			}
			else{
				A=T->ant;
				A->sig=T->sig;
				T=T->sig;
				T->ant=A;
			
			}
		}
	
}

void mi_lista::modificar(int viejo, int nuevo){
	buscar(viejo);
	if(T!=NULL){
		T->id=nuevo;
	}
}
void mi_lista::insertar(int actual, int nuevo){
	buscar(actual);
	if(T!=NULL){
		A=T->ant;
		T2=new nodo_doble();
		T2->id=nuevo;
		
		if(I==T){
			I=T2;
			T2->ant=NULL;								
		}
		else{									
			T2->ant=A;
			A->sig=T2;
		}
		
		T2->sig=T;
		T->ant=T2;
	}
}
