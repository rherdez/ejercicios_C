#include <iostream>
#include "empleado.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
empleado emp(100);
int main(int argc, char** argv) {
/*	emp.nombre="pedro";
	emp.sueldo=100;*/
	cout<<"Nombre: "<<emp.nombre<<endl;
	cout<<"Sueldo: "<<emp.sueldo<<endl;
	cout<<"Deduccion: "<<emp.deduccion()<<endl;
	cout<<"Total a Pagar:"<<emp.total_pagar()<<endl;
	return 0;
}
