
#include <iostream>

using namespace std;

int main(){
    int mat[5][5];

    //Atribuir valores para a Matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }

    //Printar a Matriz
    for(int i = 0; i < 5; i++ ){
        for(int j = 0; j < 5; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}