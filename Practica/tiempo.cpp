#include <iostream>
#include <ctime> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();

double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Execution Time: " << time << endl;
	return 0;
}
