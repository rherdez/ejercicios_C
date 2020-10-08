#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void agregar();
void modificar();
void presentar();
void ordenar();
void mayor();
void menor();


int ar[]={0,0,0,0,0,0,0,0,0,0};
int contador=0;
int main(int argc, char** argv) {
	int op;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Modificar "<<endl;
		cout<<"3) 5 Mayores"<<endl;
		cout<<"4) 5 Menores"<<endl;
		cout<<"5) Presentar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				agregar();
				break;
			case 2:
				modificar();
				break;
			case 3:
				mayor();
				break;
			case 4:
				menor();
				break;
			case 5:
				ordenar();
				presentar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		
	}while(op!=0);
	return 0;
}
void agregar(){
	if(contador<=10){
		cout<<"Ingrese un numero"<<endl;
		cin>>ar[contador];
		contador++;	
	}
	else{
		cout<<"Lista LLena"<<endl;
	}
	
}

void presentar(){
	for(int i=0;i<contador;i++){
		cout<<i<<"-> "<<ar[i]<<endl;
	}
}

void modificar(){
	int x;
	cout<<"Ingresar pos a modificar"<<endl;
	cin>>x;
	x--;
	cout<<"Ingrese el Nuevo Valor"<<endl;
	cin>>ar[x];
}
void ordenar(){
	int temp;
	for(int x=0;x<contador;x++){
		for(int y=1;y<contador;y++){
			if(ar[y]>ar[y-1]){
				temp=ar[y]	;
				ar[y]=ar[y-1];
				ar[y-1]=temp;
			}
		}
	}
	
}
void mayor(){
	for(int i=0;i<contador && i<5;i++){
			cout<<i<<"-> "<<ar[i]<<endl;
	}
}
void menor(){
	for(int i=0;i<contador && i<5;i++){
			cout<<i<<"-> "<<ar[contador-i-1]<<endl;
	}
}

