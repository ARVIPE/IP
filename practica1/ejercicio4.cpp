#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
	int num;
	cout<<"Introduzca un número del 1 al 7"<<endl;
	cin>>num;
	if	(num < 1 or num > 7){
		cout<<"Número fuera del rango"<<endl;
	}else{
		if(num >= 1 && num <=5){
		cout<<"Corresponde a un dia laborable"<<endl;
		}else{
			cout<<"Corresponde al fin de semana"<<endl;
		}

	}
}