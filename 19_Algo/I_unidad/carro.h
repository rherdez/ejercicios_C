#ifndef CARRO_H
#define CARRO_H
#include "direccion.h"
#include <iostream>

using namespace std;
class carro
{
	private:
		int costo=1500;
	public:
		
		carro();
		carro(int);
			direccion dir;
		int n_llantas;
		string marca;
	
		int costoxllanta();
	protected:
			int test=520;

};

#endif
