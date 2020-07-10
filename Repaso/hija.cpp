#include "hija.h"

hija::hija(double d): padre(d){
	nombre_hija="vacio";
}
hija::hija(double d,string n): padre(d){
	nombre_hija=n;
	
}

double hija::dividir_edad(){
	return edad/2; 
}

double hija::dividir_edad(int x){
	return x/2; 
}

