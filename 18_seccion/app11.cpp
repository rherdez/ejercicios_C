#include <iostream>
#include "hija.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
hija maria;
int main(int argc, char** argv) {
	
	maria.nombre_padre="Mario";
	maria.edad_padre=50;
	maria.nombre_hijo="Maria";
	
	
	cout<<"Padre: "<<maria.nombre_padre<<endl;
	cout<<"Edad Maria: "<<maria.calcular_edad()<<endl;
	
	
	return 0;
}
