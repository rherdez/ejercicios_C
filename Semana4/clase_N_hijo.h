#ifndef CLASE_N_HIJO_H
#define CLASE_N_HIJO_H
#include "nodo_hijo.h"
#include <iostream>
using namespace std;

class clase_N_hijo
{
	public:
		nodo_hijo *I,*T,*F;
		void agregar(int, string);
		void presentar();
		void buscar(int);
		
	protected:
};

#endif
