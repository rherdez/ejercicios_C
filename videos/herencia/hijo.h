#ifndef HIJO_H
#define HIJO_H
#include "padre.h"
#include "hermano.h"

class hijo:public padre,public hermano
{
	public:
		hijo(int);
		string nombre_hija;
		int calcular_edad();
	protected:
};

#endif
