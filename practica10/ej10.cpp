#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

struct Alumno{
	string dni = "";
	string apellido1 = "";
	string apellido2 = "";
	string nombre = "";
	int edad = 0;
	float nota = 0;
};

bool checkDNI(string & cad){
	int cont = 0;
	int n = cad.size();
	for(int i = 0; i < (n-1); i++){
		if(isdigit(cad[i]) == true){
			cont++;
		}
	}
	if((cont != 8) || (n != 9)){
			return false;
	}else{
		return true;
	}
}

Alumno setAlumno(){
	Alumno a;
	string dni = "";
	cout <<"Introduzca el DNI del alumno:";
	cin>>dni;
	if(checkDNI(dni)){
			a.dni = dni;
	}else{
		cout<<"ERROR: el DNI introducido no es valido"<<endl;
		exit(0);
	}
	cout<<"Introduzca el 1º Apellido del alumno:";
	cin>>a.apellido1;
	cout<<"Introduzca el 2º Apellido del alumno:";
	cin>>a.apellido2;
	cout<<"Introduzca el nombre del alumno:";
	cin>>a.nombre;
	cout<<"Introduzca la edad del alumno:";
	cin>>a.edad;
	cout<<"Introduzca la nota del alumno:";
	cin>>a.nota;

	return a;



}

bool addAlumno(Alumno alumnos[], int n, Alumno a){
	for(int i = 0; i< n; i++){
		if(alumnos[i].dni == ""){
			alumnos[i] = a;
			return true;
		}
	}
	return false;
}

void delAlumno(Alumno alumnos[], int index){
	alumnos[index].dni="";
}

int getAlumno(Alumno alumnos[], int n, string dni){
	for(int i = 0; i < n; i++){
		if(alumnos[i].dni == dni){
				return i;
		}
	}
	
	return -1;
	
}

void printAlumno(Alumno &a){
	cout<<a.dni<<endl;
	cout<<a.apellido1<<endl;
	cout<<a.apellido2<<endl;
	cout<<a.nombre<<endl;
	cout<<a.edad<<endl;
	cout<<a.nota<<endl;
}

void printAll(Alumno alumnos[], int n){
	for(int i = 0; i < n; i++){
		if(alumnos[i].dni != ""){
			cout<<"Alumno"<<i<<endl;
			printAlumno(alumnos[i]);
			cout<<"-----------"<<endl;
		}
	}
}

int readFIle(string path, Alumno alumnos[]){
		ifstream file;
		file.open(path);
		if(!file.is_open()){
				return -1;
		}
		int cont = 0;
		while (!file.eof()){
			Alumno aux;
			file >> aux.dni;
			file >> aux.apellido1;
			file >> aux.apellido2;
			file >> aux.nombre;
			file >> aux.edad;
			file >> aux.nota;
			alumnos[cont] = aux;
			cont++;
		}
		file.close();
		return cont;
}


bool saveFIle(string path, Alumno alumnos[], int size){
		ofstream file;
		file.open(path);
		if(!file.is_open()){
			return false;
		}
		for(int i=0; i<size; i++){
			if(alumnos[i].dni != ""){
					file << alumnos[i].dni << endl;
					file << alumnos[i].apellido1 << endl;
					file << alumnos[i].apellido2 << endl;
					file << alumnos[i].nombre << endl;
					file << alumnos[i].edad << endl;
					file << alumnos[i].nota << endl;
			}
		}
		file.close();
		return true;
}

int main(int argc, char** argv){
	if(argc != 2){
			cout<<"ERROR: Los argumentos recibidos no coinciden con los solicitados. "<<endl;
			exit(0);
		}
		Alumno alumnos[10];
		int opcion_menu;
		string path = argv[1];
			if(readFIle(path, alumnos) == -1){
			cout<<"Warning: Fichero inlocalizable, el programa empezara sin el"<<endl;
		}
		do{
			cout<<"1. Añadir alumno"<<endl;
			cout<<"2. Imprimir datos de alumno"<<endl;
			cout<<"3. Imprimir datos de todos los alumnos"<<endl;
			cout<<"4. Modificar alumno"<<endl;
			cout<<"5. Eliminar a un alumno"<<endl;
			cout<<"6. Guardar en FIchero"<<endl;
			cout<<"7. Salir"<<endl;
			cout<<"Seleccione una opcion:";
			cin>>opcion_menu;
			switch(opcion_menu){
				case 1:{
					Alumno a = setAlumno();
					if(!addAlumno(alumnos, 10, a)){
							cout<<"No quedan mas espacios en el vector"<<endl;
					}else{
						cout<<"Alumno añadido correctamente"<<endl;
					}
					cout<<""<<endl;
					break;
				}
				case 2:{
					cout<<"Introduzca el DNI del alumno que quiere mostrar:";
					string dni;
					cin>>dni;
					int i = getAlumno(alumnos,10,dni);
					if(i != -1){
						printAlumno(alumnos[i]);
					}else{
					cout<<"No se ha encontrado al alumno"<<endl;
					}
					cout<<""<<endl;
					break;

				}
				case 3:{
					printAll(alumnos,10);
					cout<<""<<endl;
					break;
				}
				case 4:{
					cout<<"Introduzca el DNI del alumno que quiere modificar:";
					string dni;
					cin>>dni;
					int i = getAlumno(alumnos,10,dni);
					if(i != -1){
						cout<<"Introduzca los nuevos datos del alumno:"<<endl;
						Alumno a = setAlumno();
						alumnos[i]=a;
						cout<<"Alumno actualizado correctamente"<<endl;
					}else{
						cout<<"No se ha encontrado al alumno"<<endl;
					}
					cout<<""<<endl;
					break;
			}
			case 5:{
				cout<<"Introduzca el DNI del alumno a eliminar";
				string dni;
				cin>>dni;
				int i = getAlumno(alumnos,10,dni);
				if(i != -1){
					cout<<"Alumno eliminado correctamente"<<endl;
					delAlumno(alumnos,i);
				}else{
					cout<<"No se ha encontrado al alumno"<<endl;
				}
				cout<<""<<endl;
				break;

			}
			case 6: {
				cout<<"La BBDD se guardará en el fichero seleccionado"<<endl;
				saveFIle(path, alumnos, 10);
				if(!saveFIle(path, alumnos, 10)){
						cout<<"Error: no se ha podido guardar en el fichero"<<endl;
				}else{
					cout<<"Fichero guardado correctamente"<<endl;
				}
				cout<<""<<endl;
				break;
			}			
		}
		}while(opcion_menu != 7);
}





