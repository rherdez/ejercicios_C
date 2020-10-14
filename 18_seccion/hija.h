#ifndef HIJA_H
#define HIJA_H
#include <iostream>
#include "papa.h"
using namespace std;
class hija:public papa
{
	public:
		string nombre_hijo;
		int calcular_edad();
	protected:
};

#endif
