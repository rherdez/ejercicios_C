#include <iostream>
#include "docente.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
docente doc[3];

void ordenamiento();
void presentar();
int main(int argc, char** argv) {
	doc[0].id=2;
	doc[0].nombre="bernardo";
	
	doc[1].id=1;
	doc[1].nombre="antonio";
	
	doc[2].id=3;
	doc[2].nombre="carlos";
	
	ordenamiento();
	presentar();
	
	for(int i=10;i<220;i++){
		cout<<i<<"-->"<<char(i)<<endl;
	}
	
	return 0;
}
void ordenamiento(){
	docente temp;
	
	for(int i=0;i<3;i++){
		for(int j=1;j<3;j++){
			if(doc[j-1].nombre<doc[j].nombre){
				temp.id=doc[j-1].id;
				temp.nombre=doc[j-1].nombre;
				
				doc[j-1].id=doc[j].id;
				doc[j-1].nombre=doc[j].nombre;
				
				doc[j].id=temp.id;
				doc[j].nombre=temp.nombre;
				
				
			}
			
		}
	}
}

void presentar(){
	for(int i=0;i<3;i++){
		cout<<"ID: "<<doc[i].id<<endl;
		cout<<"Nombre: "<<doc[i].nombre<<endl;
		cout<<"========================="<<endl;
	}
}
