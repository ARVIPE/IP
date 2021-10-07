#include<iostream>
using namespace std;

int main(){

float num, media = 0, suma = 0;
float contador = 1;

cout<<"Introduzca numeros"<<endl;

do{

cin>>num;

suma += num;

media = suma/contador;

cout<<"La media es: "<<media<<endl;

contador++;




}while(media<30);

}