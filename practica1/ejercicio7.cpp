#include<iostream>
#include<cmath>//incluye la libreria matematica
using namespace std;
int main(){
float prac,par,exam,media;
cout<<"Introduzca la nota de prácticas"<<endl;
cin>>prac;
cout<<"Introduzca la nota de un parcial"<<endl;
cin>>par;
cout<<"Introduzca la nota del examen final"<<endl;
cin>>exam;
media = prac*0.25   + par *0.25 + exam*0.5;
cout<<"La media del alumno es: "<<media<<endl;

}