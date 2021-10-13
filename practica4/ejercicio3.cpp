#include<iostream>
using namespace std;
int factorial(int v){

int fact=1;

if(v<0){
fact = 0;
}else{

for(int i = v; i != 0; i--){
		fact= fact*i;
	}

}


return fact;

}



int main(){
int v;
cout<<"Introduzca un valor"<<endl;
cin>>v;


cout<<"El factorial es:"<<factorial(v)<<endl;
cin.ignore(); 
cin.get();

}