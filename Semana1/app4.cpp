#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int numeros(int);
int main(int argc, char** argv) {
	numeros(4);
	return 0;
}

int numeros(int x){
	if(x==0){
		return 0;
	}
	else{
		
		numeros(x-1);
		cout<<x<<endl;
	}
}
