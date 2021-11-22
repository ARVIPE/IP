#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 
bool palindromo(string cad){
	for(int i = (cad.length()-1); i >= 0; i--){
			if(cad[i] == ' '){
				cad.erase(i,1);
			}

	}
	int cadSize = cad.size();
	for(int i=0; i < cadSize; i++){
		if(cad[i] != cad[cadSize - i - 1]){
			return false;
		}
	}
	return true;
}


int main(){
    if( palindromo("asddsa")==false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("xasddsa")==true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("acaso hubo buhos aca")==false){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

