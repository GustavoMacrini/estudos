#include <iostream>
#include <string>
#include <algorithm>

//uppercase nos produtos*********************

using namespace std;

#define CLEAR "cls"
#define PAUSE "pause"

//quantidade de produtos aceitos no estoque
#define N 10

//funcoes
void menu();
void addProduto();
void estoqueShow();
void estoqueControl();
void estoqueControlAdd();
void estoqueControlSub();
void removeProduto();
void sair();
string strLower(string STR);

//estrutura de dados
typedef struct{
    string nome[N];
    int qntd[N]={0};
    float valor[N]={0};
} Produto;


/* 

Não aconselharia usar variavel global - pd -, mas como esse é sistema pequeno está ok

SUGESTÕES:
Não dar opção de remover produto quando não há adicionado.
Mostrar algo quando não há produto em estoque no "Checar estoque"

*/


Produto pd;

int main(){
    int escolha;

    //variavel para nomeação dos produtos inicialmente
    static int setPdNome = 0;
    if(setPdNome == 0){
        for(int i = 0; i <= N; i++){
            pd.nome[i] = "none";
            setPdNome++;
        }
    }

    system(CLEAR);
    cout << "-----------------MENU-----------------" << endl;
    cout << " 1 - Adicionar produto " << endl;
    cout << " 2 - Controle de estoque " << endl;
    cout << " 3 - Checar estoque " << endl;
    cout << " 4 - Remover produto" << endl;
    cout << " 5 - SAIR" << endl;
    cout << "--------------------------------------" << endl;
    cin >> escolha;

    switch(escolha){
        case 1:
            addProduto();
        break;

        case 2:
            estoqueControl();
        break;

        case 3:
            estoqueShow();
        break;

        case 4:
            removeProduto();
        break;

        case 5:
            char confirmar;
            cout << "Deseja sair? [S]im [N]ao: ";
            cin >> confirmar;
            if(tolower(confirmar) == 's')
                cout << "Saindo..." << endl;
            else
                main();
            system(PAUSE);
        break;

        default:
            cout << "Opcao invalida!!!" << endl;
            system(PAUSE);
            main();

    }


    return 0;
}

void addProduto(){
    system(CLEAR);
    int i = 0;
    int continuar = 0;

    do{
        if(pd.nome[i]=="none"){
            cout << "Produto: ";
            cin >> pd.nome[i];
            cout << "Quantidade: ";
            cin >> pd.qntd[i];
            cout << "Valor: R$ ";
            cin >> pd.valor[i];
            continuar++;
        }
        else{
            i++;
            continuar = 0;
        }
    }while(continuar == 0);

    cout << "Voltando para o menu..." << endl;
    system(PAUSE);
    main();
}


void estoqueShow(){
    system(CLEAR);
    for(int i = 0; i < N; i++){
        if(pd.nome[i]!="none")
            cout << pd.nome[i] << " | " << pd.qntd[i] << " | R$ " << pd.valor[i] << endl;
    }

    system(PAUSE);
    main();
}

void estoqueControl(){
    int opcao;
    system(CLEAR);
    cout << "-----Controle de Estoque-----" << endl;
    cout << "1 - Adicionar estoque " << endl;
    cout << "2 - Remover do estoque " << endl;
    cout << "3 - Menu" << endl;
    cout << "-----------------------------" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    switch(opcao){
        case 1:
            estoqueControlAdd();
        break;

        case 2:
            estoqueControlSub();
        break;

        case 3:
            main();
        break;

        default:
            cout << "Opcao inválida!!!" << endl;
            system(PAUSE);
            estoqueControl();
    }

}

void estoqueControlAdd(){
    string produto;
    int quantidade;

    cout << "-----------------------------" << endl;
    cout << "Produto: ";
    cin >> produto;
    cout << "Quantidade para adicionar: ";
    cin >> quantidade;
    cout << "-----------------------------" << endl;

    produto = strLower(produto);

    for(int i = 0; i <= N; i++ ){

        string nomeOriginal = strLower(pd.nome[i]);

        if(nomeOriginal == produto){
            pd.qntd[i] += quantidade;
            cout << "Produto: " << pd.nome[i] << endl;
            cout << "Nova quantidade: " << pd.qntd[i] << endl;
            cout << "-----------------------------" << endl;
            break;
        }
    }
    system(PAUSE);
    main();

}

void estoqueControlSub(){
    string produto;
    int quantidade;

    cout << "-----------------------------" << endl;
    cout << "Produto: ";
    cin >> produto;
    cout << "Quantidade para retirar: ";
    cin >> quantidade;
    cout << "-----------------------------" << endl;

    produto = strLower(produto);

    for(int i = 0; i <= N; i++ ){

        string nomeOriginal = strLower(pd.nome[i]);

        if(nomeOriginal == produto){
            if(pd.qntd[i] >= quantidade){
                pd.qntd[i] -= quantidade;
                cout << "Produto: " << pd.nome[i] << endl;
                cout << "Nova quantidade: " << pd.qntd[i] << endl;
                cout << "-----------------------------" << endl;
                break;
            }
            else{
                cout << "Quantidade para remocao Invalida!!!" << endl;
                cout << "Quantidade em estoque: " << pd.qntd[i] << endl;
                cout << "-----------------------------" << endl;
                break;
            }
        }
    }

    system(PAUSE);
    main();
}

void removeProduto(){
    string produto;
    char confirmar;

    system(CLEAR);

    cout << "----Remover Produto----" << endl;
    cout << "Nome: ";
    cin >> produto;
    cout << "Produto a ser removido: " << produto << endl;
    cout << "Confirmar? [S]im [N]ao: ";
    cin >> confirmar;

    produto = strLower(produto);

    if(tolower(confirmar) == 's'){
        for(int i = 0; i <= N; i++){

            string nomeOriginal = strLower(pd.nome[i]);

            if(nomeOriginal == produto){
                pd.nome[i] = "none";
                pd.qntd[i] = 0;
                pd.valor[i] = 0;
                system(PAUSE);
                break;
            }
        }
    }
    else{
        if(tolower(confirmar) == 'n')
        cout << "-----------------------" << endl;
        cout << "Remocao cancelada!!!" << endl;
        cout << "-----------------------" << endl;
        system(PAUSE);
    }

    main();

}

string strLower(string STR) {
    for_each(STR.begin(), STR.end(), [](char & c) {
        c = tolower(c);
    });
    return STR;
}