#include <iostream>
#include "carro.h"
#include "camion.h""
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int op=0;
int pos=0;
carro toyota[5];
void agregar(){
	
	cout<<"Ingrese Marca"<<endl;
	cin>>toyota[pos].marca;
	
	cout<<"Ingresa Llantas"<<endl;
	cin>>toyota[pos].n_llantas;
	pos++;
}

void presentar(){
	for(int i=0;i<pos;i++){
		cout<<"Marca: "<<toyota[i].marca<<endl;
		cout<<"Llantas: "<<toyota[i].n_llantas<<endl;
	}
	
}
void ordenamiento(){
	carro temp;
	for(int x=0;x<pos;x++){
		for(int y=1;y<pos;y++){
			if(toyota[y-1].n_llantas<toyota[y].n_llantas){
				temp=toyota[y-1];
				toyota[y-1]=toyota[y];
				toyota[y]=temp;
				
			}
		}
	}
	
}
camion mate;
int main(int argc, char** argv) {
	
	mate.tam_carroceria=5;
	mate.tipo_carroceria="madera";
	mate.marca="Mack";
	mate.n_llantas=6;
	mate.dir.calle=4;
	

	cout<<"Tamaño Carroceria: "<<mate.tam_carroceria<<endl;
	cout<<"Tipo de Carroceria: "<<mate.tipo_carroceria<<endl;
	cout<<"Marca: "<<mate.marca<<endl;
	cout<<"Llantas: "<<mate.n_llantas<<endl;
	cout<<"Costo:"<< mate.costoxllanta()<<endl;
	cout<<"Test: "<<mate.enviar_test()<<endl;
	cout<<"Calle: "<<mate.dir.calle<<endl;
	
/*	
do{
	cout<<"Menu"<<endl;
	cout<<"1) Agregar"<<endl;
	cout<<"2) Presentar"<<endl;
	cout<<"3) Ordenar"<<endl;
	cout<<"0) Salir"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			agregar();
			break;
		case 2:
			presentar();
			break;
		case 3:
			ordenamiento();
			presentar();
			break;
		case 0:
			break;
		default:
			cout<<"Opcion no valida"<<endl;
	}
	
}while(op!=0);
*/	
	return 0;
}
