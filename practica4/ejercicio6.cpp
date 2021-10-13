#include<iostream>
using namespace std;

int factorial(int v){

int fact=1;

if(v<0){
fact = 0;
}else{

for(int i = v; i != 0; i--){
		fact= fact*i;
	}

}


return fact;

}



int combinaciones(int a, int b){
int combinacion;
combinacion=factorial(a)/factorial(b)*factorial(a-b);

return combinacion;


}


int main(){
int n,k;
cout<<"Introduzca un valor n y otro k"<<endl;
cin>>n;
cin>>k;
int valor=combinaciones(n,k);
cout<<"La combinación es:"<<valor<<endl;

	cin.ignore(); 
	cin.get();

}