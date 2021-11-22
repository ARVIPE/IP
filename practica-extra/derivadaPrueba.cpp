#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

double derivada( double(*func)(double), double x){

	double h=0.0000001;
	double resta= x-h, suma=x+h;
	double funcion= (func(suma)-func(resta))/(2*h);
	return funcion;

}

int main(){

		cout<<derivada(sin, 3.14159265359);

    system("pause");
}

