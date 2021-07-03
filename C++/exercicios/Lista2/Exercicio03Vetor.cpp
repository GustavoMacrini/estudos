#include<iostream>

using namespace std;

int main(){
    int vet[10], qtd_pares=0;

    for(int i = 0; i < 10; i++){
        cout << "Digite o valor da posicao " << i+1 << ": ";
        cin >> vet[i];

        if(vet[i]%2 == 0)
            qtd_pares++;
        
    }

    cout << "Quantidade de numeros pares: " << qtd_pares << endl;

    return 0;
}