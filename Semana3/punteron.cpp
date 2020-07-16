#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int *p=new int();
int n;
int main(int argc, char** argv) {
	n=10;
	*p=20;
	
	cout<<"Valor P: "<<*p<<endl;
	cout<<"Valor n: "<<n<<endl;
	
	//referencia
	cout<<"Referencia P: "<<p<<endl;
	cout<<"Referencia n: "<<&n<<endl;
	////
//	p=&n;
	*p=525;
	
	cout<<"Valor de N: "<<n<<endl;
	n=630;
	cout<<"Valor de P: "<<*p<<endl;
	return 0;
}
