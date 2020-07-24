#include "clase_lista_simple.h"
void clase_lista_simple::ordenar(){
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

void clase_lista_simple::abrir(){
	remover();
	string linea;
	ifstream fs1("C:\\textos\\ejemplo_24milR.txt",ios::in);
	while(!fs1.eof()){
		fs1>>linea;
		temp.id=stoi(linea);
		fs1>>linea;
		temp.nombre=linea;
	/*	fs1>>linea;
		temp.sueldo=stod(linea);*/
		if(!fs1.eof()){
			agregar();
		}	
		
		
	}
	fs1.close();
}
void clase_lista_simple::remover(){
	T=NULL;
	I=NULL;
	F=NULL;
	A=NULL;
}
void clase_lista_simple::guardar(){
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
void clase_lista_simple::agregar(){
	T=new nodo();
	T->id=temp.id;
	T->nombre=temp.nombre;
//	T->sueldo=temp.sueldo;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;		
	}
	else{
		F->sig=T;
	}
	F=T;
	
}

void clase_lista_simple::presentar(){
	T=I;
	
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
	/*	cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;*/
		T=T->sig;
	}
	
}
void clase_lista_simple::buscar(int codigo){
		bool encontrado=false;
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
	
	if(!encontrado){
		cout<<"Este codigo no existe en nuestra Lista"<<endl;
	}		
}

void clase_lista_simple::registro(){
	cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"Sueldo: "<<T->sueldo<<endl;
		cout<<"Deduccion: "<<T->deduccion()<<endl;
		cout<<"Sueldo Neto: "<<T->sueldo-T->deduccion()<<endl;	
}
void clase_lista_simple::eliminar(){
	if(T==I){
		I=T->sig;
	}
	else if(T==F){
		F=A;
		A->sig=NULL;
	}
	else{
		A->sig=T->sig;
	}
	
}
