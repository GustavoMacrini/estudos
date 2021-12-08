//Implementação de uma lista
#include <iostream>

using namespace std;

#define MAX 10

int main(){
    int lista[MAX], op=0, fim=-1, posicao;

    do{
        system("cls");
        cout << "---------- MENU ----------" << endl;
        cout << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Imprimir" << endl;
        cout << "9 - Sair" << endl;
        cout << "--------------------------" << endl;
        cout << "opcao: ";
        cin >> op;
        cout << endl;

        switch(op){
            case 1:
                system("cls");
                cout << "---------- Inserir ----------" << endl;
                if(fim < MAX-1){
                    cout << "Posicao a inserir [0 a " << fim+1 << "]: ";
                    cin >> posicao;

                    //verificar se a posicao escolhida é valida (esta entre o intervalo proposto)
                    if(posicao <= fim+1){

                        //caso a posicao escolhida ja tenha um valor, ele é empurrado para a direita
                        if(posicao <= fim){
                            for(int i = fim; i >= posicao; i--)
                                lista[i+1] = lista[i];
                        }

                        cout << "Valor a inserir: ";
                        cin >> lista[posicao];
                        fim++;
                    }
                    else
                        cout << "Posicao Invalida!!!" << endl;
                }
                else
                    cout << "Lista cheia!!!" << endl;
                cout << "-----------------------------" << endl;
                break;
            case 2:
                    system("cls");
                    cout << "---------- Retirada ----------" << endl;

                    //verificar se existem valores na fila
                    if(fim >= 0){
                        cout << "Posicao a retirar [0 a " << fim << "]: ";
                        cin >> posicao;

                        //verificar se a posicao escolhida é valida
                        if(posicao <= fim){
                            cout << "Valor retirado: " << lista[posicao] << endl;
                            for(int i = posicao; i < fim; i++)
                                lista[i] = lista[i+1];
                            fim--;
                        }
                        else
                            cout << "Posicao Invalida!!!" << endl;
                    }
                    else
                        cout << "\tLista Vazia!!!" << endl;                    
                    cout << "------------------------------" << endl;
                break;
            case 3:
                system("cls");
                cout << "------------ Lista ------------" << endl;
                if(fim >= 0){
                    for(int i = 0; i <= fim; i++)
                        cout << lista[i] << " ";
                }
                else
                    cout << "\tLista Vazia!!!";
                cout << "\n-------------------------------" << endl;
                break;
            case 9:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!!!" << endl;
        }
        system("pause");
    }while(op != 9);

    return 0;
}