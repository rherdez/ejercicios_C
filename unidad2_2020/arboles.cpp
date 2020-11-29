#include "arboles.h"

void arboles::agregar(nodo_cubeta *temp, int x){
	if(R==NULL){
	
		nuevo(x);
		R=T;
		
	}
	else if(x>temp->id_cubeta){
		
		if(temp->De==NULL){
			nuevo(x);
			temp->De=T;
		}
		else
		{
			agregar(temp->De,x);
		}
		
		
	}
	else{
		
		if(temp->Iz==NULL){
			nuevo(x);
			temp->Iz=T;
		}
		else
		{
			agregar(temp->Iz,x);
		}				
	}
}

void arboles::nuevo(int x){
	 T=new nodo_cubeta();
	 T->id_cubeta=x;
	 T->De=NULL;
	 T->Iz=NULL;		
}

void arboles::presentar(nodo_cubeta *temp){
	
	if(temp==NULL){
			return;		
}
else{

		presentar(temp->De);
		cout<<"Cubeta: "<<temp->id_cubeta<<endl;
		cout<<"===================="<<endl;
		temp->listas.presentar();
		cout<<"===================="<<endl;
		presentar(temp->Iz);		
	}
	
}

void arboles::agregar_lista(int x){
	 T->listas.agregar(x);
}

bool arboles::buscar(nodo_cubeta *temp, int x){
	if(temp==NULL){
		return false;
	}
	if(temp->id_cubeta==x){
		T=temp;
		return true;
	}
	if(x>temp->id_cubeta){
		buscar(temp->De,x);
	}
	else{
		buscar(temp->Iz,x);
	}		
}

void arboles::menor(nodo_cubeta *temp){
	if(temp->Iz==NULL){
		cout<<"El numero menor es: "<<temp->id_cubeta<<endl;
	}
	else{
		menor(temp->Iz);
	}
}
void arboles::mayor(nodo_cubeta *temp){
	if(temp->De==NULL){
		cout<<"El numero mayor es: "<<temp->id_cubeta<<endl;
	}
	else{
		mayor(temp->De);
	}
}
