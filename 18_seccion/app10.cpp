#include <iostream>
#include "empleado.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

empleado emp[3];
int main(int argc, char** argv) {
	
    emp[0].nombre="Pedro";
    emp[0].sueldo=100;
    
    emp[1].nombre="Maria";
    emp[1].sueldo=1000;
    
    
    
    
    for(int i=0;i<3;i++){
    	cout<<"Nombre: "<<emp[i].nombre<<endl;
    	cout<<"Sueldo: "<<emp[i].sueldo<<endl;
    	cout<<"Deduccion: "<<emp[i].cal_deduc()<<endl;
    	cout<<"Sueldo a Pagar: "<<emp[i].total_a_pagar()<<endl;	
    	cout<<"========================================"<<endl;
	}
    
    
	return 0;
}
