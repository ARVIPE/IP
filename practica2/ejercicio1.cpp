#include<iostream>
using namespace std;
int main(){
cout<<"Introduzca números para calcular la media, si uno de ellos es 0 el programa finaliza"<<endl;

float num;
int contador = 0;
float resultado = 0;
float media = 0;

do{

cin>>num;

resultado +=num;

contador++;


media = resultado/(contador-1);


}while(num > 0);

cout<<media<<endl;

}