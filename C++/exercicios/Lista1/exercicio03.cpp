#include <iostream>

using namespace std;

int main(){
    int f=50;
    float grau_cent;

    cout << "-------Tabela de conversao de graus-------" << endl;

    for(f = 50; f < 151; ++f){

        grau_cent = 0.555556*(f-32);
        cout << f << " Graus Farenheit = " << grau_cent << " Graus Centigrados" << endl;
    }

    cout << "------------------------------------------";
    return 0;
}