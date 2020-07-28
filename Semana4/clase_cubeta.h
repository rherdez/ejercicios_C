#ifndef CLASE_CUBETA_H
#define CLASE_CUBETA_H
#include <iostream>
#include "nodo_cubeta.h"
using namespace std;
class clase_cubeta
{
	public:
		nodo_cubeta *I,*F,*T;
		int tam=100;
		void agregar_cubeta(int);
		void agregar_hijo(int,string);
		void buscar_c(int);
		void buscar_h(int);
		void presentar_cubeta();
		void presentar_hijo(int);
		
		
	protected:
};

#endif
