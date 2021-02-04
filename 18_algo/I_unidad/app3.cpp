#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void agregar();
void suma();
void resta(int, int);
int multi();
int divi(int,int);
int pre(int);

int n1,n2;

int main(int argc, char** argv) {
	int op;
	do{
		system("cls");
		cout<<"Menu"<<endl;
		cout<<"1) Suma"<<endl;
		cout<<"2) Resta"<<endl;
		cout<<"3) Multiplicar"<<endl;
		cout<<"4) Dividir"<<endl;
		cout<<"5) Presentar"<<endl;
		cout<<"6) Sumatoria"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				agregar();
				suma();
				system("pause");
				break;
			case 2:
				agregar();
				resta(n1,n2);
				system("pause");
				break;
			case 3:
				agregar();
				cout<<"La multiplicacion es: "<<multi()<<endl;
				system("pause");
				break;
			case 4:
				agregar();
				cout<<"La division es : "<<divi(n1,n2)<<endl;
				system("pause");
				break;
			case 5:
				pre(10);
				system("pause");
				break;
			case 0:
				break;
			default:
				cout<<"opcion no valida"<<endl;
		}
	}while(op!=0);
	
	return 0;
}

void agregar(){
	cout<<"Ingrese valor N1: "<<endl;
	cin>>n1;
	cout<<"Ingrese valor N2: "<<endl;
	cin>>n2;	
}
void suma(){
	cout<<"La suma es: "<<n1+n2<<endl;
}
void resta(int x,int y){
	cout<<"La Resta es: "<<x-y<<endl;	
}
int multi(){
	return n1*n2;
}
int divi(int x,int y){
	return x/y;
}
int pre(int x){
	if(x<0){
		return 0;
	}
	else{
	
		pre(x-1);
		cout<<x<<endl;
	}
}

