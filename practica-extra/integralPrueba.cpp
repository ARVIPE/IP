#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

float f(float x){
		return x*sin(x);
}

double integral( double(*func)(double), double init, double end){
int n = 8;
float h, x[n+1], sum=0;
int j;
h = (end-init)/n;

x[0] = init;

for(int j=1; j<=n; j++){
x[j]=init+h*j;
}

for(j=1; j<=n/2; j++){
sum += f(x[2*j - 2]) + 4 *f(x[2*j - 1]) + f(x[2*j]);
}

return sum*h/3;

}


int main(){

		cout<<integral(sin,0,2)<<endl;
    system("pause");
}

