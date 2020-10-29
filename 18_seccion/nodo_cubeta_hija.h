#ifndef NODO_CUBETA_HIJA_H
#define NODO_CUBETA_HIJA_H
#include "nodo_cubeta.h"
#include <iostream>
using namespace std;
class nodo_cubeta_hija
{
	public:
		nodo_cubeta *I, *F,*T;
		void agregar(int);
		void presentar_I();
		void presentar_F();
	protected:
};

#endif
