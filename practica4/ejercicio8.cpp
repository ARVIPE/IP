#include<iostream>
using namespace std;
int divisores(int v){

int contador=0;
int suma = 0;

if(v <=0){cout<<"Introduzca otro numero"<<endl;}else{
for(int i = 1; v>i; i++){
	if(v%i==0){
		suma=suma+i;
		contador++;
	}

}
}
return suma;
}

bool esperfecto(int v, int n){
int res = false;
if(v==n){
res=true;

}
return res;
}
int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
int suma = divisores(n);

bool res = esperfecto(suma, n);

if(res==true){
cout<<"El valor es perfecto"<<endl;
}else{
cout<<"El valor no es perfecto"<<endl;
}


cin.ignore(); 
cin.get();

}