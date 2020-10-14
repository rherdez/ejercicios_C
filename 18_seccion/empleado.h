#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;
class empleado
{
	public:
		empleado();

		
		string nombre;
		double sueldo;
		double cal_deduc();
		double total_a_pagar();
	protected:
};

#endif
