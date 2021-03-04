#ifndef CAMION_H
#define CAMION_H
#include "carro.h"

#include <iostream>
using namespace std;

class camion: public carro
{
	public:
		string tipo_carroceria;
		int tam_carroceria; 
		int enviar_test();

	protected:
};

#endif
