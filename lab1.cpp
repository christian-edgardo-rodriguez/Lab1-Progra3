#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int factorial(unsigned long int x);
void validaTrap(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4);
void validaPunto(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4);
double distancia(int x1, int y1, int x2, int y2);

int main(int argc,char*argv[]){
	int expo,opc;
	double euler,x1,x2,x3,x4,y1,y2,y3,y4;
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
	}else if(opc==2){
		cout<<"Introduzca el x del punto 1: ";
		cin>>x1;
		cout<<"Introduzca el y del punto 1: ";
		cin>>y1;
		cout<<"Introduzca el x del punto 2: ";
		cin>>x2;
		cout<<"Introduzca el y del punto 2: ";
		cin>>y2;
		cout<<"Introduzca el x del punto 3: ";
		cin>>x3;
		cout<<"Introduzca el y del punto 3: ";
		cin>>y3;
		cout<<"Introduzca el x del punto 4: ";
		cin>>x4;
		cout<<"Introduzca el y del punto 4: ";
		cin>>y4;
		validaTrap(x1,x2,x3,x4,y1,y2,y3,y4);
		validaPunto(x1,x2,x3,x4,y1,y2,y3,y4);
		cout<<endl;
		cout<<"Los lados miden: "<<endl;
		cout<<"Lado 1: "<<distancia(x1,y1,x2,y2)<<endl;
		cout<<"Lado 2: "<<distancia(x2,y2,x4,y4)<<endl;
		cout<<"Lado 3: "<<distancia(x4,y4,x3,y3)<<endl;
		cout<<"Lado 4: "<<distancia(x3,y3,x1,y1)<<endl;
		cout<<endl;
		cout<<"Los lados del triangulo 1 miden: "<<endl;
		cout<<"Lado 1: "<<distancia(x1,y1,x3,y3)<<endl;
		cout<<"Lado 2: "<<distancia(x3,y3,x4,y4)<<endl;
		cout<<"Lado 3: "<<distancia(x4,y4,x1,y1)<<endl;
		cout<<endl;
		cout<<"Los lados del triangulo 2 miden: "<<endl;
		cout<<"Lado 1: "<<distancia(x1,y1,x2,y2)<<endl;
		cout<<"Lado 2: "<<distancia(x2,y2,x4,y4)<<endl;
		cout<<"Lado 3: "<<distancia(x4,y4,x1,y1)<<endl;
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
void validaTrap(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4){
	if((x1==x2&&x2==x3)||(x1==x2&&x2==x4)||(x1==x3&&x3==x4)||(x2==x3&&x3==x4)||(y1==y2&&y2==y3)||(y1==y2&&y2==y4)||(y1==y3&&y3==y4)||(y2==y3&&y3==y4)){
			cout<<"Los puntos no forman un trapezoide. "<<endl;
		}
}
void validaPunto(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4){
	if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x1==x4&&y1==y4)||(x2==x3&&y2==y3)||(x2==x4&&y2==y4)||(x3==x4&&y3==y4)){
			cout<<"Hay puntos iguales. "<<endl;
		}
}
double distancia(int x1, int y1, int x2, int y2){
	double distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return distancia;
}
