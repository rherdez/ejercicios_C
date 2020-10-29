#ifndef NODO_CUBETA_CONH_H
#define NODO_CUBETA_CONH_H
#include "nodo_cubeta_hija.h"
class nodo_cubeta_conh
{
	public:
		int id;
		nodo_cubeta_conh *sig;
		nodo_cubeta_conh *ant;
		nodo_cubeta_hija h;
		
	protected:
};

#endif
