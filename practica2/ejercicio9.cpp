#include<iostream>
using namespace std;
int main(){

int suma = 0, num = 0;
cout<<"Introduzca un numero";
cin>>num;

for(int i = 1; i <= num; i++){

if(i%2==0 or i%3==0){
cout<<i<<", ";
suma = suma+i;


}



}

cout<<"La suma de todos los numeros es: "<<suma<<endl;



}