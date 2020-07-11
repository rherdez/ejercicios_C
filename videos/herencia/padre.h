#ifndef PADRE_H
#define PADRE_H
#include "abuelo.h"
#include <iostream>
using namespace std;
class padre:public abuelo
{
	public:
		padre(int);
		string nombre_padre;
		int edad;
	protected:
};

#endif
