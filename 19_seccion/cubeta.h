#ifndef CUBETA_H
#define CUBETA_H
#include "nodo_cubeta_conh.h"
#include "nodo_cubeta_hija.h"

class cubeta
{
	public:
		nodo_cubeta_conh *I, *F,*T;
	
	
		void agregar(int);
		void agregar_hija(int);
		void presentar_I();
		void presentar_F();
		void presentar_h();
	protected:
};

#endif
