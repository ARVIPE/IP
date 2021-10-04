#include<iostream>
using namespace std;
int main(){
cout<<"Introduzca un número"<<endl;

int num;
int f;
int resultado = 0;

cin>>num;

f=num;

while(f>0){
	
if(f%2 != 0){
resultado=resultado+f;
cout<<f<<",";
}
f=f-1;
	

}


cout<<"La suma de los impares es: "<<resultado<<endl;



}