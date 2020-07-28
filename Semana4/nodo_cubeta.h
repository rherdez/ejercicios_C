#ifndef NODO_CUBETA_H
#define NODO_CUBETA_H
#include "clase_N_hijo.h"
#include <iostream>
using namespace std;
class nodo_cubeta
{
	public:
		int id;
		nodo_cubeta *sig;
		nodo_cubeta *ant;
		clase_N_hijo hijo;
		
	protected:
};

#endif
