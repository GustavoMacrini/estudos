#include <iostream>
#include <chrono>
#include <string>

using namespace std;

#include "Recursao.cpp"

int menu();

int main() {
    // seus testes aqui
    // eles não serão avaliados pelo corretor automático
    Recursao rec;
    int op, p, q;

    /*cout << rec.fatorial(5) << endl;

    cout << rec.contagemCrescente(6) << endl;

    cout << rec.contagemDecrescente(6) << endl;

    cout << rec.intervaloCrescente(6, 12) << endl;

    cout << rec.intervaloDecrescente(6, 12) << endl;

    cout << rec.paresCrescente(6) << endl;*/

    do{
        op = menu();
        switch(op){
            case 1:
                cout << "\nValor: ";
                cin >> p;
                cout << rec.contagemCrescente(p) << endl;
                break;
            case 2:
                cout << "\nValor: ";
                cin >> p;
                cout << rec.fatorial(p) << endl;
                break;
            case 3:
                cout << "\nValor: ";
                cin >> p;
                cout << rec.contagemDecrescente(p) << endl;
                break;
            case 4:
                cout << "\nValor1: ";
                cin >> p;
                cout << "\nValor2: ";
                cin >> q;
                cout << rec.intervaloCrescente(p, q) << endl;
                break;
            case 5:
                cout << "\nValor1: ";
                cin >> p;
                cout << "\nValor2: ";
                cin >> q;
                cout << rec.intervaloDecrescente(p, q) << endl;
                break;
            case 6:
                cout << "\nValor: ";
                cin >> p;
                cout << rec.paresCrescente(p) << endl;
                break;
            case 9:
                cout << "\nSAINDO..." << endl;
                break;
            default:
                cout << "Escolha invalida" << endl;            
        }
        system("pause");
    }while(op != 9);
    

}


int menu(){
    int op;
    system("cls");

    cout << "---------- MENU ----------" << endl;
    cout << "1 - Contagem Crescente" << endl;
    cout << "2 - Fatorial" << endl;
    cout << "3 - Contagem Decrescente" << endl;
    cout << "4 - Intervalo Crescente" << endl;
    cout << "5 - Intervalo Decrescente" << endl;
    cout << "6 - Pares Crescente" << endl;
    cout << "9 - SAIR" << endl;
    cout << "--------------------------" << endl;
    cout << "escolha: " ; 
    cin >> op;
    return op;
}