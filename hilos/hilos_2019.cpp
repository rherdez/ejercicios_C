#include <iostream>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <string>
#include <time.h>
#include <thread>

#include <chrono>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct A {
	int d;
	string nombre;
}q;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
void *hilo(void *g){
	A *c=(A *)g;

	int i=0;
	while(1){
		 pthread_mutex_lock( &mutex1 );
 
 
		cout<<"i: "<<i<<" A: "<<q.d<<" Hilo: "<<c->nombre<<endl;
		i++;
		q.d++;
		  pthread_mutex_unlock( &mutex1 );
		  std::this_thread::sleep_for(std::chrono::seconds(c->d));
	}
}
int main(int argc, char** argv) {
	pthread_t proceso1;
	pthread_t proceso2;
	A b;
	b.d=1;
	b.nombre="hola";
	pthread_create(&proceso1,NULL,hilo,&b);
	
	A c;
	c.d=1;
	c.nombre="adios";	
	pthread_create(&proceso2,NULL,hilo,&c);
	
	pthread_join(proceso1, NULL);
	pthread_join(proceso2, NULL);
	return 0;
}
