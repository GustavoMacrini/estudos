/*
Escreva um  programa que carregue uma matriz de ordem 4x4 e retorne:
a) A somatória dos elementos da diagonal secundária.
b) A quantidade de números pares da diagonal secudária.
c) a Somatória dos números ímpares da diagonal principal.
d) A diferença da somatória da diagonal principal pela somatória da diagonal secundária.

Utilize menu para o usuário escolher novas opções quando desejar.
Ex:
MENU
1 - Carga da matriz
2 - Mostra matriz
3 - Somatória dos elementos da diagonal secundária
etc...
9 - Sair
*/
#include <iostream>

using namespace std;

int main(){
    int matriz[4][4]={0};
    int soma_princ=0, soma_impar_princ=0;
    int soma_sec=0, par_sec=0;
    int escolha;

    do{
        system("cls");
        cout << "------------------------- Menu -------------------------" << endl;
        cout << "1 - Carga da matriz " << endl;
        cout << "2 - Mostrar matriz " << endl;
        cout << "3 - Somatoria Diagonal Secundaria" << endl;
        cout << "4 - Numeros de pares da diagonal secundaria" << endl;
        cout << "5 - Somatorio dos Impares da diagonal principal" << endl;
        cout << "6 - Diferenca entre diagonal principal e secundaria " << endl;
        cout << "9 - Sair" << endl;

        cout << "\nEscolha: ";
        cin >> escolha;
        cout << "---------------------------------------------------------" << endl;

        switch(escolha){
            case 1:
                    //adicionar na matriz
                    for(int i = 0; i < 4; i++){
                        for(int j = 0; j < 4; j++){
                            cout << "Posicao [" << i << "][" << j << "]: ";
                            cin >> matriz[i][j];

                            //diagonal principal
                            if(i==j){
                                //soma
                                soma_princ += matriz[i][j];

                                //somatoria impar
                                if(matriz[i][j] % 2 != 0)
                                    soma_impar_princ += matriz[i][j];
                            }

                            //diagonal secundaria
                            if(i+j==3){
                                //soma
                                soma_sec += matriz[i][j];

                                //qtd par
                                if(matriz[i][j] % 2 == 0)
                                    par_sec++;
                            }
                        }
                    }

                break;
            case 2:
                system("cls");
                cout << "------------------------ Matriz -------------------------" << endl;
                for(int i = 0; i < 4; i++){
                    cout << "\t";
                    for(int j = 0; j < 4; j++){
                        cout << "\t" << matriz[i][j];    
                    }
                    cout << endl;
                }
                cout << "---------------------------------------------------------" << endl;
                break;

            case 3:
                cout << "Somatoria Diagonal Secundaria: " << soma_sec << endl;
                break;
            case 4:
                cout << "Numeros de pares da diagonal secundaria: " << par_sec << endl;
                break;
            case 5:
                cout << "Somatorio dos Impares da diagonal principal: " << soma_impar_princ << endl;
                break;
            case 6:
                cout << "Diferenca entre diagonal principal e secundaria: " << soma_princ - soma_sec << endl;
                break;
            case 9:
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
        system("pause");
    }while(escolha != 9);

    return 0;
}
