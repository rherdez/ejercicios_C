#include <iostream>
#include <ctime> 
 
unsigned t0, t1,t20,t21;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	double y;	
	cout<<"Ingrese Limite superior"<<endl;
	cin>>y;
	t0=clock();
		cout<<"La sumatoria es: "<<(y/2)*(y+1)<<endl;
	t1 = clock();
	//////////////////////////
	double x, suma;
 	//cout<<"Ingrese el limite: ";
 	//cin>>x;
 	x=y;
 	t20=clock();
 	for(int i=x;i>0;i--){
 		suma=suma+i;
 	}
 	cout<<"La suma es: "<<suma<<endl;
	t21=clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	double time2 = (double(t21-t20)/CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;
	cout << "Execution Time2: " << time2 << endl;
	return 0;
}
