#include <iostream>
#include <ctime> 
 
unsigned t0, t1,t20,t21;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

		double x;
		cout<<"Ingrese el limite Superior"<<endl;
		cin>>x;
		t0=clock();
			cout<<"La Sumatoria es: "<<(x/2)*(x+1)<<endl;
		t1 = clock();

		t20=clock();
			double sumat=0, numero;
	 		numero=x;
	 		for(int i=1;i<=numero;i++){
	 			sumat=i+sumat;
	 		}
	 		cout<<sumat<<endl;		
 		t21=clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	double time2 = (double(t21-t20)/CLOCKS_PER_SEC);
cout << "Execution Time 1: " << time << endl;
cout << "Execution Time 2: " << time2 << endl;
	return 0;
}
