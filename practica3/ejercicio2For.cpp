#include<iostream>
using namespace std;

int main(){

int b= 0;
cout<<"Introduzca numeros o cero para cerrar"<<endl;

for(int a; a>0;){
cin>>a;


if(a >= b){
b = a;
}

}
cout<<"El numero mayor es: "<<b<<endl;







}