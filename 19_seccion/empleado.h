#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;
class empleado
{
	public:
		empleado();
		empleado(int);
		string nombre;
		double sueldo;
		double deduccion();
		double total_pagar();
	protected:
};

#endif
