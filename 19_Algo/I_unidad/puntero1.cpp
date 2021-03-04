#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int v;
int *p=new int;
int main(int argc, char** argv) {

	
	v=5;
	*p=21;
	cout<<"Valor======================="<<endl;
	cout<<"Variable valor: "<<v<<endl;
	cout<<"Puntero valor: "<<*p<<endl;
	cout<<endl;
	
	cout<<"Memoria======================="<<endl;
	cout<<"Variable memoria: "<<&v<<endl;
	cout<<"Puntero memoria: "<<p<<endl;
	cout<<endl;
	
	cout<<"Igual valores======================="<<endl;
	*p=v;
	*p=75;
	
	cout<<"Valor======================="<<endl;
	cout<<"Variable valor: "<<v<<endl;
	cout<<"Puntero valor: "<<*p<<endl;
	cout<<endl;
	
	cout<<"Memoria======================="<<endl;
	cout<<"Variable memoria: "<<&v<<endl;
	cout<<"Puntero memoria: "<<p<<endl;
	cout<<endl;
			
	
	return 0;
}
