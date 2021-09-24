#include<iostream>
using namespace std;
int main(){

int n, contador = 1;

cout<<"Introduzca un número"<<endl;
cin>>n;

do{

contador++;

if(contador%2 == 0){

cout<<contador;

}else{

if(contador%3 == 0){
cout<<contador;

}

}


}while(contador < n);


}