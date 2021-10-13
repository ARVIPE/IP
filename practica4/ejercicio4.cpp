#include<iostream>
using namespace std;
void divisores(int v){

if(v <=0){cout<<"Introduzca otro numero"<<endl;}else{
for(int i = 1; v>=i; i++){
	if(v%i==0){
		cout<<i<<endl;
	}

}
}

}
int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
divisores(n);


cin.ignore(); 
cin.get();

}