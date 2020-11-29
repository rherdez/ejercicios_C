#include <iostream>
#include "arboles.h"
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
arboles pino;
int n;
int main(int argc, char** argv) {
	srand(time(NULL));
	for(int i=0;i<10;i++){
		n=rand()%99;
		if(!pino.buscar(pino.R,n/10)){
	
			pino.agregar(pino.R,n/10);
		}
		pino.agregar_lista(n);		
	}
	pino.presentar(pino.R);
	pino.menor(pino.R);
	pino.mayor(pino.R);
	
	
	
	
	return 0;
}
