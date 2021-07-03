#include <iostream>

#define N 20

using namespace std;

int main(){
    int vet[N];

    //receber numeros
    for(int i = 0; i < N; i++){
        cout << "Digite o numero da posicao " << i+1 << ": ";
        cin >> vet[i];
    }

    //apagar repetidos
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(vet[i] == vet[j]){
                vet[i] = NULL;
                vet[j] = NULL;
            }
        }
    }

    //replicar lista de numeros
    cout << "-------------------------------------------------------------" << endl;
    cout << "Nao repetidos: ";

    for(int i = 0; i < N; i++){
        if(vet[i] != NULL)
            cout << vet[i] << " ";
    }

    cout << "\n-------------------------------------------------------------";

    return 0;
}