#include <iostream>
#include "hija.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void agregar();
hija uno(40,"Carmen");

int main(int argc, char** argv) {

	
	agregar();
	
	cout<<"Nombre Padre: "<<uno.nombre_padre<<endl;
	cout<<"Edad: "<<uno.edad<<endl;
	cout<<"Nombre Hija: "<<uno.nombre_hija<<endl;
	cout<<"Edad Hija: "<<uno.dividir_edad(10)<<endl;
	cout<<"Edad Hija: "<<uno.dividir_edad()<<endl;
	
	
	return 0;
}
void agregar(){
	uno.nombre_padre="Carlos";
	//uno.nombre_hija="Maria";

	
}
