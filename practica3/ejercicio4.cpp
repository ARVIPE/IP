#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Introduzca un número"<<endl;
cin>>num;
int contador = num;
cout<<"Los divisores son: "<<endl;

while(contador > 0){

int division = num % contador;

if(division == 0){

cout<<contador<<endl;

}

contador--;

}






}