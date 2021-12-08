//Implementar uma pilha e inverter ela por meio de uma fila
#include <iostream>

using namespace std;

#define MAX 10

int main(){
    int pilha[MAX], fila[MAX], topo=-1, fim=-1, op;

    do{
        system("cls");
        cout << "---------- MENU ----------" << endl;
        cout << "1 - Push" << endl;
        cout << "2 - Pop" << endl;
        cout << "3 - Inverte pilha" << endl;
        cout << "4 - Mostra pilha" << endl;
        cout << "9 - Sair" << endl;
        cout << "--------------------------" << endl;
        cout << "Opcao: ";
        cin >> op;
        
        switch(op){
            case 1:
                system("cls");
                cout << "---------- PUSH ----------" << endl;
                //condicional para saber se a a pilha não está cheia
                if(topo < MAX-1){
                    cout << "Novo valor: ";
                    cin >> pilha[++topo];
                }
                else{
                    cout << "Pilha Cheia!!!" << endl;
                }
                cout << "--------------------------" << endl;
                break;
            case 2:
                system("cls");
                cout << "---------- Pop ----------" << endl;
                //condicional para saber se a a pilha não está vazia
                if(topo >= 0){
                    cout << "Removendo topo da pilha..." << endl;
                    topo--;
                }
                else
                    cout << "Pilha Vazia!!!" << endl;
                cout << "-------------------------" << endl;
                break;
            case 3:
                system("cls");
                cout << "-------- Inverter --------" << endl;
                //condicional para saber se a a pilha não está vazia
                if(topo > 0){
                    //Tira o topo da pilha e adiciona na fila
                    for(int i=topo; i > -1; i--){
                        fila[++fim] = pilha[i];
                        topo--;
                    }

                   //Tirar do inicio da fila e adicionar na pilha
                   for(int i = 0; i <= fim; i++){
                       pilha[++topo] = fila[0];

                       //Rearranjo da fila
                       for(int i = 0; i < fim; i++){
                           fila[i] = fila[i+1];
                       }
                   }
                   //Voltar o fim da fila para a config inicial
                   fim=-1;
                   cout << "Invertido!" << endl;
                }
                else
                    if(topo == -1)
                        cout << "Pilha Vazia \nimpossivel inverter!!!" << endl;
                    if(topo == 0)
                        cout << "Apenas 1 valor \nimpossivel inverter!!!" << endl;
                cout << "--------------------------" << endl;
                break;
            case 4:
                system("cls");
                cout << "--------- Mostrar ---------" << endl;
                //condicional para saber se a a pilha não está vazia
                if(topo >= 0){
                    //loop para mostrar a pilha
                    for (int i=topo; i > -1; i-- ){
                        cout << "\t" << pilha[i] << endl;
                    }
                }
                else
                    cout << "Pilha Vazia!!!" << endl;
                cout << "---------------------------" << endl;
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