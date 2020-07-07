#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n1;
int z[10];
int main(int argc, char** argv) {
	for(int i=0;i<10;i++){
		z[i]=i;
	}
	cout<<z[2]<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>n1;
	
	switch(n1){
		case 1:
			cout<<"Uno"<<endl;
			break;
		case 2:
			cout<<"Dos"<<endl;
			break;
		default:
			cout<<"Esta opcion no esta contemplada"<<endl;
	}
	
	
	return 0;
}
