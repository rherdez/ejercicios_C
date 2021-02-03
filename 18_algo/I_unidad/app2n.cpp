#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int x) {
	
	for(int i=0;i<4;i++){
		for(int x=0;x<4-i;x++){
			cout<<"  ";
		}
		for(int x=0;x<i;x++){
			cout<<"* ";
		}
	
		cout<<""<<endl;		
	}

	return 0;
}
