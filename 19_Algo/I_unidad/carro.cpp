#include "carro.h"

carro::carro(){
	n_llantas=0;
}
carro::carro(int x){
	n_llantas=x;
}

int carro::costoxllanta(){
	return n_llantas*costo;
}
