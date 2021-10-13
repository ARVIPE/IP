#include<iostream>
using namespace std;
bool espar(int v){
bool res;
if(v%2==0){res=true;}
else{res=false;}
return res;
}
int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
bool ep=espar(n);
if(ep==true){
cout<<"El valor es par"<<endl;
}
else{
cout<<"El valor no es par"<<endl;
}
	cin.ignore(); 
	cin.get();

}