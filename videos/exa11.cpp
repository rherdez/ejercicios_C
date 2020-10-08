#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void agregar();
void presentar();
void modificar();
void ordenar();
void mayores();
void menores();
int ar[]={1,2,3,4,5,6,7,8,9,0};
int contador=0;

int main(int argc, char** argv) {
	int op;
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Modificar"<<endl;
		cout<<"3) 5 mayores"<<endl;
		cout<<"4) 5 menores"<<endl;
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
				mayores();
				break;
			case 4:
				menores();
				break;
			case 5:
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
void agregar()
{
	if(contador<=9){
		cout<<"Ingrese Valor"<<endl;
		cin>>ar[contador];
		contador++;
	}
	else{
		cout<<"Arreglo Lleno"<<endl;
	}
}

void presentar(){

	for(int i=0;i<contador;i++){
		cout<<i<<"->"<<ar[i]<<endl;
	}
}

void modificar(){
	int x;
	cout<<"Ingrese la pos a modificar"<<endl;
	cin>>x;
	x--;
	cout<<"Ingrese el nuevo valor"<<endl;
	cin>>ar[x];	
}
void ordenar(){
	int temp;
	for(int x=0;x<contador;x++){
		for(int y=1;y<contador;y++){
			if(ar[y-1]<ar[y]){
				temp=ar[y-1];
				ar[y-1]=ar[y];
				ar[y]=temp;
			}
		}
	}
}
void mayores(){
	ordenar();
	for(int i=0;i<5 && i<contador;i++){
		cout<<i<<"->"<<ar[i]<<endl;
	}
}
void menores(){
	ordenar();
	for(int i=0;i<5 && i<contador;i++){
		cout<<i<<"->"<<ar[contador-i-1]<<endl;
	}
}

