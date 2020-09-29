#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void suma();
int resta();
void dividir(int, int);
int presentar(int);
int main(int argc, char** argv) {

	int op;
	
	do{
		
		cout<<"Menu"<<endl;
		cout<<"1) Suma"<<endl;
		cout<<"2) Resta"<<endl;
		cout<<"3) Dividir"<<endl;
		cout<<"4) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		int n1,n2;
		switch(op){
			case 1:
				suma();
				break;
			case 2:
				cout<<"El resultado es :"<<resta()<<endl;
				break;
			case 3:
			
				cout<<"Ingrese N1"<<endl;
				cin>>n1;
				cout<<"Ingrese N2"<<endl;
				cin>>n2;
				dividir(n1,n2);
			case 4:
				cout<<"Ingrese un numero"<<endl;
				cin>>n1;
				cout<<presentar(n1)<<endl;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
		
	
	return 0;
}

	
void suma(){
	int n1,n2;
	cout<<"Ingrese N1"<<endl;
	cin>>n1;
	cout<<"Ingrese N2"<<endl;
	cin>>n2;
	cout<<"El resultado es: "<<n1+n2<<endl;	
}

int resta(){
		int n1,n2;
	cout<<"Ingrese N1"<<endl;
	cin>>n1;
	cout<<"Ingrese N2"<<endl;
	cin>>n2;
	return n1-n2;
}
void dividir(int h, int j){
	cout<<"El resultado es: "<<h/j<<endl;
}

int presentar(int x){
	if(x==0){
		return 0;
	}
	else{
		cout<<x<<endl;	
		presentar(x-1);
	
	}
		
}

