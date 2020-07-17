#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class nodo
{
	public:
		int id;	
		string nombre;
		double sueldo;
		double deduccion();	
		nodo *sig;
		
		
		
	protected:
};

#endif
