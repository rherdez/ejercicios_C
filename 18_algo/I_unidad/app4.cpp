#include <iostream>
#include "carro.h"
#include "camion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
carro toyota[2];

int ar[5];

void ordenar(){
	int temp;
	for(int x=0;x<5;x++){
		for(int y=1;y<5;y++){
			if(ar[y-1]<ar[y]){
				temp=ar[y];
				ar[y]=ar[y-1];
				ar[y-1]=temp;
			}
		}
	}
}
void presentar(){
	for(int i=0;i<5;i++){
		cout<<ar[i]<<endl;
	}
}
camion ft;
int main(int argc, char** argv) {
	ft.car.marca="marca";
	ft.car.anio=2019;
	ft.tamano_paila=5;
	ft.tipo_carroceria="especial";
	
	cout<<"Paila: "<<ft.tamano_paila<<"mts"<<endl;
	cout<<"Carroceria: "<<ft.tipo_carroceria<<endl;
	cout<<"Marca: "<<ft.car.marca<<endl;
	cout<<"Año: "<<ft.car.anio<<endl;
	cout<<"Antiguedad: "<<ft.car.antiguedad()<<endl;
	
	
	
	
	/*toyota[0].marca="Corolla";
	toyota[0].anio=2020;
	cout<<"Marca: "<<toyota[0].marca<<endl;
	cout<<"Año: "<<toyota[0].anio<<endl;
	cout<<"Antiguedad: "<<toyota[0].antiguedad()<<endl;
	
	toyota[1].marca="Celica";
	toyota[1].anio=2010;
	cout<<"Marca: "<<toyota[1].marca<<endl;
	cout<<"Año: "<<toyota[1].anio<<endl;
	cout<<"Antiguedad: "<<toyota[1].antiguedad()<<endl;
	 ar[0]=2;
	 ar[1]=8;
	 ar[2]=5;
	 ar[3]=4;
	 ar[4]=3;
	 ordenar();
	 presentar();*/
	
	return 0;
}
