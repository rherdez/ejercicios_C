#ifndef HIJA_H
#define HIJA_H
#include <iostream>
#include "padre.h"
using namespace std;

class hija:public padre
{
	public:
		hija(double);
		hija(double,string);
		string nombre_hija;
		double dividir_edad();
		double dividir_edad(int);
	protected:
};

#endif
