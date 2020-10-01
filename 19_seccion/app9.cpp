#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int ar[10][10];
void llenar();
void presentar();
void ordenamiento();
int main(int argc, char** argv) {
	llenar();
	presentar();
/*	cout<<"Ordenando"<<endl;
	 ordenamiento();
	 presentar();*/
	return 0;
}

void llenar(){
	for(int i=0;i<10;i++){
			for(int x=0;x<10;x++){
		//cout<<"Ingrese un numero:"<<endl;
		//cin>>ar[i];
		ar[i][x]=i+(x*10);
		}
	}
}

void presentar(){
	for(int i=0;i<10;i++){
			for(int x=0;x<10;x++){
		cout<<i<<"->"<<ar[i][x]<<"|";
		}	
		cout<<endl;
	}
}
/*
void ordenamiento(){
	int temp;
	for(int x=0;x<10;x++){
		for(int y=1;y<10;y++){
			if(ar[y]>ar[y-1]){
				temp=ar[y];
				ar[y]=ar[y-1];
				ar[y-1]=temp;
			}
		}
	}
}*/
