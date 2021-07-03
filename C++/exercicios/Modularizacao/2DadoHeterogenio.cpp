#include <iostream>
#include <ctype.h>

#define CLEAR "cls"

using namespace std;

struct pessoa{
    string nome;
    string CPF;
    float altura;
    float peso;
};

void mostrarPessoa(struct pessoa pss){
    cout << pss.nome << endl;
    cout << pss.CPF << endl;
    cout << pss.altura << endl;
    cout << pss.peso << endl;
}

void limparCPF(struct pessoa *pss){
    string cpflimpo = "";
    for(int i=0; i < pss->CPF.size(); i++)
        if(isdigit(pss->CPF[i]))
            cpflimpo += pss->CPF[i];
    
    pss->CPF = cpflimpo;
}

int main(){
    struct pessoa pessoa1;

    pessoa1.nome = "Joao Silva";
    pessoa1.CPF = "123.456.789-99";
    pessoa1.altura = 1.70;
    pessoa1.peso = 80;

    system(CLEAR);
    mostrarPessoa(pessoa1);
    limparCPF(&pessoa1);

    mostrarPessoa(pessoa1);

    return 0;
}