#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int e1,e2;
	cout<<"Ingrese goles del equipo 1"<<endl;
	cin>>e1;
	cout<<"Ingrese goles del equipo 2"<<endl;
	cin>>e2;
	
	if(e1>e2){
		cout<<"Gano el equipo 1"<<endl;
	}
	else if(e1==e2){		
		cout<<"Empatados"<<endl;
	}
	else{
		cout<<"Gano el equipo 2"<<endl;	
	}		
		
	return 0;
}
