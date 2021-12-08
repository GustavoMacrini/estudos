/* Escreva um programa que implemente uma estrutura do tipo fila de inteiros
Use uma variável fim para indicar o fim dos elementos no vetor*/

#include <iostream>

using namespace std;

#define MAX 10

int main(){
    int fila[MAX], op=0, fim=-1;

    do{
        system("cls");

        cout << "----------- Menu -----------" << endl;
        cout << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Imprimir" << endl;
        cout << "9 - Sair" << endl;
        cout << "----------------------------" << endl;
        cout << "Opcao: ";
        cin >> op;
        cout << endl;

        switch(op){
            case 1:
                if(fim < MAX-1){
                    for(int i = fim; i >= 0; i--)
                        fila[i+1] = fila[i];
                    cout << "Novo valor: ";
                    cin >> fila[0];
                    fim++;
                }
                else
                    cout << "Fila Cheia!!!" << endl;
                break;
            case 2:
                cout << "Removendo inicio da fila..." << endl;
                fim--;
                break;
            case 3:
                system("cls");
                cout << "--------- Fila -----------" << endl;
                if(fim >= 0){
                    for(int i=0; i <= fim; i++)
                        cout << fila[i] << " ";
                }
                else
                    cout << "\t*Fila Vazia*";
                cout << "\n--------------------------" << endl;
                break;
            case 9:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao Invalida!!!" << endl;
        }

        system("pause");
    }while(op != 9);

    return 0;
}

