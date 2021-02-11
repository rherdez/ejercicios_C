#include "carro.h"

carro::carro(){
	marca="NA";
	anio=0;
}

carro::carro(int x){
	marca="NA";
	anio=x;
}


int carro::antiguedad(){
	return 2021-anio;
}
