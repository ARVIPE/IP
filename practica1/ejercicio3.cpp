#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
float num;
cout<<"Introduzca un número"<<endl;
cin>>num;
if(num>=0){
	float raiz=sqrt(num);
	cout<<raiz<<endl;
}else{
	cout<<"El número es negativo"<<endl;
}
}