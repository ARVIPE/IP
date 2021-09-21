#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
float a,b,c;
cout<<"Introduzca 3 números"<<endl;
cin>>a;
cout<<"Introduzca el segundo"<<endl;
cin>>b;
cout<<"Introduzca el tercero"<<endl;
cin>>c;
if(a > b > c){
cout<<"El número mayor es: "<<a<<endl;
}
if(b > a > c){
cout<<"El número mayor es: "<<b<<endl;
}
if(c > a > b){
cout<<"El número mayor es: "<<c<<endl;
}

}