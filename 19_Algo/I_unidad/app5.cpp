#include <iostream>
#include "carro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

carro toyota;
int main(int argc, char** argv) {
	toyota.marca="corolla";
	toyota.n_llantas=4;
	
	cout<<"Marca: "<<toyota.marca<<endl;
	cout<<"Llantas: "<<toyota.n_llantas<<endl;
	cout<<"Costo:  "<<toyota.costoxllanta()<<endl;
	return 0;
}
