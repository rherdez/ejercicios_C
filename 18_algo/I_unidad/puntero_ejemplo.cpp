#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int v=5;
int *p;
int main(int argc, char** argv) {
	p=&v;
	*p=15;
	cout<<"Valores====================="<<endl;
	cout<<"Variable valor: "<<v<<endl;
	cout<<"Puntero valor: "<<*p<<endl;
	
	cout<<"Memoria====================="<<endl;
	cout<<"Variable Memoria: "<<&v<<endl;
	cout<<"Puntero Memoria: "<<p<<endl;
	
	cout<<"Valor al puntero====================="<<endl;
	*p=v;
	
	cout<<"Variable valor: "<<v<<endl;
	cout<<"Puntero valor: "<<*p<<endl;
	cout<<"Variable Memoria: "<<&v<<endl;
	cout<<"Puntero Memoria: "<<p<<endl;
	
	cout<<"Memoria al puntero====================="<<endl;
	v=56;
	
	p=&v;
	
	cout<<"Variable valor: "<<v<<endl;
	cout<<"Puntero valor: "<<*p<<endl;
	cout<<"Variable Memoria: "<<&v<<endl;
	cout<<"Puntero Memoria: "<<p<<endl;
	return 0;
}
