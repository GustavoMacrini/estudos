#include <iostream>

using namespace std;

int main(){
    int vet[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite o numero da posicao " << i+1 << ": ";
        cin >> vet[i];
    }
    cout << "--------------------------------------------------- " << endl;
    cout << "Numeros que se repetem: ";

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vet[i] == vet[j])
                cout << vet[i] << " ";
        }
    }
    cout << "\n--------------------------------------------------- " << endl;

    return 0;
}