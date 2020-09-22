#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char letra;
	cout<<"Ingrese una letra"<<endl;
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vocal"<<endl;
			break;
		default:
			cout<<"Consonante"<<endl;
	}
	return 0;
}
