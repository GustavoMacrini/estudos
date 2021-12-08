//Exercicio criado apenas para demonstrar funções conhecidas a fim de nivelamento da turma

#include <iostream>

using namespace std;

#define CLEAR "cls"
#define PAUSE "pause"


//Numero de cadastros aceitos pelo sistema
#define N 20


//estrutura de dados
typedef struct{
    string nome[N];
    int idade[N] = {0};
}Pessoa;

Pessoa pss;

//funcoes
int menu();
void cadastrar();
void remover();
void lista();

int main(){
    system(CLEAR);
    int escolha;
    static int nomePessoa = 0;

    //nome inicial das pessoas
    if(nomePessoa == 0){
        for(int i = 0; i < N; i++)
        pss.nome[i] = "none";
        nomePessoa++;
    }

    //chamar o menu
    escolha = menu();

    switch(escolha){
        case 1:
                cadastrar();
                break;
        case 2:
                remover();
                break;
        case 3:
                lista();
                break;
        case 4:
                cout << "Saindo..." << endl;
                system(PAUSE);
                break;
        default:
                cout << "Opcao invalida!!!" << endl;
                system(PAUSE);
                main();
    }

    return 0;
}


int menu(){
    int escolha;

    cout << "----------MENU----------" << endl;
    cout << "1 - Cadastrar pessoa  " << endl;
    cout << "2 - Remover cadastro " << endl;
    cout << "3 - Mostrar cadastros " << endl;
    cout << "4 - Sair " << endl;
    cout << "------------------------" << endl;
    cout << "Escolha: ";
    cin >> escolha;

    return escolha;
}

void cadastrar(){
    system(CLEAR);
    string nome;
    int idade;
    int i = 0;
    int confirmar = 0;

    cout << "----------Cadastro----------" << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "Idade: ";
    cin >> idade;
    cout << "----------------------------" << endl;

     do{
        if(pss.nome[i] == "none"){
            pss.nome[i] = nome;
            pss.idade[i] = idade;
            confirmar++;
        }
        else
            i++;
        
    }while(confirmar == 0);

    cout << "Voltando ao menu..." << endl;
    system(PAUSE);
    main();
}

void remover(){
    system(CLEAR);

    string nome;
    int marcador = 0;
    int confirmar;

    cout << "----------Remocao de Cadastros----------" << endl;
    cout << "Nome da pessoa: ";
    cin >> nome;
    cout << "----------------------------------------" << endl;
    cout << "Realmente deseja remover " << nome << " ? \n 1 - Sim \n 2 - Nao " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Escolha: ";
    cin >> confirmar;
    cout << "----------------------------------------" << endl;

    if(confirmar == 1){
        for(int i = 0; i < N; i++){
            if(pss.nome[i] == nome){
                pss.nome[i] = "none";
                pss.idade[i] = 0;
                marcador++;
                cout << "Cadastro de " << nome << " removido com sucesso!" << endl;
                cout << "----------------------------------------" << endl;
            }
        }

        if(marcador == 0){
            cout << "Nome invalido!!!" << endl;
            system(PAUSE);
            remover();
        }
    }
    else{
        if(confirmar != 1 && confirmar != 2){
            cout << "Opcao Invalida!!!" << endl;
            cout << "Preste atencao nas letras maiusculas! " << endl;
            remover();
        }
    }

    system(PAUSE);
    main();

}

void lista(){
    system(CLEAR);

    cout << "----------Lista de Cadastros----------" << endl;

    for(int i = 0; i < N; i++){
        if(pss.nome[i] != "none"){
            cout << pss.nome[i] << "  Idade: ";
            cout << pss.idade[i] << endl;
        }
    }

    cout << "--------------------------------------" << endl;

    system(PAUSE);
    main();
}