#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;
class carro
{
	private:
		int costo=1500;
	public:
		
		carro();
		carro(int);
		
		int n_llantas;
		string marca;
		
		int costoxllanta();
	protected:

};

#endif
