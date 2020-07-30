#include <iostream>
#include "nodo_binario.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo_binario *R,*T;
void agregar(int x);
void agregar_nodo(nodo_binario *,int);
void presentar(nodo_binario *);
void leer_archivo();
int op;
int x;
unsigned t0,t1,t20,t21;
double tiempo,tiempo2;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un id"<<endl;
				cin>>x;
				agregar(x);
				break;
			case 2:
				presentar(R);
				break;
			case 3:
				 t0=clock();
						leer_archivo();		
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;	
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
				
		}
	}while(op!=0);
	
	return 0;
}

void presentar(nodo_binario *P){
	if(P==NULL){
		return ;
	}
	else{
	
		presentar(P->Iz);
			cout<<"ID: "<<P->id<<endl;
		presentar(P->De);
		
	}
	
}
void leer_archivo(){
	string linea;
	int id;
	ifstream fs1("C:\\textos\\ejemplo_24milR.txt",ios::in);
	while(!fs1.eof()){
		fs1>>id;
		//id=stoi(linea);
		fs1>>linea;

		if(!fs1.eof()){
			//validar_cubeta(id);
			//cubeta.agregar_hijo(id,linea);
			agregar(id);
		}					
	}
	fs1.close();		
}
void agregar(int x){	
	
	T=new nodo_binario;
	T->id=x;
	T->Iz=NULL;
	T->De=NULL;
	if(R==NULL){
		R=T;
	}
	else{
		agregar_nodo(R,x);
	}	
}

void agregar_nodo(nodo_binario * P, int x){
	if(x < P->id ){
		if(P->Iz==NULL){
			P->Iz=T;
		}
		else{
			agregar_nodo(P->Iz,x);
		}
	}
	else
	{
		if(P->De==NULL){
			P->De=T;
		}
		else{
			agregar_nodo(P->De,x);
		}
		
	}
}
