#include<iostream>
using namespace std;
int main(){
cout<<"Introduzca un número para conocer su factorial"<<endl;

int num;
int f;
int resultado = 1;

cin>>num;

f=num;

while(f>0){
	
resultado=resultado*f;
f=f-1;
	

}


cout<<"El factorial de este numero es:"<<resultado<<endl;



}