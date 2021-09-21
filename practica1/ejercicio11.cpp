#include<iostream>
using namespace std;
int main(){
int a, b, aux;
cout<<"Introduzca un número"<<endl;
cin>>a;
cout<<"Introduzca otro número"<<endl;
cin>>b;
cout<<"a:= "<<a<<endl;
cout<<"b:= "<<b<<endl;
cout<<"Cambiados de orden"<<endl;
aux = a;
a = b;
b = aux;
cout<<"a:= "<<a<<endl;
cout<<"b:= "<<b<<endl;

}