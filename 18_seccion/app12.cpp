#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int *p=new int();
int x=12;

*p=20;	

	cout<<"Valor P: "<<*p<<endl;
	cout<<"Valor X: "<<x<<endl;
	////direccion
	cout<<"Memoria P: "<<p<<endl;
	cout<<"Memoria X: "<<&x<<endl;

*p=x;
x=50;
	//
	cout<<"Valor P: "<<*p<<endl;
p=&x;
x=200;
	cout<<"Valor P: "<<*p<<endl;
	////direccion
	cout<<"Memoria P: "<<p<<endl;
	cout<<"Memoria X: "<<&x<<endl;


	return 0;
}
