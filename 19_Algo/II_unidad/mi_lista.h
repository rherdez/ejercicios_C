#ifndef MI_LISTA_H
#define MI_LISTA_H
#include <iostream>
#include "nodo_doble.h"
using namespace std;

class mi_lista
{
	public:
	nodo_doble *I, *T, *F, *A, *T2;	
	void agregar(int );
	void presentar();
	void presentar_F();
	void buscar(int);
	void borrar(int);
	void modificar(int , int);
	void insertar(int ,int);
	
	protected:
};

#endif
