#include "empleado.h"

empleado::empleado(){
	nombre="Antonio";
	sueldo=999;
}

double empleado::cal_deduc(){
	return sueldo *0.05;
}

double empleado::total_a_pagar(){
	return sueldo-cal_deduc();
}
