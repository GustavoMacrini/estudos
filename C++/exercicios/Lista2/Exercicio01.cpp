#include <iostream>

using namespace std;

int main(){
    int num[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite o numero da posicao " << i+1 << ": ";
        cin >> num[i];
    }

    cout << "----------------------------------- Retorno -----------------------------------" << endl;
    for(int i = 0; i<10; i++){
        cout << num[i] << "\t";
    }

    return 0;
}