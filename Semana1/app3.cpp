#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void llenar();
void presentar();
void test();
void ordenar();
int menor();
int mayor();
int ar[10];
int op;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Llenar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Ordenar"<<endl;
		cout<<"4) Test"<<endl;
		cout<<"5) Mayor y Menor"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
					llenar();
					break;
			case 2:
					presentar();
					break;
			case 3:
					ordenar();
					presentar();
					break;
			case 4:
				test();
				break;
			case 5:
				ordenar();
				cout<<"El mayor es: "<<mayor()<<endl;
				cout<<"El menor es: "<<menor()<<endl;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
	}while(op!=0);
	return 0;
}

void llenar(){
	srand(time(NULL));
	for(int i=0;i<10;i++){
		ar[i]=rand()%50;
	}
}
void presentar(){

	for(int i=0;i<10;i++){
		cout<<i<<" ->"<<ar[i]<<endl;
	}
}
void ordenar(){
	int temp;
	for(int i=1;i<10;i++){
		for(int j=0;j<9;j++){
			if(ar[j]<ar[j+1]){
				temp=ar[j]	;
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}
void test(){
	int x=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			x++;
			}
		}
	
	cout<<x;
}
int menor(){
	return ar[9];
}
int mayor(){
	return ar[0];
}
