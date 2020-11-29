#include "arboles.h"

void arboles::agregar(nodo_cubeta *temp, int x){
		
		if(R==NULL){
			agregar(x);
			R=T;
		}
		else if(x>temp->id_cubeta){
			if(temp->De==NULL){
				agregar(x);
				temp->De=T;
			}
			else{
				agregar(temp->De,x);
			}
			
		}
		else{
			if(temp->Iz==NULL){
				agregar(x);
				temp->Iz=T;
			}
			else{
				agregar(temp->Iz,x);
			}			
		}	
}

void arboles::agregar(int x){
	T=new nodo_cubeta();
	T->id_cubeta=x;
	T->Iz=NULL;
	T->De=NULL;
}

void arboles::presentar(nodo_cubeta *temp){
	
	if(temp==NULL){
		return ;
	}
	else{
		presentar(temp->De);
		cout<<temp->id_cubeta<<endl;
		cout<<"==============="<<endl;
		temp->listas.presentar();
		cout<<"==============="<<endl;
		presentar(temp->Iz);
	}
	
}
void arboles::agregar_lista(int x){
	T->listas.agregar(x);
}
void arboles::menor(nodo_cubeta *temp){
	
	if(temp->Iz==NULL){
		cout<<"El numero menor es: "<<temp->id_cubeta<<endl;
	}
	else
	{
		menor(temp->Iz);
	}
	
}

void arboles::mayor(nodo_cubeta *temp){
	
	if(temp->De==NULL){
		cout<<"El numero mayor es: "<<temp->id_cubeta<<endl;
	}
	else
	{
		mayor(temp->De);
	}
	
}

bool arboles::buscar(nodo_cubeta *temp,int x){
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


