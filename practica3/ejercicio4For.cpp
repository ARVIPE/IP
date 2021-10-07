#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Introduzca un número"<<endl;
cin>>num;
cout<<"Los divisores son: "<<endl;

for(int i = 1; i<=num; i++){

int division = num % i;

if(division == 0){

cout<<i<<endl;

}


}






}