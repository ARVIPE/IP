#include<iostream>
using namespace std;
int main(){

int num;
int contador = 0;
cout<<"Introduzca un número"<<endl;
cin>>num;
cout<<"Los divisores son: "<<endl;

do{

contador++;

int division = num % contador;

if(division == 0){

cout<<contador<<endl;

}

}while(contador <= num);






}