#include <iostream>
#include "cubeta.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
cubeta c;

int main(int argc, char** argv) {
	for(int i=1;i<=10;i++){
		c.agregar(i*10);
		for(int x=0;x<5;x++){	
		  c.T->h.agregar(x+i*10);
		}				
	}
	
	c.presentar_h();
	
	return 0;
}
