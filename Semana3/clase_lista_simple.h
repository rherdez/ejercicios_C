#ifndef CLASE_LISTA_SIMPLE_H
#define CLASE_LISTA_SIMPLE_H
#include <iostream>
#include "nodo.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>

using namespace std;

class clase_lista_simple
{
	public:
		nodo *I,*F,*T,*A,*T2;
		nodo temp;
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
