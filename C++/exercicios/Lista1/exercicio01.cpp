#include <iostream>

using namespace std;

int main(){
    float idade,idade_soma, media = 0, i = 1;
    char continuar;

    do{
        cout << "Digite uma idade: ";
        cin >> idade;

        idade_soma +=idade;
        media = idade_soma /i;
       
        i++;
        idade = 0;

        cout << "Deseja adicionar mais idades? [S,N]";
        cin >> continuar;
    }while(continuar == 'S');

    cout << "Media de idades: " << media;

    return 0;
}