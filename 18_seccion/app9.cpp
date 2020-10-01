#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void llenar();
void presentar();
void ordenar();
	int ar[10][10];
int main(int argc, char** argv) {

	llenar();
	presentar();
//	ordenar(ar);
//	cout<<"Presentar ordenados"<<endl;
	//presentar(ar);
	return 0;
}

void llenar(){
	for(int i=0;i<10;i++){
		for(int x=0;x<10;x++){
			ar[i][x]=i+(x*10);
		}
		/*cout<<"Ingrese un numero"<<endl;
		cin>>ar[i];*/
		
	}
}

void presentar(){
	for(int i=0;i<10;i++){
			for(int x=0;x<10;x++){
				cout<<i<<"-> "<<ar[i][x]<<"|";
		}
		cout<<endl;
	}
}

void ordenar(){
/*	int temp;
	for(int x=0;x<10;x++){
		for(int y=1;y<10;y++){
			if(ar[y]>ar[y-1]){
				temp=ar[y];
				ar[y]=ar[y-1];
				ar[y-1]=temp;
			}
		}
		
	}*/		
}
