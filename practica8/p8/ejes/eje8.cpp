#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 
int find(string a, string b){
	int x = 0;
	int aux;
	for(int i=0; (unsigned)i <(a.size()); i++){
		if(a[i] == b[x]){
			if(x == 0){
				aux = i;
			}
			x++;
			if((unsigned)x== b.size()){
				return aux;
			}
		}else{
				x = 0;
		}
	}
	return -1;
}

int main(){
    if( find("12345678","123")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( find("12345678","hola")!=-1){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez","Perez")!=5){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez Perez","Perez")!=5){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


