#include <iostream>

#define P 2000

using namespace std;

int main(){
    char sexo, resp;
    int i=0;
    float sim = 0, nao = 0, f, m;

    while (i < P){
        i++;

        cout << "Sexo do entrevistado " << i << " [M ; F]: ";
        cin >> sexo;
        cout << "Resposta do entrevistado " << i << " [S ; N]: ";
        cin >> resp;

        if (resp == 'S'){
            sim +=1;

            if (sexo == 'F')
                f = (sim*100)/P;
        }
        else{
            nao +=1;

            if (sexo == 'M')
                m = (nao*100)/P;

        }

        
    }

    cout << "Pessoas que responderam Sim....................: " << sim << endl;
    cout << "Pessoas que responderam Nao....................: " << nao << endl;
    cout << "Porcentagem do sexo Feminino que respondeu Sim.: " << f << "% " << endl;
    cout << "Porcentagem do sexo Masculino que respondeu Nao: " << m << "% " << endl;
    cout << "------------------------------------------------------- ";

    return 0;
    
}