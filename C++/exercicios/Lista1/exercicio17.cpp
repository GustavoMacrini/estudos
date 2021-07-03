#include <iostream>

using namespace std;

int main(){
    int ingressos;
    float preco, lucro, max_lucro=0, melhor_preco, melhor_ingresso;

    cout << "|\tPreco\t|\tIngressos\t|\tLucro\t|" << endl;
    for(float preco = 5.0, ingressos=120; preco >=1.0; preco -=.5, ingressos+=26){
        lucro = preco * ingressos-200;
        cout << "|\t" << lucro << "\t\t|\t" << ingressos << "\t|\t\t" << lucro << "\t|\t" << endl;
        if(lucro > max_lucro){
            max_lucro = lucro;
            melhor_preco = preco;
            melhor_ingresso = ingressos;
        }
    }
    cout << "|---------------------------------------------|" << endl;
    cout << "Lucro Maximo: " << max_lucro << endl;
    cout << "preco: " << melhor_preco << endl;
    cout << "Ingressos: " << melhor_ingresso << endl;
    return 0;
}