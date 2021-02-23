#ifndef CAMION_H
#define CAMION_H
#include <iostream>
#include "carro.h"
using namespace std;

class camion:public carro
{
	public:
		int tamano_paila;
		string tipo_carroceria;
		
	protected:
};

#endif
