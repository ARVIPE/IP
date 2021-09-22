#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Introduzca un número"<<endl;
cin>>num;

for(int i = 2; i <= num/2; i++){

if(num%i == 0){
cout<<"Este número no es primo"<<endl;
break;
}	

if(i == (num/2)){
cout<<"Este número es primo"<<endl;
}

}





}