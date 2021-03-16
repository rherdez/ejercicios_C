#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include "nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo *I,*T,*F,*A,*T2;
void ordenar();
void llenar();
void agregar(int x,string y);
void presentar();
void buscar(int x);
void modificar(int);
void eliminar(int);
void vaciar();
void guardar();
void leer();
int op,x;
string y;
string arc;
int main(int argc, char** argv) {
	srand(time(NULL));
	llenar();
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Buscar"<<endl;
		cout<<"4) Modificar"<<endl;
		cout<<"5) Eliminar"<<endl;
		cout<<"6) Vaciar Lista"<<endl;
		cout<<"7) Guardar"<<endl;
		cout<<"8) Leer"<<endl;
		cout<<"9) Ordenar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>x;
				cout<<"Ingrese un nombre"<<endl;
				cin>>y;
				agregar(x,y);
				break;
			case 2:
				presentar();
				break;
			case 3:
				cout<<"Ingrese un ID a buscar"<<endl;
				cin>>x;
				buscar(x);
				break;
			case 4:
				cout<<"Ingrese un ID a Modificar"<<endl;
				cin>>x;
				modificar(x);
				break;
			case 5:
				cout<<"Ingrese un ID a Eliminar"<<endl;
				cin>>x;
				eliminar(x);
				break;
			case 6:
				vaciar();
				break;
			case 7:
				cout<<"Ingrese nombre de archivo"<<endl;
				cin>>arc;
				guardar();
				break;
			case 8:
				cout<<"Ingrese nombre de archivo"<<endl;
				cin>>arc;
				leer();
				break;
			case 9:
				ordenar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}
void agregar(int x,string y){
	T=new nodo();
	T->id=x;
	T->nombre=y;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
	}
	else{
		F->sig=T;		
	}
	F=T;	
}

void presentar(){
	T=I;	
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"====================="<<endl;
		T=T->sig;
	}
}

void buscar(int x){
	bool encontrado=false;
	T=I;	
	A=T;
	while(T!=NULL && !encontrado){
		
		if(T->id==x){
		
		cout<<"ID: "<<T->id<<endl;
		cout<<"Nombre: "<<T->nombre<<endl;
		cout<<"====================="<<endl;
		encontrado=true;
		}
		else{
			A=T;
			T=T->sig;
		}
		
	}
	
	if(!encontrado){
		cout<<"Su ID no fue encontrado"<<endl;
	}
}
void modificar(int x){
	buscar(x);
	if(T!=NULL){
			cout<<"Ingrese el nuevo ID"<<endl;
			cin>>x;
			cout<<"Ingrese el nuevo nombre"<<endl;
			cin>>y;
			T->id=x;
			T->nombre=y;
	}
}
void eliminar(int x){
	buscar(x);
	if(T!=NULL){
		if(I==T){
			I=I->sig;
			
			if(T==F){
				F=NULL;
			}
			
		}
		else if(T==F){
			F=A;
			A->sig=NULL;
			
		}
		else
		{
			A->sig=T->sig;
		}
	}
}
void vaciar(){
	I=NULL;
	T=NULL;
	F=NULL;
	A=NULL;
}
void guardar(){
	ofstream archivo;
	archivo.open("C:/textos/"+arc)	;
	
		T=I;	
	while(T!=NULL){
		archivo<<T->id<<endl;
		archivo<<T->nombre<<endl;
		
		T=T->sig;
	}

	archivo.close();
}

void leer(){
	char cadena1[128];
	char cadena2[128];
	vaciar();
	ifstream archivo("C:/textos/"+arc)	;
	
	while(!archivo.eof()){
		archivo>>cadena1;
		archivo>>cadena2;
		if(!archivo.eof()){
			agregar(atoi(cadena1),cadena2);
		}
		
	}
	archivo.close();
	
}
void llenar(){
	string n;
	for(int i=0;i<10;i++){
		n=char(164);
		n+=+char(rand()%200);
		
		agregar(rand()%50,n);
	}
}
void ordenar(){
	T2=I;
	nodo temp;
	while(T2!=NULL){
		T=I;
		A=T;
		while(T!=NULL){
			if(T->id > A->id){
				temp.id=T->id;
				temp.nombre=T->nombre;
				
				T->id=A->id;
				T->nombre=A->nombre;
				
				A->id=temp.id;
				A->nombre=temp.nombre;				
			}			
			A=T;
			T=T->sig;
		}	
		T2=T2->sig;
	}
}
