#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int ar[]={1,2,3,4,5,6,7,8,9,10};
int suma(int);

int main(int argc, char** argv) {
	cout<<"Sumatoria es:"<<suma(10);
	return 0;
}

int suma(int x){
	if(x==0){
		return ar[x];
	}
	else
	{
		return ar[x]+suma(x-1);
	}
	
}
