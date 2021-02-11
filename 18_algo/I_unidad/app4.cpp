#include <iostream>
#include "carro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
carro toyota[2];
int main(int argc, char** argv) {
	toyota[0].marca="Corolla";
	toyota[0].anio=2020;
	cout<<"Marca: "<<toyota[0].marca<<endl;
	cout<<"Año: "<<toyota[0].anio<<endl;
	cout<<"Antiguedad: "<<toyota[0].antiguedad()<<endl;
	
	toyota[1].marca="Celica";
	toyota[1].anio=2010;
	cout<<"Marca: "<<toyota[1].marca<<endl;
	cout<<"Año: "<<toyota[1].anio<<endl;
	cout<<"Antiguedad: "<<toyota[1].antiguedad()<<endl;
	return 0;
}
