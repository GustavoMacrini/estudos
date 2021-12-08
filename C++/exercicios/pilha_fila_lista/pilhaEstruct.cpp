//gerenciar pilhas por meio de uma struct

#include <iostream>

#define MAX 10 // maximo de dados na pilha
#define MAXPilha 5 // maximo de pilhas

using namespace std;

typedef struct{
    int dados[MAX];
    int topo=-1;
} TPilha[MAXPilha];

TPilha pl;

int Menu();
void AddPilha(int pilha);
void RemovePilha(int pilha);
void ImprimePilha(int pilha);

int main(){
   int op = 0;
   int qualPilha = 0;
    
    do{
        system("cls");
        cout << "---------- Gerenciamento ----------" << endl;
        cout << "Qual pilha gerenciar?[0 - " << MAXPilha << "]: ";
        cin >> qualPilha;

        if(qualPilha <= MAXPilha){
            op = Menu();

            switch(op){
                case 1:
                    AddPilha(qualPilha);
                    break;
                case 2:
                    RemovePilha(qualPilha);
                    break;
                case 3:
                    ImprimePilha(qualPilha);
                    break;
                case 9:
                    cout << "Saindo..." << endl;
                    break;
                default:
                    cout << "Opcao Invalida!!!" << endl;
            }
        }
        else{
            cout << "\nPilha invalida!!!" << endl;
            cout << "-----------------------------------" << endl;
        }
        system("pause");
        
    }while (op != 9);

    return 0;
}

int Menu(){
    int op;
    cout << "\n------------- Menu -------------" << endl;
    cout << "1 - Inserir valor " << endl;
    cout << "2 - Retirar valor " << endl;
    cout << "3 - Imprimir pilha " << endl;
    cout << "9 - Sair" << endl;
    cout << "Escolha: ";
    cin >> op;
    cout << "--------------------------------" << endl;

    return op;
}

void AddPilha(int pilha){

    if(pl[pilha].topo < MAX-1){
        cout << "Digite o valor: ";
        pl[pilha].topo++;
        cin >> pl[pilha].dados[pl[pilha].topo];
    }
    else{
        cout << "Pilha" << pilha << " esta cheia!!!" << endl;
        system("pause");
    }    
}

void RemovePilha(int pilha){
    system("cls");
    cout << "---------- Retirar ----------" << endl;
    if(pl[pilha].topo > -1){
        pl[pilha].topo--;
        cout << "Retirado com sucesso" << endl;
    }
    else
        cout << "\tPilha Vazia" << endl;
    cout << "-----------------------------" << endl;
}

void ImprimePilha(int pilha){
    system("cls");
    cout << "---------- Pilha ----------" << endl;
    if(pl[pilha].topo > -1){
        for(int i = 0; i <= pl[pilha].topo; i++){
            cout << pl[pilha].dados[i] << "\t";
        }
    }
    else
        cout << "\tPilha Vazia";
    cout << "\n---------------------------" << endl;
    cout << endl;
}