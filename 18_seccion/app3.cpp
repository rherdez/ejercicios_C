#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int e1,e2;
	
	cout<<"Ingrese goles de equipo 1"<<endl;
	cin>>e1;
	cout<<"Ingrese goles de equipo 2"<<endl;
	cin>>e2;
	
	if(e1>e2){
		cout<<"El equipo 1 es el ganador"<<endl;
	}
	else if(e1==e2){
		
				cout<<"Empatados"<<endl;	
	}
	else{
			cout<<"El equipo 2 es el ganador"<<endl;	
	}
		

	return 0;
}
