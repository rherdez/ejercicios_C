#include "humano.h"

string humano::obs(){
		if(edad>=21){
			return "Mayor";		
		}
		else{
			return "Menor";
		}
}

	humano::humano(int x){
		id=x;
	}

