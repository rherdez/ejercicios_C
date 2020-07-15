#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int *p=new int();
int n=5;
int main(int argc, char** argv) {
	*p=2;
	cout<<"valor P: "<<*p<<endl;
	cout<<"valor N: "<<n<<endl;
	//referencia
	cout<<"Referencia P: "<<p<<endl;
	cout<<"Referencia N: "<<&n<<endl;
	p=&n;
	
	cout<<"valor P: "<<*p<<endl;
	cout<<"valor N: "<<n<<endl;
	
	return 0;
}
