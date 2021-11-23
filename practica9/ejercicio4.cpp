#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;


bool isNumber(string str){
	bool aux = true;
	int size = str.size();
	for(int i = 0; (i < size) && aux; i++){
		if(!isdigit(str[i])){
			aux = false;
		}
	}
	return aux;
}

int main(int argc, char **argv){
	if(argc ==1){
		cout<<"Error: debe escribir al menos un numero"<<endl;
		exit(0);
	}
	float n = stof(argv[1]);
	for(int i = 2; i < argc; i++){
		string ope = argv[i];
		if(ope == "-sum"){
			if(((i+1) >= argc) || (!isNumber(argv[i+1]))){
				cout<<"Error: El parametro que acompaña a -sum no es un numero"<<endl;
				exit(0);
			}else{
				float aux = stof(argv[i+1]);
				n += aux;
				i++;
			}
		} else if (ope == "-mul"){
			if(((i+1) >= argc) || (!isNumber(argv[i+1]))){
				cout<<"Error:  El parametro que acompaña a -mul no es un numero"<<endl;
				exit(0);
			}else{
				float aux = stof(argv[i+1]);
				n*= aux;
				i++;
			}


		}else if(ope == "-div"){
			if(((i+1) >= argc) || (!isNumber(argv[i+1]))){
				cout<<"Error: El parametro que acompaña a -div no es un numero"<<endl;
				exit(0);
			}else{
				float aux = stof(argv[i+1]);
				n /=aux;
				i++;
			}	

		}else if (ope == "-sqrt"){	
			n = sqrt(n);
		}

	}
	cout<<"El resultado es: " <<n<<endl;




}


