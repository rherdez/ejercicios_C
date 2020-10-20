#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void crear();
void leer();

int main(int argc, char** argv) {
	crear();
	leer();
	return 0;
}
void crear(){
	ofstream fs("C:\\textos\\x.txt");
	fs<<"Hola Mundo"<<endl;
	fs<<"Hola Mundo2"<<endl;
	fs.close();
}

void leer(){
	string linea;
	ifstream fi("C:\\textos\\x.txt");
    while(!fi.eof()){
    	fi>>linea;
    	if(!fi.eof()){
    		cout<<linea<<endl;
		}
	}
}

