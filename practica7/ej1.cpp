#include <iostream>
using namespace std;

struct Alumno{
int dni=0;
int edad=0;
float nota=0;
void imprime(){
cout<<dni<<edad<<nota<<endl;

}


};


int main(){
Alumno alumnos[10];
int na=0;
int opcion_menu=0;
do{
	cout<<"Seleccione una opcion"<<endl;
	cout<<"1. Anadir alumno"<<endl;
	cout<<"2. Modificar alumno"<<endl;
	
	cout<<"6. Salir"<<endl;

	cin>>opcion_menu;
	switch(opcion_menu){
	case 1:{ 
		

						int dni;
						int contador=0;
						cin>>dni;
						do{

							if(dni == alumnos[contador].dni){
								cout<<"El dni ya existe"<<endl;
								break;
							}
							contador++;
						}while(contador < na);
				
						
						if(contador >= na){
							alumnos[na].dni=dni;
							cin>>alumnos[na].edad;
							cin>>alumnos[na].nota;
							na++;


						}
		
						
						

					
					

				
			
			
			}break;
		case 3:{ 
				for(int i=0; i<na; i++){
					alumnos[i].imprime();
				}
			
			
			}break;
		}
		
		
		
		}while(opcion_menu!=6);

}



