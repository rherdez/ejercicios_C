#ifndef ARBOLES_H
#define ARBOLES_H
#include <iostream>
#include "nodo_cubeta.h"

using namespace std;

class arboles
{
	public:
		nodo_cubeta *R,*T;
		
		void agregar(nodo_cubeta *, int x);
		void nuevo(int x);
		void presentar(nodo_cubeta *);
		void agregar_lista(int x);
		bool buscar(nodo_cubeta *, int x);
		void menor(nodo_cubeta *);
		void mayor(nodo_cubeta *);
		
		
	protected:
};

#endif
