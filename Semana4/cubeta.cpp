#include <iostream>
#include "clase_cubeta.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void validar_cubeta(int);
void leer_archivo();
clase_cubeta cubeta;
void agregar();
unsigned t0,t1,t20,t21;
double tiempo,tiempo2;
int op,x;
int main(int argc, char** argv) {

	do{
		cout<<"Menu"<<endl;
		cout<<"1) Cargar y Ordenar archivo de 24 MIL"<<endl;
		cout<<"2) Buscar en archivo de 24 MILL"<<endl;
		cout<<"3) Cargar y Ordenar achivo de 2.xxx millones"<<endl;
		cout<<"4) Buscar en archivo de 2.xx millones"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					t0=clock();
						leer_archivo();		
					t1=clock();
					tiempo =(double(t1-t0)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo<<endl;								
				break;
			case 2:
					cout<<"Ingrese el Id a Buscar: "<<endl;
					cin>>x;
				
					t20=clock();
						cubeta.buscar_h(x);
					t21=clock();
					tiempo2 =(double(t21-t20)/CLOCKS_PER_SEC)	;		
					cout<<"\t\t "<<" Tiempo: "<<tiempo2<<endl;
				break;
		}
		
	}while(op!=0);
	
	

	
	
	
	return 0;
}

void validar_cubeta(int id){
	int inicio=10;
	int fin=(id/cubeta.tam)+1;
	
	if(cubeta.F==NULL){
		inicio=0;		
	}
	else if(fin>cubeta.F->id) {
		inicio=cubeta.F->id+1;	
	}
	else
	{
		fin=-1;
	}	
	for(int i=inicio;i<=fin;i++){
		cubeta.agregar_cubeta(i);	
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
			validar_cubeta(id);
			cubeta.agregar_hijo(id,linea);
		}					
	}
	fs1.close();		
}
