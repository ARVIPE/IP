#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void lee(float v[], int n){

int num;

for(int i=0; i<n; i++){
cout<<"Introduce un valor para el array"<<endl;
cin>>num;
v[i]=num;

}


}

void imprime(float v[], int n){

for(int i=0; i<n; i++){
cout<<"El array es:"<<v[i]<<endl;
}


}



int main(){

cout<<"Introduzca la longitud del vector"<<endl;
int n;
cin>>n;

float v[n];

lee(v, n);
imprime(v,n);

   

cin.get();
cin.ignore();

}

