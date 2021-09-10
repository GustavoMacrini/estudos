#include <iostream>
#include <string>
#include <windows.h>

//coisas a fazer:
//uppercase nos produtos*********************

using namespace std;

#define CLEAR "cls"
#define PAUSE "pause"

//quantidade de produtos aceitos no estoque
#define N 10

//funcoes
int menu();
void addProduto();
void estoqueShow();
void estoqueControl();
void estoqueControlAdd();
void estoqueControlSub();
void removeProduto();
void sair();

//estrutura de dados
typedef struct{
    string nome;
    int qntd=0;
    float valor=0;
} Produto[N];

Produto pd;

int main(){
    //Habilitar acentuação
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);

    //variavel para nomeação dos produtos inicialmente
    static int setPdNome = 0;

    //colocar o nome inicial em todos os produtos, rodando apenas 1 vez
    if(setPdNome == 0){
        for(int i = 0; i <= N; i++){
            pd[i].nome = "none";
            setPdNome++;
        }
    }
    
    int escolha;
    escolha = menu();

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
                cout << "Deseja sair? [S]im [N]ão: ";
                cin >> confirmar;
                if(confirmar == 'S' || confirmar == 's')
                    cout << "\nSaindo..." << endl;
                else
                    main();
                system(PAUSE);
                break;
        default:
                cout << "Opção inválida!!!" << endl;
                system(PAUSE);
                main();

    }

    //voltar linguagem padrão do sistema
    SetConsoleOutputCP(LinguaPadrao);

    return 0;
}

int menu(){
    int opcao;
    system(CLEAR);
    cout << "-----------------MENU-----------------" << endl;
    cout << " 1 - Adicionar produto " << endl;
    cout << " 2 - Controle de estoque " << endl;
    cout << " 3 - Checar estoque " << endl;
    cout << " 4 - Remover produto" << endl;
    cout << " 5 - SAIR" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Opção: ";
    cin >> opcao;

    return opcao;
}


void addProduto(){
    system(CLEAR);
    int i = 0;
    int continuar = 0;

    do{
        if(pd[i].nome=="none"){
            cout << "------------------------" << endl;
            cout << "Produto...: ";
            cin >> pd[i].nome;
            cout << "Quantidade: ";
            cin >> pd[i].qntd;
            cout << "Valor.....: R$ ";
            cin >> pd[i].valor;
            continuar++;
        }
        else{
            i++;
            continuar = 0;
        }
    }while(continuar == 0);

    cout << "------------------------" << endl;
    cout << "\nVoltando para o menu..." << endl;
    
    system(PAUSE);
    main();
}


void estoqueShow(){
    system(CLEAR);
    for(int i = 0; i < N; i++){
        if(pd[i].nome!="none")
            cout << pd[i].nome << " | " << pd[i].qntd << " | R$ " << pd[i].valor << endl;
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
    cout << "Opção: ";
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
                cout << "Opção inválida!!!" << endl;
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

    for(int i = 0; i <= N; i++ ){
        if(pd[i].nome == produto){
            pd[i].qntd += quantidade;
            cout << "Produto........: " << pd[i].nome << endl;
            cout << "Nova quantidade: " << pd[i].qntd << endl;
            cout << "-----------------------------" << endl;
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

    
    for(int i = 0; i <= N; i++ ){
        if(pd[i].nome == produto){
            if(pd[i].qntd >= quantidade){
                pd[i].qntd -= quantidade;
                cout << "Produto........: " << pd[i].nome << endl;
                cout << "Nova quantidade: " << pd[i].qntd << endl;
                cout << "-----------------------------" << endl;
            }
            else{
                cout << "Quantidade para remoção Inválida!!!" << endl;
                cout << "Quantidade em estoque: " << pd[i].qntd << endl;
                cout << "-----------------------------" << endl;
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
    cout << "\nProduto a ser removido: " << produto << endl;
    cout << "Confirmar? [S]im [N]ão: ";
    cin >> confirmar;

    if(confirmar == 'S' || confirmar == 's'){
        for(int i = 0; i <= N; i++){
            if(pd[i].nome == produto){
                pd[i].nome = "none";
                pd[i].qntd = 0;
                pd[i].valor = 0;
                system(PAUSE);
            }
        }
    }
    else{
        if(confirmar == 'N' || confirmar == 'n'){
            cout << "-----------------------" << endl;
            cout << "Remoção cancelada!!!" << endl;
            cout << "-----------------------" << endl;
            system(PAUSE);
        }
        else{
            cout << "-----------------------" << endl;
            cout << "Opção inválida!!!" << endl;
            cout << "-----------------------" << endl;
            system(PAUSE);
        }
    }
    
    main();

}
