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
	cout<<"2. Imprimir datos alumno (busqueda por dni)"<<endl;
	cout<<"3. Mostrar todos los alumnos"<<endl;
	cout<<"4. Modificar alumno (busqueda por dni)"<<endl;
	cout<<"5. Eliminar un alumno (busqueda por dni)"<<endl;
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
		
		 case 2:{ 
				
						int dni;
						int contador=0;
						cin>>dni;
						do{

							if(dni == alumnos[contador].dni){
								cout<<"El dni de este alumno es: "<<alumnos[contador].dni<<endl;
								cout<<"La edad de este alumno es: "<<alumnos[contador].edad<<endl;
								cout<<"La nota de este alumno es: "<<alumnos[contador].nota<<endl;
								break;
							}
							contador++;
						}while(contador < na);
				
						
						if(contador >= na){
							cout<<"Este alumno no existe"<<endl;
						}
						



			
			}break;
		
		case 3:{ 
				for(int i=0; i<na; i++){
					alumnos[i].imprime();
				}
			
			
			}break;
		
		case 4:{ 
			
			int dni;
						int contador=0;
						cout<<"Introduzca el dni del alumno a modificar: "<<endl;
						cin>>dni;
						do{

							if(dni == alumnos[contador].dni){
								cout<<"El dni de este alumno es: "<<alumnos[contador].dni<<endl;
								cout<<"La edad de este alumno es: "<<alumnos[contador].edad<<endl;
								cout<<"La nota de este alumno es: "<<alumnos[contador].nota<<endl;
									
								int dni, edad, nota;
								
								cout<<"Introduzca el nuevo dni: "<<endl;
								cin>>dni;
								alumnos[contador].dni=dni;

								cout<<"Introduzca la nueva edad: "<<endl;
								cin>>edad;
								alumnos[contador].edad=edad;

								cout<<"Introduzca la nueva nota: "<<endl;
								cin>>nota;
								alumnos[contador].nota=nota;
								
								
								break;
							}
							contador++;
						}while(contador < na);
				
						
						if(contador >= na){
							cout<<"Este alumno no existe"<<endl;
						}
									



		}break;
		


		case 5:{ 
					
						int dni;
						int contador=0;
						cout<<"Introduzca el dni del alumno a eliminar"<<endl;
						cin>>dni;
						do{

							if(dni == alumnos[contador].dni){
								for(int i = contador; i < na; i++){
										alumnos[i]=alumnos[i+1]; 

								}
								na--;
							}
							contador++;
						}while(contador < na);
				
						
						if(contador >= na){
							cout<<"El dni no existe o ya no existe"<<endl;


						}
		
				
			
			
			}break;
		}
		
		
		
		}while(opcion_menu!=6);

}



