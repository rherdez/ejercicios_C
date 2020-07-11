#include <iostream>
#include "hijo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
hijo p(40);

int main(int argc, char** argv) {
	
	
	cout<<"Ingrese el nombre del padre"<<endl;
	cin>>p.nombre_padre;

	cout<<"Ingrese nombre del hijo"<<endl;
	cin>>p.nombre_hija;
	
	cout<<"Ingrese nombre del Abuelo"<<endl;
	cin>>p.nombre_abuelo;
	
	cout<<"Ingrese nombre del Hermano"<<endl;
	cin>>p.nombre_hermano;
	
	
	cout<<"Nombre del Padre: "<<p.nombre_padre<<endl;
	cout<<"Edad del Padre: "<<p.edad<<endl;
	cout<<"Nombre de la hijo: "<<p.nombre_hija<<endl;
	cout<<"Edad: "<<p.calcular_edad();
	cout<<"Nombre del Abuelo: "<<p.nombre_abuelo<<endl;
	cout<<"Nombre del Hermano: "<<p.nombre_hermano<<endl;
	
	return 0;
}
