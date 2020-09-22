#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int edad;
	char t;
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	cout<<"Tiene trabajo? s o n"<<endl;
	cin>>t;
	if(edad>=21 && t=='s'){
		cout<<"Es mayor de edad"<<endl;
	}		
	else
	{
		cout<<"Es menor de edad"<<endl;
	}
	
	return 0;
}
