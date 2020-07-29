#include "clase_N_hijo.h"

void clase_N_hijo::agregar(int x, string n){
	 T=new nodo_hijo();
	 T->id=x;
	 T->nombre=n;
	 T->sig=NULL;
	 
	 if(I==NULL){
	 	I=T;
	 }
	 else{
	 	F->sig=T;
	 }
	 F=T;	 	
}

void clase_N_hijo::presentar(){
	cout<<"Presentar Hijos"<<endl;	
	T=I;
	while(T!=NULL){
		cout<<"Id: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		T=T->sig;
	}
}

void clase_N_hijo::buscar(int x){
	T=I;
	bool encontrado=false;
	while(T!=NULL && encontrado==false){
		if(T->id==x){
			cout<<"Id: "<<T->id<<endl;
			cout<<"Nombre: "<<T->nombre<<endl;
			encontrado=true;
		}
		else{
			T=T->sig;
		}		
	}
	
	if(encontrado==false){
		cout<<"ID No Encontrado"<<endl;
	}
}


