#include <iostream>

using namespace std;

int main(){
    int mat[3][3], vet[3] = {0};

    //Obter valores
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Numero da posicao " << i << " | " << j << ": ";
            cin >> mat[i][j];
        }
    }


    //Mostrar Matriz
    cout << "\nMatriz Gerada: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }

    //Soma e Mostrar
    cout << "\nVetor Soma: ";
   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vet[i] += mat[j][i]; 
        }
        cout << vet[i] << " ";
    }
    

    return 0;
}