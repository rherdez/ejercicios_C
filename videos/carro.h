#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;
class carro
{
	public:
		carro();
		carro(int);
		
		
		int anio;
		string modelo;
		int calcular_antiguedad();
	protected:
};

#endif
