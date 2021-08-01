#include <iostream>
#include <string>

//coisas a fazer:
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

//estrutura de dados
typedef struct{
    string nome[N];
    int qntd[N]={0};
    float valor[N]={0};
} Produto;

Produto pd;

int main(){
    int escolha;

    //variavel para nomeação dos produtos inicialmente
    static int setPdNome = 0;

    system(CLEAR);
    cout << "-----------------MENU-----------------" << endl;
    cout << " 1 - Adicionar produto " << endl;
    cout << " 2 - Controle de estoque " << endl;
    cout << " 3 - Checar estoque " << endl;
    cout << " 4 - Remover produto" << endl;
    cout << " 5 - SAIR" << endl;
    cout << "--------------------------------------" << endl;
    cin >> escolha;

    //colocar o nome inicial em todos os produtos, rodando apenas 1 vez
    if(setPdNome == 0){
        for(int i = 0; i <= N; i++){
            pd.nome[i] = "none";
            setPdNome++;
        }
    }

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
                if(confirmar == 'S' || confirmar == 's')
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
    string teste[50];

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

    for(int i = 0; i <= N; i++ ){
        if(pd.nome[i] == produto){
            pd.qntd[i] += quantidade;
            cout << "Produto: " << pd.nome[i] << endl;
            cout << "Nova quantidade: " << pd.qntd[i] << endl;
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
        if(pd.nome[i] == produto){
            if(pd.qntd[i] >= quantidade){
                pd.qntd[i] -= quantidade;
                cout << "Produto: " << pd.nome[i] << endl;
                cout << "Nova quantidade: " << pd.qntd[i] << endl;
                cout << "-----------------------------" << endl;
            }
            else{
                cout << "Quantidade para remocao Invalida!!!" << endl;
                cout << "Quantidade em estoque: " << pd.qntd[i] << endl;
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
    cout << "Produto a ser removido: " << produto << endl;
    cout << "Confirmar? [S]im [N]ao: ";
    cin >> confirmar;

    if(confirmar == 'S' || confirmar == 's'){
        for(int i = 0; i <= N; i++){
            if(pd.nome[i] == produto){
                pd.nome[i] = "none";
                pd.qntd[i] = 0;
                pd.valor[i] = 0;
                system(PAUSE);
            }
        }
    }
    else{
        if(confirmar == 'N' || confirmar == 'n'){
            cout << "-----------------------" << endl;
            cout << "Remocao cancelada!!!" << endl;
            cout << "-----------------------" << endl;
            system(PAUSE);
        }
    }
    
    main();

}
