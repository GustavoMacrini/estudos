#include <iostream>
#include <cstdlib>

#define PAUSE "pause"
#define CLEAR "cls"

using namespace std;

/*
OBSERVAÇÃO
Atualmente o jogo conta com uma randomização dos movimentos feitos pelo computador,
não sendo as melhores escolhas durante a partida
*/

/*
Objetivos
-fazer sistema de jogo online local
-menu selecionar modo de jogo
-arrumar a randomização das jogadas do computador
*/


//99 == X
//55 == O

//funções
void iniciar_tabela();
void mostrar_tabela();
int escolhe_posicao();
int jogada_computador();


//variavel global
int casa[3][3];
int final = 0;
int final_b = 0;
int vitoria = 0;
int derrota = 0;
int rodadas = 0;


int main(){
    system(CLEAR);
    cout << "---------- Jogo da Velha ---------- "<< endl;
    cout << "            Bem - Vindo!" << endl;
    cout << "\n Voce vai jogar com a figura X... " << endl;
    cout << "------------------------------------" << endl;
    system(PAUSE);

    iniciar_tabela();

    do
    {
        final = escolhe_posicao();
        final_b = jogada_computador();

        mostrar_tabela();

    } while (final == 0 && final_b == 0);
    cout << "FIM DO JOGO" << endl;

    if(final == 1){
        cout << "PARABENS, VOCE VENCEU!!!" << endl;
    }
    if(final_b == 1){
        cout << "QUE PENA, VOCE PERDEU!" << endl;
    }

    

    return 0;
}

void iniciar_tabela(){
    int contador=1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            casa[i][j] = contador;
            contador++;
            cout << casa[i][j];
    
        }
        cout << endl;
    }

}

void mostrar_tabela(){
    system(CLEAR);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(casa[i][j]==99)
                cout << "X";
            else if(casa[i][j]==55)
                cout << "O";
            else
                cout << casa[i][j];

            if(j < 2)
                cout << " | ";
    
        }
        cout << endl;
    }
}

int escolhe_posicao(){
    int posicao;
   
    mostrar_tabela();

    cout << "\nEscolha o numero da posicao desejada: ";
    cin >> posicao;

    //preencher as posicoes
    switch(posicao){
        case 1:
            if(casa[0][0] == 99 || casa[0][0] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[0][0] = 99;
            break;
        case 2:
            if(casa[0][1] == 99 || casa[0][1] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[0][1] = 99;
            break;
        case 3:
            if(casa[0][2] == 99 || casa[0][2] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[0][2] = 99;
            break;
        case 4:
            if(casa[1][0] == 99 || casa[1][0] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[1][0] = 99;
            break;
        case 5:
            if(casa[1][1] == 99 || casa[1][1] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[1][1] = 99;
            break;
        case 6:
            if(casa[1][2] == 99 || casa[1][2] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[1][2] = 99;
            break;
        case 7:
            if(casa[2][0] == 99 || casa[2][0] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[2][0] = 99;
            break;
        case 8:
            if(casa[2][1] == 99 || casa[2][1] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[2][1] = 99;
            break;
        case 9:
            if(casa[2][2] == 99 || casa[2][2] == 55){
                cout << "Posicao ja preenchida!!!" << endl;
                system(PAUSE);
                escolhe_posicao();
            }
            else
                casa[2][2] = 99;
            break;
        default:
            cout << "Posicao inválida!!!" << endl;

    }

    //casos de vitoria
    if(casa[0][0]==99 && casa[0][1]==99 && casa[0][2]==99)
        vitoria = 1;
    if(casa[0][0]==99 && casa[1][1]==99 && casa[2][2]==99)
        vitoria = 1;
    if(casa[0][0]==99 && casa[1][0]==99 && casa[2][0]==99)
        vitoria = 1;
    
    if(casa[1][0]==99 && casa[1][1]==99 && casa[1][2]==99)
        vitoria = 1;

    if(casa[2][0]==99 && casa[1][1]==99 && casa[0][2]==99)
        vitoria = 1;
    if(casa[2][0]==99 && casa[2][1]==99 && casa[2][2]==99)
        vitoria = 1;

    if(casa[0][1]==99 && casa[1][1]==99 && casa[2][1]==99)
        vitoria = 1;
    if(casa[0][2]==99 && casa[1][2]==99 && casa[2][2]==99)
        vitoria = 1;

    //Retorno Vitoria
    if(vitoria == 1)
        return 1;
    else
        return 0;

}

int jogada_computador(){
    int i, j;
    
    do{
        i = rand() % 3;
        j = rand() % 3;
    }while(casa[i][j]==99 || casa[i][j]==55);

    casa[i][j] = 55;

    //casos de vitoria do computador
    if(casa[0][0]==55 && casa[0][1]==55 && casa[0][2]==55)
        derrota = 1;
    if(casa[0][0]==55 && casa[1][1]==55 && casa[2][2]==55)
        derrota = 1;
    if(casa[0][0]==55 && casa[1][0]==55 && casa[2][0]==55)
        derrota = 1;
    
    if(casa[1][0]==55 && casa[1][1]==55 && casa[1][2]==55)
        derrota = 1;

    if(casa[2][0]==55 && casa[1][1]==55 && casa[0][2]==55)
        derrota = 1;
    if(casa[2][0]==55 && casa[2][1]==55 && casa[2][2]==55)
        derrota = 1;

    if(casa[0][1]==55 && casa[1][1]==55 && casa[2][1]==55)
        derrota = 1;
    if(casa[0][2]==55 && casa[1][2]==55 && casa[2][2]==55)
        derrota = 1;

        //finalizar jogo
        if(derrota == 1)
            return 1;
        else
            return 0;
        
}
