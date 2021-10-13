#include<iostream>
using namespace std;
int factorial(int v){

if(v<0){
v=0;
} else if(v==0){
v=1;
}else{ 
	for(int i = 1; i <=v; i++){
		v= v*i;
		return v;
	}
}
}



int main(){
int v;
cout<<"Introduzca un valor"<<endl;
cin>>v;


cout<<"El factorial es:"<<factorial(v)<<endl;
cin.ignore(); 
cin.get();

}