#include <iostream>
#include "hijo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
hijo pedro;
int main(int argc, char** argv) {
	pedro.nombre_padre="Francisco";
	pedro.edad_padre=50;
	pedro.nombre_hijo="Pedrito";
	
	cout<<"Nombre del Padre: "<<pedro.nombre_padre<<endl;
	cout<<"Nombre del hijo: "<<pedro.nombre_hijo<<endl;
	cout<<"Edad del Hijo: "<<pedro.calcular_edad()<<endl;
	
	return 0;
}
