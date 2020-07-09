#include "carro.h"

int carro::calcular_antiguedad(){
	return 2020-anio;
	
}

carro::carro(){
	anio=2020;
	modelo="Vacio";
}

carro::carro(int x){
	anio=x;
	modelo="Vacio";
}
