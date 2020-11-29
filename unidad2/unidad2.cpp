#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "lista.h"
#include "arboles.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
lista l;
arboles pino;
using namespace std;
int n=0;
int main(int argc, char** argv) {

srand(time(NULL));
	for(int i=0;i<1000;i++){
		n=rand()%999;
		
		if(!pino.buscar(pino.R, (n/10))  ) {
			pino.agregar(pino.R,n/10);
		}
		
		pino.agregar_lista(n);
		
	}

pino.presentar(pino.R);

pino.menor(pino.R);

pino.mayor(pino.R);
	return 0;
}
