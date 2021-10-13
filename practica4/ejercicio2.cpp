#include<iostream>
using namespace std;
bool esprimo(int v){
bool res;
if(v%2==0 || v%3==0){res=true;}
else{res=false;}
return res;
}
int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
bool ep=esprimo(n);
if(ep==true){
cout<<"El valor no es primo"<<endl;
}
else{
cout<<"El valor es primo"<<endl;
}
	cin.ignore(); 
	cin.get();

}