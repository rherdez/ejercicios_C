#include <iostream>
#include "humano.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
humano h;
int main(int argc, char** argv) {
	h.id=5;
	h.nombre="Pedro";
	cout<<h.nombre<<endl;
	cout<<h.id<<endl;
	///nuevo
	return 0;
}
