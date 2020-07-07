#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int op;
int main(int argc, char** argv) {
   
	do{
		cout<<"Menu"<<endl;
		cout<<"1)Sumar"<<endl;
		cout<<"2)Resta"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					cout<<"Estoy sumando"<<endl;
					break;
			case 2:
					cout<<"Estoy Restando"<<endl;
					break;
			case 0:
			
			default:
				cout<<"Opcion no valida"<<endl;
				
		}				
	}while(op!=0);
	
	
	return 0;
}
