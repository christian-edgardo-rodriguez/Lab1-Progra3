#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int factorial(unsigned long int x);

int main(int argc,char*argv[]){
	int expo,opc;
	double euler;
	cout<<"Ejercicio 1"<<endl;
	cout<<"Ejercicio 2"<<endl;
	cout<<"Escoja su opcion: ";
	cin>>opc;
	if(opc==1){
		cout<<"Introduzca el numero x: ";
		cin>>expo;
		for(int i=0;i<15;i++){
			euler+=(pow(expo,i))/factorial(i);
		}
		cout<<"e a la x = "<<euler<<endl;;
	}
	return 0;
    
}
int factorial(unsigned long int x){
    	if (x==0){
        	return 1;
	}
    	else{
        	return x*factorial(x-1);
	}
	return 0;
}
