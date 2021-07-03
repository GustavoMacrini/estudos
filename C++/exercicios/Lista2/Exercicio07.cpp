#include <iostream>

#define N 10
using namespace std;

int main(){
    int vet[N], mult, contador =0;

    for(int i = 0; i< N; i++ ){
        cout << "Digite um valor da posicao " << i+1 << ": " << endl;
        cin >> vet[i];
    }

    cout << "Informe um multiplo: ";
    cin >> mult;

    for (int i = 0; i<= N; i++){

        if(i==0)
            cout << "Multiplos de " << mult << ": ";

        if(vet[i] % mult == 0){
            contador++;
            cout << "\t" << vet[i];
        }
    }
    cout << "\n" << "Quantidade de multiplos de " << mult << ": " << contador << endl;

    return 0;
}