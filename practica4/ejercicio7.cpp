#include<iostream>
using namespace std;
int Ndivisores(int v){

int contador=0;
if(v <=0){cout<<"Introduzca otro numero"<<endl;}else{
for(int i = 1; v>i; i++){
	if(v%i==0){
		cout<<i<<endl;
		contador++;
	}

}
}
return contador;
}


int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
int suma = Ndivisores(n);
cout<<"El numero de divisores es: " <<suma<<endl;




cin.ignore(); 
cin.get();

}