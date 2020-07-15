#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int a,b,r;
int main(int argc, char** argv) {
	a=3918848;
	b=1653264;
	
	while(b!=0){
	cout<<"gcd  "<<a<<","<<b<<endl;
	r=a%b;
	a=b;
	b=r;
	}
	
	return 0;
}
