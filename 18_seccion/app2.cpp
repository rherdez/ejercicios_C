#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int edad;
	char s;
	
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	cout<<"Tiene trabajo s o n"<<endl;
	cin>>s;
	
	if(edad>=21 && s=='s'){
			cout<<"Es Mayor de edad"<<endl;	
	}
	else{
			cout<<"Es Menor de edad \n";
	}
		
	
	
	
	return 0;
}
