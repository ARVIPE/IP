#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
srand(time(0));
int secreto = rand() % 1001;

int num;

cout<<"Introduzca un numero para acertar el secreto"<<endl;

do{

cin>>num;

if(num > secreto){
cout<<"El numero secreto es menor"<<endl;
}else{
cout<<"El numero secreto es mayor"<<endl;
}

cout<<"secreto:"<<secreto<<endl;



}while(num != secreto);







}