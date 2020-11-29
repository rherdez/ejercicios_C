#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "nodo_lista.h"

using namespace std;
class lista
{
	public:
		nodo_lista *I,*T,*F,A;
		void agregar(int);
		void presentar();
	protected:
};

#endif
