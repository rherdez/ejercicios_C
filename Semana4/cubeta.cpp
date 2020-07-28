#include <iostream>
#include "clase_cubeta.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

clase_cubeta cubeta;
void agregar();

int main(int argc, char** argv) {
	
	for(int i=0;i<10;i++){
		cubeta.agregar_cubeta(i);
	}
	
	//cubeta.presentar_cubeta();
	
	cubeta.agregar_hijo(50,"Carmen");
	cubeta.agregar_hijo(310,"Pedro");
	cubeta.agregar_hijo(80,"Maria");
	cubeta.presentar_hijo(350);
	
	
	
	return 0;
}
