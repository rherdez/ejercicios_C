#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void sumar();
int restar();
void divi(int, int);
int presentar(int);
int sumatoria(int);
int main(int argc, char** argv) {
	int op;
	int n1,n2;
	do{	
		cout<<"Menu"<<endl;
		cout<<"1) Sumar"<<endl;
		cout<<"2) Restar"<<endl;
		cout<<"3) Dividir"<<endl;
		cout<<"4) Presentar"<<endl;
		cout<<"5) Sumatoria"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
	 			sumar();
				break;
			case 2:
				cout<<"El resultado es: "<<restar()<<endl;
				break;
			case 3:
				
				cout<<"Ingrese N1"<<endl;	
				cin>>n1;
				cout<<"Ingrese N2"<<endl;
				cin>>n2;
				divi(n1,n2);
				break;
			case 4:
				cout<<"Ingrese N1"<<endl;	
				cin>>n1;
				presentar(n1);
				break;
			case 5:
				cout<<"Ingrese N1"<<endl;	
				cin>>n1;
				cout<<"La Sumatoria es: "<<sumatoria(n1)<<endl;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}

void sumar(){
		int n1,n2;
	cout<<"Ingrese N1"<<endl;	
	cin>>n1;
	cout<<"Ingrese N2"<<endl;
	cin>>n2;
	cout<<"El resultado es:"<<n1+n2<<endl;
	
}
int restar(){
		int n1,n2;
	cout<<"Ingrese N1"<<endl;	
	cin>>n1;
	cout<<"Ingrese N2"<<endl;
	cin>>n2;
	return n1-n2;
	
}
void divi(int x, int y){
	cout<<"El Resultado es: "<<x/y<<endl;
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
int sumatoria(int x){
	if(x==0){
		return 0;
	}
	else{		
		return sumatoria(x-1)+x;	
	}
}
