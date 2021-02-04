#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void agregar();
void sumar();
void restar(int, int);
int multi();
int divi(int,int);
int pre(int);
int n1,n2;
int main(int argc, char** argv) {
	int op;
	do{
		system("cls");
		cout<<"Menu"<<endl;
		cout<<"1) Sumar "<<endl;
		cout<<"2) Restar "<<endl;
		cout<<"3) Multiplicar "<<endl;
		cout<<"4) Dividir "<<endl;
		cout<<"5) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				agregar();
				sumar();
				system("pause");
				break;
			case 2:
				agregar();
				restar(n1,n2);
				system("pause");
				break;
			case 3:
				agregar();
				cout<<"La multiplicacion es:"<<multi()<<endl;
				system("pause");
				break;
			case 4:
				agregar();
				cout<<"La Division  es: "<<divi(n1,n2)<<endl;
				system("pause");
				break;
			case 5:
				pre(10);
				system("pause");
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
			
		}
				
	}while(op!=0);
	return 0;
}

void agregar(){
	cout<<"Ingrese el valor n1: "<<endl;
	cin>>n1;
	cout<<"Ingrese el valor n2: "<<endl;
	cin>>n2;
}
void sumar(){
	cout<<"La suma es: "<<n1+n2<<endl;
}
void restar(int x, int y){
	cout<<"La resta es: "<<x-y<<endl;
}
int multi(){
	return n1*n2;
}
int divi(int x, int y){
	return x/y;
}

int pre(int x){
	if(x<0){
		return 0;		
	}
	else{
		pre(x-1);
		cout<<"No: "<<x<<endl;
	}
}
