#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

bool compruebadni(string dni){
	if(dni.size() != 9){
		return false;
	}
	for(int i = 0; i < 8; i++){
		if(!isdigit(dni[i])){
			return false;
		}
	}
	dni[8] = toupper(dni[8]);
	int n = stoi(dni);
	char letters[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	char letter = letters[n%23];
	if(dni[8] != letter){
		return false;
	}
	return true;

}

 

int main(){
    if( compruebadni("12345678")!=false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678Z")!=true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678z")!=true){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678X")!=false){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321X")!=true){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321a")!=false){
        cout<<"Error 6"<<endl;
        return EXIT_FAILURE;
    }


    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


