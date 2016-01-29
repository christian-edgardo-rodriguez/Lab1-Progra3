#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int factorial(int x);

int main(int argc,char*argv[]){
	int x;
	cout<<"Introduzca el numero x: ";
	cin>>x;
	cout << "Factorial: " << factorial(x) << endl;
	return 0;
    
}
int factorial(int x){
    	if (x==0){
        	return 1;
	}
    	else{
        	return x*factorial(x-1);
	}
	return 0;
}
