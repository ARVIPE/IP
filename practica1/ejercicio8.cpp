#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
float a,b,c;
cout<<"Introduzca tres números"<<endl;
cin>>a;
cout<<"Introduzca el segundo número"<<endl;
cin>>b;
cout<<"Introduzca el tercer número"<<endl;
cin>>c;

if(a>b && a>c){
cout<<"El número mayor es a: "<<a<<endl;
}else{
	if(b>a && b>c){
		cout<<"El número mayor es b: "<<b<<endl;
	}else{
		if(c>a && c>b){
			cout<<"El número mayor es c: "<<c<<endl;
		}else{
			cout<<"Hay números que se repiten"<<endl;
		}		


	}

}
}