#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int *p=new int();
	int x=12;
	*p=20;
	
	cout<<"Valor de P: "<<*p<<endl;
	cout<<"Valor de X: "<<x<<endl;
	//direccion de memoria
	cout<<"Memoria de P: "<<p<<endl;
	cout<<"Meroria de X: "<<&x<<endl;
	
*p=x;
x=x+1;
	cout<<"Valor de P: "<<*p<<endl;
	cout<<"Valor de X: "<<x<<endl;
p=&x;
*p=70;

	cout<<"Valor de P: "<<*p<<endl;
	cout<<"Valor de X: "<<x<<endl;
x=x+80;	
p=new int();
*p=52;
	cout<<"Valor de P: "<<*p<<endl;
	cout<<"Valor de X: "<<x<<endl;
		//direccion de memoria
	cout<<"Memoria de P: "<<p<<endl;
	cout<<"Meroria de X: "<<&x<<endl;
	return 0;
}
