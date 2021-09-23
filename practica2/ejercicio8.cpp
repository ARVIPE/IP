#include<iostream>
using namespace std;
int main(){

double terminos,anterior,siguiente,n,suma;
anterior=0;
siguiente=1;

cout<<"Introduzca un número"<<endl;
cin>>terminos;

if(terminos==1){
cout <<anterior;
}
if(terminos==2){
cout << anterior << ", "<<siguiente;
}
if(terminos >= 3){
cout << anterior << ", " <<siguiente;
}
for(n=3; n<=terminos; n=n+1)
{
cout <<",";
suma=anterior+siguiente;
cout << suma;
anterior=siguiente;
siguiente=suma;


}

cout<<endl;
return 0;



}