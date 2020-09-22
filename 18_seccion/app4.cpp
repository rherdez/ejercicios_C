#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int d;
	cout<<"Ingrese un numero"<<endl;
	cin>>d;
	
	switch(d){
		case 1:
				cout<<"Domingo"<<endl;
				break;
		case 2:			
				cout<<"Lunes"<<endl;
				break;
		case 3:
				cout<<"Martes"<<endl;
				break;
		case 4:
				cout<<"Miercoles"<<endl;
				break;
		case 5:
				cout<<"Jueves"<<endl;
				break;
		case 6:
				cout<<"Viernes"<<endl;
				break;
		case 7:
				cout<<"Sabado"<<endl;
				break;
		default:
				cout<<"Opcion no valida"<<endl;
	}
	
	return 0;
}
