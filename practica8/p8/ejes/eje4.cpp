#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

int vocales(string cad){
	int cont = 0;
	int cadSize = cad.size();
	for(int i = 0; i < cadSize; i++){
		char c = tolower(cad[i]);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		cont++;
	}
	}
	return cont;
}

 
int main(){
    if( vocales("HOLA COMO ESTAS")!=6){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("hola como Estas")!=6){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("xbnmsmnbx  nssmn")!=0){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
