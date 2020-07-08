#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int sumatoria(int);
int exponente (int a, int b);
double factorial(double);
int main(int argc, char** argv) {
	cout<<"La sumatoria es: "<<sumatoria(5)<<endl;
	cout<<"Exponente: "<<exponente(2,3)<<endl;
	cout<<"El Factorial es: "<<factorial(50)<<endl;
	
	return 0;
}
int sumatoria(int x){
	if(x==0){
		return x;
	}
	else{
		return sumatoria(x-1)+x;
	}
		
}

int exponente (int a, int b) {
	if (b == 0) 
		{return 1;}
	else 
	{return exponente(a,b-1)*a;}
}




double factorial (double x) {
	if (x == 1) {
		return 1;
	}		
	else {
		return factorial(x-1)*x;
	}
		
}


