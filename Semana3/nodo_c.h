#ifndef NODO_C_H
#define NODO_C_H
#include <iostream>
using namespace std;
class nodo_c
{
	public:
		int id;	
		string nombre;
		double sueldo;
		double deduccion();	
		nodo_c *sig;
		nodo_c *ant;
	protected:
};

#endif
