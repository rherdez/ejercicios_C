#include <iostream>
#include "carro.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
carro vehiculo(2012);
carro coche;
int main(int argc, char** argv) {

	coche.anio=2016;
	coche.modelo="Nissan";
	
	cout<<"Año: "<<vehiculo.anio <<endl;
	cout<<"modelo: "<<vehiculo.modelo <<endl;
	cout<<"Antiguedad:"<<vehiculo.calcular_antiguedad()<<endl;
	
	cout<<"Año: "<<coche.anio <<endl;
	cout<<"modelo: "<<coche.modelo <<endl;
	cout<<"Antiguedad:"<<coche.calcular_antiguedad()<<endl;
	return 0;
}
