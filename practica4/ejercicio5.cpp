#include<iostream>
using namespace std;
bool esprimo(int v){
bool res;
int cont=1;

for(int i=1; v!=i; i++){
	if(v%i==0){
		cont++;
	}
	if(cont==2){
		res=false;
	}else{res=true;}

}


return res;
}

void primos(int n){
do{
bool ep=esprimo(n);
if(ep==false){
cout<<n<<endl;
}
n--;

}while(n>=1);


}


int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
primos(n);

	cin.ignore(); 
	cin.get();

}