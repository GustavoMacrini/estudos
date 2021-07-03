#include <iostream>
#include <string>

using namespace std;

int main(){
    int lucro10 =0, lucro1020 = 0, lucro20 = 0;
    string nome;
    float pc, pv, total_pc = 0, total_pv =0, lucro;
    char continua = 'S';

    while(continua == 'S'){
        cout << "Nome: ";
        cin >> nome;
        cout << "Preço de compra: ";
        cin >> pc;
        cout << "Preco de venda: ";
        cin >> pv;

        lucro = pv/pc -1;

        if (lucro < 0.1)
            lucro10++;
        else if(lucro <= 0.2)
            lucro1020++;
        else lucro20++;

        total_pc += pc;
        total_pv += pv;

        cout <<"Deseja inserir mais produtos? [S]im, [N]ao: " << endl;
        cin >> continua;

    }

    cout << "Produtos com lucro < 10%: " << lucro10 << endl;
    cout << "Produtos com lucro entre 10% e 20%: " << lucro1020 << endl;
    cout << "Produtos com lucro maior que 20%: " << lucro20 << endl;
    cout << "Total de compra: " << total_pc << endl;
    cout << "Total de venda: " << total_pv << endl;
    return 0;
}