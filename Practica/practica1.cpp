#include <iostream>
#include "persona.h"
#include "empleado.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

persona p(2);
empleado e(2);
struct{
	int n;
	string c;
	int p(){
		return 5;
	}
} x;

int main(int argc, char** argv) {
	/*p.id=2;
	p.nombre="pedro";*/
	cout<<"Id: "<<p.id<<endl;
	cout<<"Nombre: "<<p.nombre<<endl;
	
	x.n=3;
	x.c="antonio";
	
	cout<<"Id: "<<x.n<<endl;
	cout<<"Nombre: "<<x.c<<endl;
	cout<<"prueba: "<<x.p()<<endl;
	
	cout<<"Sueldo: "<<e.sueldo;
	
	return 0;
}
