#ifndef HIJO_H
#define HIJO_H
#include "padre.h"

#include <iostream>
using namespace std;

class hijo:public padre
{
	public:
		string nombre_hijo;
		int calcular_edad();
	protected:
};

#endif
