#include <iostream>
#include "carro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

carro toyota[2];
int main(int argc, char** argv) {
	
	toyota[1].marca="celica";
	toyota[1].n_llantas=8;
	
	toyota[0].marca="corolla";
	toyota[0].n_llantas=4;
	
	cout<<"Marca: "<<toyota[0].marca<<endl;
	cout<<"Llantas: "<<toyota[0].n_llantas<<endl;
	cout<<"Costo:  "<<toyota[0].costoxllanta()<<endl;
	
	cout<<"====================================="<<endl;
	

	cout<<"Marca: "<<toyota[1].marca<<endl;
	cout<<"Llantas: "<<toyota[1].n_llantas<<endl;
	cout<<"Costo:  "<<toyota[1].costoxllanta()<<endl;
	
	return 0;
}
