#include <iostream>

#define CLEAR "cls"
#define PAUSE "pause"

#define N 5

using namespace std;

//Estrutura de dados
typedef struct{
    string nome[N];
    int idade[N];
    string cpf[N];
    int codigo[N];
} Pessoa;

//Funções
int menu();
void cadastros();
void mostra_cadastro();
void cod_procurar();

//variavel global
Pessoa pss;

int main(){
    int opcao;

    do{
        opcao = menu();
        switch(opcao){
            case 1: 
                    cadastros();
                    break;
            case 2:
                    mostra_cadastro();
                    break;
            case 3:
                    cod_procurar();
                    break;
            case 4: 
                    cout << "Saindo..." << endl;
                    break;
            default:
                    cout << "Opcao Invalida !!!" << endl;
                    break;
        }
        system(PAUSE);
    }while(opcao != 4);


    return 0;
}

int menu(){
    int o;
    system(CLEAR);
    cout << "-------- MENU DO SISTEMA--------" << endl;
    cout << " 1 - Cadastrar Pessoas" << endl;
    cout << " 2 - Consultar Cadastros" << endl;
    cout << " 3 - Consultar por codigo" << endl;
    cout << " 4 - Sair " << endl;
    cout << "Digite a opcao desejada: ";
    cin >> o;
    return o;
}

void cadastros(){
    system(CLEAR);
        cout << "----- Cadastro de pessoas -----" << endl;
        for(int i=0; i < N; i++){
            cout << "Pessoa " << i+1 << endl;
            cout << "Nome.: ";
            cin >> pss.nome[i];
            cout << "Idade: ";
            cin >> pss.idade[i];
            cout << "CPF..: ";
            cin >> pss.cpf[i];
            pss.codigo[i] = i+1;
            cout << "----------------------------" << endl;
        }
        cout << "----- Cadastro completo ----- " << endl;
}

void mostra_cadastro(){
    system(CLEAR);
    cout << "----- Lista de Cadastros -----" << endl;
    for(int i=0; i < N; i++){
        cout << "Pessoa " << pss.codigo[i] << endl;
        cout << pss.nome[i] << endl;
        cout << pss.idade[i] << endl;
        cout << pss.cpf[i] << endl;
        cout << "------------------------------" << endl;
    }
}

void cod_procurar(){
    system(CLEAR);
    int cod;
    int contador=0;

    cout << "Digite o codigo a ser consultado: ";
    cin >> cod;

    for(int i = 0; i < N; i++){
        if(cod == i+1){
            cout << "Nome.: " << pss.nome[i] << endl;
            cout << "Idade: " << pss.idade[i] << endl;
            cout << "CPF..: " << pss.cpf[i] << endl;
            contador++;
        }
    }

    if(contador == 0)
        cout << "Codigo inexistente !!!" << endl;

}

