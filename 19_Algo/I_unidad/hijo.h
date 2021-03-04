#ifndef HIJO_H
#define HIJO_H
#include "padre.h"

class hijo: public padre
{
	public:
		hijo();
		hijo(int x): padre(x){
			
		}
		int h;
	protected:
};

#endif
