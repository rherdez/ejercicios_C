#include "clase_cubeta.h"

void clase_cubeta::agregar_cubeta(int x){
	 T=new nodo_cubeta();
	 T->id=x;	 
	 T->sig=NULL;
	 T->ant=NULL;	 
	 
	 if(I==NULL){
	 	I=T;
	 }
	 else{
	 	F->sig=T;
	 	T->ant=F;
	 }
	 F=T;
	
}

void clase_cubeta::agregar_hijo(int x,string n){
	buscar_c(x/tam);
	T->hijo.agregar(x,n);
}

void clase_cubeta::buscar_c(int x){

	bool encontrado=false;
	if(x<=(F->id/2)){
		T=I;	
		while(T!=NULL && encontrado==false){
			if(T->id==x){
				
				encontrado=true;
			}
			else{
				T=T->sig;
			}		
		}	
		
	}
	else{
		T=F;	
		while(T!=NULL && encontrado==false){
			if(T->id==x){
				
				encontrado=true;
			}
			else{
				T=T->ant;
			}		
		}	
		
	}
				
	if(encontrado==false){
		cout<<"ID No Encontrado"<<endl;
	}
	
	
}

void clase_cubeta::buscar_h(int x){
	buscar_c(x/tam);
	T->hijo.buscar(x);		
}

void clase_cubeta::presentar_cubeta(){
		T=I;	
		while(T!=NULL ){		
				cout<<"Id: "<<T->id<<endl;									
				T=T->sig;
				
		}	
}
void clase_cubeta::presentar_hijo(int x){
		buscar_c(x/tam);
		T->hijo.presentar();
}
