#include <iostream>
#include "humano.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct{
	int id;
	string nombre;	
	
} persona;

humano h;

int main(int argc, char** argv) {
	persona.id=2;
	persona.nombre="Pedro";
	
	
	cout<<"ID:"<<persona.id<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	
	h.id=4;
	h.nombre="Maria";
	h.edad=15;
	
	cout<<"ID:"<<h.id<<endl;
	cout<<"Nombre: "<<h.nombre<<endl;
	cout<<"Obs: "<<h.obs()<<endl;
	
	return 0;
}
