#include<ctime>//para time
#include<cstdlib>//para srand y rand
#include <iostream> //para cout
using namespace std;
int main(){
int secs = time(0);
srand(secs);
for(int i=0; i<10;i++){
int n=rand()%50;//genera un numero aleatorio entre 0 y  49
cout<<n<<endl;

}


cin.get();
cin.ignore();



}