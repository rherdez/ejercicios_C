#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <ctime>

unsigned t0,t1,m0,m1;




/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

long maximo(const vector<long>& numeros){
	long producto=0;
	int n=numeros.size();
	
	for(int x=0;x<n;x++){
		for(int j=x+1;j<n;j++){
			producto=max(producto, numeros[x] * numeros[j]);
		}
	}
	return producto;
	
}
void llenar( vector<long>& numeros,int cant){
	
	for(int i=0;i<cant;i++){
		numeros[i]=rand();
	}	
	
}

void mi_maximo(const vector<long>& numeros){
	long producto=0;
	int n=numeros.size();
	int ar_ma[2]={0,0};
	int maximo=0;
	int temp;
	for(int k=0;k<n;k++){
		maximo=numeros[k];
		
		if(maximo>ar_ma[0]){
			temp=ar_ma[0];
			ar_ma[0]=maximo;
			maximo=temp;
		}
		
		if(maximo>ar_ma[1]){
			ar_ma[1]=maximo;
		}
	}
	cout<<"Producto 2: "<<ar_ma[0]*ar_ma[1]<<endl;
	
}
int main(int argc, char** argv) {
	srand(time(NULL));
	int pruebas=3;
	int cantidad=0;

	while(pruebas>=0){
		cout<<"Prueba #: "<<pruebas<<endl;
		pruebas--;
		
	
		cantidad=100000;
		cout<<"cantidad: "<<cantidad<<endl;
		vector<long> numero(cantidad);
		llenar(numero,cantidad);
		t0=clock();		
			cout<<"\t "<<maximo(numero)<<endl;
		t1=clock();
		m0=clock();
			mi_maximo(numero);
		m1=clock();
	
		double time =(double(t1-t0)/CLOCKS_PER_SEC)	;
		double time2 =(double(m1-m0)/CLOCKS_PER_SEC)	;
		cout<<"\t\t "<<" Tiempo: "<<time<<endl;
		cout<<"\t\t "<<" Tiempo2: "<<time2<<endl;
	}
	
	return 0;
}
