#include "empleado.h"

double empleado::deduccion(){
	return sueldo*0.05;
}

double empleado::total_pagar(){
	return sueldo-deduccion();
}
empleado::empleado(){
	nombre="xxxxxx";
	sueldo=0;
}
empleado::empleado(int x){
	nombre="Maria";
	sueldo=100;
}
