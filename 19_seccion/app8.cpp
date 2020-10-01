#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int factor(int);

int main(int argc, char** argv) {
	int n;
	cout<<"Ingresar un numero"<<endl;
	cin>>n;
	cout<<"El resultado: "<<factor(n);
	return 0;
}

int factor(int x){
	if(x==0){
		return 1;
	}
	else{
		return factor(x-1)*x;
	}
}
