#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Introduzca un número"<<endl;
cin>>num;
int contador = num;
cout<<"Los divisores son: "<<endl;

do{

int division = num % contador;

if(division == 0){

cout<<contador<<endl;

}

contador--;

}while(contador > 0);






}