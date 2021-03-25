#include <iostream>
#include "mi_lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int op,x,y;
mi_lista lista;
int main(int argc, char** argv) {
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Presentar Contrario"<<endl;
		cout<<"4) Buscar"<<endl;
		cout<<"5) Borrar"<<endl;
		cout<<"6) Modificar"<<endl;
		cout<<"7) Insertar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>x;
				lista.agregar(x);
				break;
			case 2:
				lista.presentar();
				break;
			case 3:
				lista.presentar_F();
				break;
			case 4:
				cout<<"Ingrese un numero a Buscar"<<endl;
				cin>>x;
				lista.buscar(x);
				break;
			case 5:
				cout<<"Ingrese un numero a Borrar"<<endl;
				cin>>x;
				lista.borrar(x);
				break;
			case 6:
				cout<<"Ingrese valor a modificar "<<endl;
				cin>>x;
				cout<<"Ingrese nuevo valor "<<endl;				
				cin>>y;
				lista.modificar(x,y);
				break;
			case 7:
				cout<<"Ingrese valor a insertar "<<endl;
				cin>>x;
				cout<<"Ingrese nuevo valor "<<endl;				
				cin>>y;
				lista.insertar(x,y);
				break;
			case 0:
				break;
				
		}
		
	}while(op!=0);		
	return 0;
}
