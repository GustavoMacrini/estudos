#include <iostream>

#define N 5

using namespace std;

int main(){
    int vet[N];

    for(int i = 0; i < N; i++){
        cout << "Digite um valor: " << endl;
        cin >> vet[i];
    }


    cout << endl;
    for(int i = N-1; i >= 0; i--)
        cout << "\t" << vet[i];
    cout << endl;

    return 0;
}