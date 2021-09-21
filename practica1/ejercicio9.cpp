#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
int a;
cout<<"Introduzca un número del 1 al 12"<<endl;
cin>>a;
if(a < 1 or a > 12){
cout<<"El número no está dentro del rango"<<endl;
}else{
if(a == 1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==11 || a==12){
	cout<<"Este mes tiene 31 días"<<endl;
}else{
	if(a != 2){
		cout<<"Este mes tiene 30 días"<<endl;
	}else{
		cout<<"Este mes tiene 28 días"<<endl;
	}
}

}

}