#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
if(argc <= 2){

cout<<"Se necesitan al menos dos  numeros"<<endl;
exit(0);
}

float num=0, promedio=0;
for(int i = 1; i < argc; i++){
num += stof(argv[i]);
}
promedio = (num/(argc-1));
cout<<"La media de los numeros introducidos es:"<<promedio<<endl;

}
