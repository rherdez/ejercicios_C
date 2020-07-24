#include "clase_lista_comp.h"

void clase_lista_comp::ordenar(){
	T=I;
	A=I;
	T2=I;
	while(T2!=NULL){
		T=I;
		A=I;
		
		while(T!=NULL){					
			if(A->id > T->id){							
				temp.id=A->id;
				temp.nombre=A->nombre;
				
				A->id=T->id;
				A->nombre=T->nombre;
				
				T->id=temp.id;
				T->nombre=temp.nombre;								
			}			
			A=T;
			T=T->sig;		
		}
		T2=T2->sig;
	}
}


void clase_lista_comp::abrir(){
	remover();
	string linea;
	ifstream fs1("C:\\textos\\ejemplo_24milR.txt",ios::in);
	while(!fs1.eof()){
		fs1>>linea;
		temp.id=stoi(linea);
		fs1>>linea;
		temp.nombre=linea;

		if(!fs1.eof()){
			agregar();
		}	
		
		
	}
	fs1.close();
}
void clase_lista_comp::remover(){
	T=NULL;
	I=NULL;
	F=NULL;
	A=NULL;
}
void clase_lista_comp::guardar(){
	ofstream fs("C:\\textos\\ejemplo_24milR.txt");
	T=I;
	while(T!=NULL){
		
		fs<<T->id<<"\n";
		fs<<T->nombre<<"\n";
	//	fs<<T->sueldo<<"\n";				
		T=T->sig;
	}
	fs.close();
	
}
void clase_lista_comp::agregar(){
	T=new nodo_c();
	T->id=temp.id;
	T->nombre=temp.nombre;
//	T->sueldo=temp.sueldo;
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

void clase_lista_comp::presentar(){
	T=I;
	
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;

		T=T->sig;
	}
	
}

void clase_lista_comp::buscar(int codigo){
	// Lista esta ordenada
	// Lista los id son continuos
	bool encontrado=false;
	
	if(codigo<=(F->id/2)){	
		T=I;
		A=T;
	
		while(T!=NULL && !encontrado){
			if(T->id==codigo){
				encontrado=true;			
			}
			else{
				A=T;
				T=T->sig;
			}
		
		}
								
	}
	else{
		T=F;
		A=T;
	
		while(T!=NULL && !encontrado){
			if(T->id==codigo){
				encontrado=true;			
			}
			else{
				A=T;
				T=T->ant;
			}
		
		}						
	}
		
	
	if(!encontrado){
		cout<<"Este codigo no existe en nuestra Lista"<<endl;
	}		
}

void clase_lista_comp::registro(){
	cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;	
}
void clase_lista_comp::eliminar(){
	if(T==I){
		I=T->sig;
		I->ant=NULL;
	}
	else if(T==F){
		F=F->ant;
		F->sig=NULL;		
	}
	else{
		A=T->ant;		
		A->sig=T->sig;
		
		T=T->sig;
		T->ant=A;
	}
	
}
