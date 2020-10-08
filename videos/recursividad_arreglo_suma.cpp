#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int suma(int i);
int ar[]={1,2,3,4,5};
int main(int argc, char** argv) {
	
	cout<<"Resultado: "<<suma(4)<<endl;
	return 0;
}
int suma(int i){
	if(i==0){
		return ar[i];
	}
	else{
		return suma(i-1)+ar[i];
	}
}
