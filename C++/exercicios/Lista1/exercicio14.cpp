#include <iostream>

using namespace std;


int main(){
    int i;
    float km_a, km_b, espaco, tempo;

    do{
    cout << "Digite os dois marcos quilometricos: " << endl;
    cin >> km_a >> km_b;

    if(km_b - km_a != 0){

        espaco = km_b - km_a;

        cout << "---Tempo levado para percorrer as distancias--- " << endl;

        for (i = 2; i < 8; ++i){
            tempo = espaco/i;

            if (tempo > 2)
                cout <<  i*10 << " km/h: " << tempo << "h " << endl; 
            
        }
        cout << "------------------------------------------------" << endl;

    }

    }while(km_b - km_a != 0);

    cout << "-------------Finalizando Calculos---------------";

    return 0;
}