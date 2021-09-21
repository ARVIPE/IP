#include<iostream>
using namespace std;
int main(){
cout<<"Introduzca un número n"<<endl;

int num;
int contador = 0;
float resultado = 0;

cin>>num;

do{

contador++;

resultado +=contador;


}while(contador != num);


cout<<resultado<<endl;



}