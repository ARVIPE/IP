#include<iostream>
using namespace std;
int main(){
cout<<"Introduzca números para calcular la media, si uno de ellos es 0 el programa finaliza"<<endl;

float num;
int contador = 0;
float resultado = 0;
float media = 0;

while(num>0){

cin>>num;

if(num > 0){
contador++;
resultado +=num;
}



}
media = resultado/(contador);

cout<<media<<endl;

}