#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){

if(argc != 2){
 cout<<"Introduzca valor para calcular la raiz"<<endl;
exit(0);
}else if(stof(argv[1]) < 0){
cout<<"No se puede calcular la raiz de un numero negativo"<<endl;
exit(0);
}else{
float numero=stof(argv[1]);
cout<<"El resultado es: "<<sqrt(numero)<<endl;
return 0;
}
}

