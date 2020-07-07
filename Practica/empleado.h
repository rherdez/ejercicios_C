#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "persona.h"

class empleado:public persona
{
	public:
		empleado(int y);
		double sueldo;
	protected:
};

#endif
