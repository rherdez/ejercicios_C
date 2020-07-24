#ifndef CLASE_LISTA_COMP_H
#define CLASE_LISTA_COMP_H
#include <iostream>
#include "nodo_c.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>

using namespace std;
class clase_lista_comp
{
	public:
		nodo_c *I,*F,*T,*A,*T2;
		nodo_c temp;
		void remover();
		void agregar();
		void presentar();
		void buscar(int);
		void registro();
		void eliminar();
		void guardar();
		void abrir();
		void ordenar();
	protected:
};

#endif
